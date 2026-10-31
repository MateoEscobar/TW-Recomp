#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001461E0
// Address: 0x1461e0 - 0x1463e0
void sub_001461E0_0x1461e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001461E0_0x1461e0");
#endif

    switch (ctx->pc) {
        case 0x1461f8u: goto label_1461f8;
        case 0x146228u: goto label_146228;
        case 0x146258u: goto label_146258;
        case 0x146288u: goto label_146288;
        case 0x1462b8u: goto label_1462b8;
        case 0x1462e8u: goto label_1462e8;
        case 0x146318u: goto label_146318;
        case 0x146348u: goto label_146348;
        case 0x146378u: goto label_146378;
        default: break;
    }

    ctx->pc = 0x1461e0u;

    // 0x1461e0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1461e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1461e4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1461e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1461e8: 0x2443dd10  addiu       $v1, $v0, -0x22F0
    ctx->pc = 0x1461e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958352));
    // 0x1461ec: 0x246500c0  addiu       $a1, $v1, 0xC0
    ctx->pc = 0x1461ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1461f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1461f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5DDD14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DDD14u, _value); } while (0);
    // 0x1461f4: 0x0  nop
    ctx->pc = 0x1461f4u;
    // NOP
label_1461f8:
    // 0x1461f8: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x1461f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1461fc: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1461fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x146200: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x146200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x146204: 0x0  nop
    ctx->pc = 0x146204u;
    // NOP
    // 0x146208: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x146208u;
    {
        const bool branch_taken_0x146208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146208) {
            ctx->pc = 0x14620Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146208u;
            // 0x14620c: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1461F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1461f8;
        }
    }
    ctx->pc = 0x146210u;
    // 0x146210: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x146210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x146214: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x146214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x146218: 0x2443ddd0  addiu       $v1, $v0, -0x2230
    ctx->pc = 0x146218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958544));
    // 0x14621c: 0x246400c0  addiu       $a0, $v1, 0xC0
    ctx->pc = 0x14621cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x146220: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x146220u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5DDDD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DDDD4u, _value); } while (0);
    // 0x146224: 0x0  nop
    ctx->pc = 0x146224u;
    // NOP
label_146228:
    // 0x146228: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x146228u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x14622c: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x14622cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x146230: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x146230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x146234: 0x0  nop
    ctx->pc = 0x146234u;
    // NOP
    // 0x146238: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x146238u;
    {
        const bool branch_taken_0x146238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146238) {
            ctx->pc = 0x14623Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146238u;
            // 0x14623c: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146228;
        }
    }
    ctx->pc = 0x146240u;
    // 0x146240: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x146240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x146244: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x146244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x146248: 0x2443de90  addiu       $v1, $v0, -0x2170
    ctx->pc = 0x146248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
    // 0x14624c: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x14624cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x146250: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x146250u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5DDE94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DDE94u, _value); } while (0);
    // 0x146254: 0x0  nop
    ctx->pc = 0x146254u;
    // NOP
label_146258:
    // 0x146258: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x146258u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x14625c: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x14625cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x146260: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x146260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x146264: 0x0  nop
    ctx->pc = 0x146264u;
    // NOP
    // 0x146268: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x146268u;
    {
        const bool branch_taken_0x146268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146268) {
            ctx->pc = 0x14626Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146268u;
            // 0x14626c: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146258;
        }
    }
    ctx->pc = 0x146270u;
    // 0x146270: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x146270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x146274: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x146274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x146278: 0x2443def0  addiu       $v1, $v0, -0x2110
    ctx->pc = 0x146278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958832));
    // 0x14627c: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x14627cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x146280: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x146280u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5DDEF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DDEF4u, _value); } while (0);
    // 0x146284: 0x0  nop
    ctx->pc = 0x146284u;
    // NOP
label_146288:
    // 0x146288: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x146288u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x14628c: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x14628cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x146290: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x146290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x146294: 0x0  nop
    ctx->pc = 0x146294u;
    // NOP
    // 0x146298: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x146298u;
    {
        const bool branch_taken_0x146298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146298) {
            ctx->pc = 0x14629Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146298u;
            // 0x14629c: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146288;
        }
    }
    ctx->pc = 0x1462A0u;
    // 0x1462a0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1462a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1462a4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1462a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1462a8: 0x2443df50  addiu       $v1, $v0, -0x20B0
    ctx->pc = 0x1462a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
    // 0x1462ac: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x1462acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1462b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1462b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5DDF54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DDF54u, _value); } while (0);
    // 0x1462b4: 0x0  nop
    ctx->pc = 0x1462b4u;
    // NOP
label_1462b8:
    // 0x1462b8: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x1462b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1462bc: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1462bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1462c0: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1462c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1462c4: 0x0  nop
    ctx->pc = 0x1462c4u;
    // NOP
    // 0x1462c8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1462C8u;
    {
        const bool branch_taken_0x1462c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1462c8) {
            ctx->pc = 0x1462CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1462C8u;
            // 0x1462cc: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1462B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1462b8;
        }
    }
    ctx->pc = 0x1462D0u;
    // 0x1462d0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1462d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1462d4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1462d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1462d8: 0x2443dfb0  addiu       $v1, $v0, -0x2050
    ctx->pc = 0x1462d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959024));
    // 0x1462dc: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x1462dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1462e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1462e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5DDFB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DDFB4u, _value); } while (0);
    // 0x1462e4: 0x0  nop
    ctx->pc = 0x1462e4u;
    // NOP
label_1462e8:
    // 0x1462e8: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x1462e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1462ec: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1462ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1462f0: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1462f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1462f4: 0x0  nop
    ctx->pc = 0x1462f4u;
    // NOP
    // 0x1462f8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1462F8u;
    {
        const bool branch_taken_0x1462f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1462f8) {
            ctx->pc = 0x1462FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1462F8u;
            // 0x1462fc: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1462E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1462e8;
        }
    }
    ctx->pc = 0x146300u;
    // 0x146300: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x146300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x146304: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x146304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x146308: 0x2443e010  addiu       $v1, $v0, -0x1FF0
    ctx->pc = 0x146308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959120));
    // 0x14630c: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x14630cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x146310: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x146310u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5DE014u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DE014u, _value); } while (0);
    // 0x146314: 0x0  nop
    ctx->pc = 0x146314u;
    // NOP
label_146318:
    // 0x146318: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x146318u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x14631c: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x14631cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x146320: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x146320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x146324: 0x0  nop
    ctx->pc = 0x146324u;
    // NOP
    // 0x146328: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x146328u;
    {
        const bool branch_taken_0x146328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146328) {
            ctx->pc = 0x14632Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146328u;
            // 0x14632c: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146318;
        }
    }
    ctx->pc = 0x146330u;
    // 0x146330: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x146330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x146334: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x146334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x146338: 0x2443e070  addiu       $v1, $v0, -0x1F90
    ctx->pc = 0x146338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959216));
    // 0x14633c: 0x246400c0  addiu       $a0, $v1, 0xC0
    ctx->pc = 0x14633cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x146340: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x146340u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5DE074u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DE074u, _value); } while (0);
    // 0x146344: 0x0  nop
    ctx->pc = 0x146344u;
    // NOP
label_146348:
    // 0x146348: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x146348u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x14634c: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x14634cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x146350: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x146350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x146354: 0x0  nop
    ctx->pc = 0x146354u;
    // NOP
    // 0x146358: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x146358u;
    {
        const bool branch_taken_0x146358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146358) {
            ctx->pc = 0x14635Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146358u;
            // 0x14635c: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146348;
        }
    }
    ctx->pc = 0x146360u;
    // 0x146360: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x146360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x146364: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x146364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x146368: 0x2443e130  addiu       $v1, $v0, -0x1ED0
    ctx->pc = 0x146368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959408));
    // 0x14636c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x14636cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x146370: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x146370u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5DE134u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DE134u, _value); } while (0);
    // 0x146374: 0x0  nop
    ctx->pc = 0x146374u;
    // NOP
label_146378:
    // 0x146378: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x146378u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x14637c: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x14637cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x146380: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x146380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x146384: 0x0  nop
    ctx->pc = 0x146384u;
    // NOP
    // 0x146388: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x146388u;
    {
        const bool branch_taken_0x146388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146388) {
            ctx->pc = 0x14638Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146388u;
            // 0x14638c: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146378;
        }
    }
    ctx->pc = 0x146390u;
    // 0x146390: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x146390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x146394: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x146394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x146398: 0xac40b740  sw          $zero, -0x48C0($v0)
    ctx->pc = 0x146398u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50B740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B740u, _value); } while (0);
    // 0x14639c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14639cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1463a0: 0xac60b744  sw          $zero, -0x48BC($v1)
    ctx->pc = 0x1463a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50B744u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B744u, _value); } while (0);
    // 0x1463a4: 0xac40b75c  sw          $zero, -0x48A4($v0)
    ctx->pc = 0x1463a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50B75Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B75Cu, _value); } while (0);
    // 0x1463a8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1463a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1463ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1463acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1463b0: 0xac60b760  sw          $zero, -0x48A0($v1)
    ctx->pc = 0x1463b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50B760u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B760u, _value); } while (0);
    // 0x1463b4: 0xac40b758  sw          $zero, -0x48A8($v0)
    ctx->pc = 0x1463b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50B758u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B758u, _value); } while (0);
    // 0x1463b8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1463b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1463bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1463bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1463c0: 0xac60b754  sw          $zero, -0x48AC($v1)
    ctx->pc = 0x1463c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50B754u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B754u, _value); } while (0);
    // 0x1463c4: 0xac40b750  sw          $zero, -0x48B0($v0)
    ctx->pc = 0x1463c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50B750u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B750u, _value); } while (0);
    // 0x1463c8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1463c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1463cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1463ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1463d0: 0xac60b74c  sw          $zero, -0x48B4($v1)
    ctx->pc = 0x1463d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50B74Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50B74Cu, _value); } while (0);
    // 0x1463d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1463D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1463D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1463D4u;
        // 0x1463d8: 0xac40b748  sw          $zero, -0x48B8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948680), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1463D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1463DCu;
    // 0x1463dc: 0x0  nop
    ctx->pc = 0x1463dcu;
    // NOP
    ctx->pc = 0x1463e0u;
}
