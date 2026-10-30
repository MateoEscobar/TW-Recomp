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

// Function: sub_004CA1D0
// Address: 0x4ca1d0 - 0x4ca7d8
void sub_004CA1D0_0x4ca1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CA1D0_0x4ca1d0");
#endif

    switch (ctx->pc) {
        case 0x4ca2b0u: goto label_4ca2b0;
        case 0x4ca2c0u: goto label_4ca2c0;
        case 0x4ca2d0u: goto label_4ca2d0;
        case 0x4ca2d8u: goto label_4ca2d8;
        case 0x4ca2f0u: goto label_4ca2f0;
        case 0x4ca320u: goto label_4ca320;
        case 0x4ca360u: goto label_4ca360;
        case 0x4ca388u: goto label_4ca388;
        case 0x4ca3b8u: goto label_4ca3b8;
        case 0x4ca410u: goto label_4ca410;
        case 0x4ca438u: goto label_4ca438;
        case 0x4ca468u: goto label_4ca468;
        case 0x4ca4c0u: goto label_4ca4c0;
        case 0x4ca4e8u: goto label_4ca4e8;
        case 0x4ca518u: goto label_4ca518;
        case 0x4ca570u: goto label_4ca570;
        case 0x4ca5b4u: goto label_4ca5b4;
        case 0x4ca5bcu: goto label_4ca5bc;
        case 0x4ca5e8u: goto label_4ca5e8;
        case 0x4ca688u: goto label_4ca688;
        case 0x4ca6d8u: goto label_4ca6d8;
        case 0x4ca730u: goto label_4ca730;
        case 0x4ca780u: goto label_4ca780;
        default: break;
    }

    ctx->pc = 0x4ca1d0u;

    // 0x4ca1d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ca1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ca1d4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4ca1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4ca1d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ca1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ca1dc: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4ca1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4ca1e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ca1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ca1e4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4ca1e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca1e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ca1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ca1ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4ca1ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca1f0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4ca1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4ca1f4: 0x8c5138d4  lw          $s1, 0x38D4($v0)
    ctx->pc = 0x4ca1f4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5338D4u));
    // 0x4ca1f8: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x4ca1f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca1fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ca1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ca200: 0x28e2000a  slti        $v0, $a3, 0xA
    ctx->pc = 0x4ca200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x4ca204: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ca204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4ca208: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4ca208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4ca20c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4ca20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4ca210: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4CA210u;
    {
        const bool branch_taken_0x4ca210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA210u;
        // 0x4ca214: 0x8c7238d8  lw          $s2, 0x38D8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca210) {
            ctx->pc = 0x4CA25Cu;
            goto label_4ca25c;
        }
    }
    ctx->pc = 0x4CA218u;
    // 0x4ca218: 0x28e20008  slti        $v0, $a3, 0x8
    ctx->pc = 0x4ca218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x4ca21c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4CA21Cu;
    {
        const bool branch_taken_0x4ca21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA21Cu;
        // 0x4ca220: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca21c) {
            ctx->pc = 0x4CA260u;
            goto label_4ca260;
        }
    }
    ctx->pc = 0x4CA224u;
    // 0x4ca224: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x4ca224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
    // 0x4ca228: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x4ca228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4ca22c: 0x24a238a0  addiu       $v0, $a1, 0x38A0
    ctx->pc = 0x4ca22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 14496));
    // 0x4ca230: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4ca230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4ca234: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x4ca234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4ca238: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x4ca238u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5338A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5338A8u, _value); } while (0);
    // 0x4ca23c: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x4ca23cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5338B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5338B0u, _value); } while (0);
    // 0x4ca240: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4ca240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca244: 0xac460028  sw          $a2, 0x28($v0)
    ctx->pc = 0x4ca244u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x5338C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5338C8u, _value); } while (0);
    // 0x4ca248: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4ca248u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca24c: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x4ca24cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x5338B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5338B8u, _value); } while (0);
    // 0x4ca250: 0xaca038a0  sw          $zero, 0x38A0($a1)
    ctx->pc = 0x4ca250u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5338A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5338A0u, _value); } while (0);
    // 0x4ca254: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4CA254u;
    {
        const bool branch_taken_0x4ca254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA254u;
        // 0x4ca258: 0xac460020  sw          $a2, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca254) {
            ctx->pc = 0x4CA284u;
            goto label_4ca284;
        }
    }
    ctx->pc = 0x4CA25Cu;
label_4ca25c:
    // 0x4ca25c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4ca25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_4ca260:
    // 0x4ca260: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x4ca260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ca264: 0x246238a0  addiu       $v0, $v1, 0x38A0
    ctx->pc = 0x4ca264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 14496));
    // 0x4ca268: 0xac6038a0  sw          $zero, 0x38A0($v1)
    ctx->pc = 0x4ca268u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14496), GPR_U32(ctx, 0));
    // 0x4ca26c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x4ca26cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x4ca270: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x4ca270u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca274: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x4ca274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x4ca278: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x4ca278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x4ca27c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x4ca27cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x4ca280: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x4ca280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_4ca284:
    // 0x4ca284: 0x8e6238d4  lw          $v0, 0x38D4($s3)
    ctx->pc = 0x4ca284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 14548)));
    // 0x4ca288: 0x105100c1  beq         $v0, $s1, . + 4 + (0xC1 << 2)
    ctx->pc = 0x4CA288u;
    {
        const bool branch_taken_0x4ca288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x4CA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA288u;
        // 0x4ca28c: 0x3c160053  lui         $s6, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca288) {
            ctx->pc = 0x4CA590u;
            goto label_4ca590;
        }
    }
    ctx->pc = 0x4CA290u;
    // 0x4ca290: 0x3c100053  lui         $s0, 0x53
    ctx->pc = 0x4ca290u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)83 << 16));
    // 0x4ca294: 0x8e022840  lw          $v0, 0x2840($s0)
    ctx->pc = 0x4ca294u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532840u));
    // 0x4ca298: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4CA298u;
    {
        const bool branch_taken_0x4ca298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA298u;
        // 0x4ca29c: 0x8e6338d4  lw          $v1, 0x38D4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 14548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca298) {
            ctx->pc = 0x4CA2E0u;
            goto label_4ca2e0;
        }
    }
    ctx->pc = 0x4CA2A0u;
    // 0x4ca2a0: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4ca2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x4ca2a4: 0x24050c20  addiu       $a1, $zero, 0xC20
    ctx->pc = 0x4ca2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3104));
    // 0x4ca2a8: 0xc1322ac  jal         func_4C8AB0
    ctx->pc = 0x4CA2A8u;
    SET_GPR_U32(ctx, 31, 0x4CA2B0u);
    ctx->pc = 0x4CA2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA2A8u;
    // 0x4ca2ac: 0x24842844  addiu       $a0, $a0, 0x2844 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10308));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4CA2A8u, 0x4CA2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA2B0u;
label_4ca2b0:
    // 0x4ca2b0: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4ca2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x4ca2b4: 0x24050c20  addiu       $a1, $zero, 0xC20
    ctx->pc = 0x4ca2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3104));
    // 0x4ca2b8: 0xc1322ac  jal         func_4C8AB0
    ctx->pc = 0x4CA2B8u;
    SET_GPR_U32(ctx, 31, 0x4CA2C0u);
    ctx->pc = 0x4CA2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA2B8u;
    // 0x4ca2bc: 0x24842848  addiu       $a0, $a0, 0x2848 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4CA2B8u, 0x4CA2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA2C0u;
label_4ca2c0:
    // 0x4ca2c0: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4ca2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x4ca2c4: 0x24050c20  addiu       $a1, $zero, 0xC20
    ctx->pc = 0x4ca2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3104));
    // 0x4ca2c8: 0xc1322ac  jal         func_4C8AB0
    ctx->pc = 0x4CA2C8u;
    SET_GPR_U32(ctx, 31, 0x4CA2D0u);
    ctx->pc = 0x4CA2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA2C8u;
    // 0x4ca2cc: 0x2484284c  addiu       $a0, $a0, 0x284C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4CA2C8u, 0x4CA2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA2D0u;
label_4ca2d0:
    // 0x4ca2d0: 0xc132300  jal         func_4C8C00
    ctx->pc = 0x4CA2D0u;
    SET_GPR_U32(ctx, 31, 0x4CA2D8u);
    ctx->pc = 0x4CA2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA2D0u;
    // 0x4ca2d4: 0x24040420  addiu       $a0, $zero, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8C00u, 0x4CA2D0u, 0x4CA2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA2D8u;
label_4ca2d8:
    // 0x4ca2d8: 0xae022840  sw          $v0, 0x2840($s0)
    ctx->pc = 0x4ca2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10304), GPR_U32(ctx, 2));
    // 0x4ca2dc: 0x8e6338d4  lw          $v1, 0x38D4($s3)
    ctx->pc = 0x4ca2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 14548)));
label_4ca2e0:
    // 0x4ca2e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4ca2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ca2e4: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x4CA2E4u;
    {
        const bool branch_taken_0x4ca2e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4CA2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA2E4u;
        // 0x4ca2e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca2e4) {
            ctx->pc = 0x4CA380u;
            goto label_4ca380;
        }
    }
    ctx->pc = 0x4CA2ECu;
    // 0x4ca2ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ca2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ca2f0:
    // 0x4ca2f0: 0x8ca22840  lw          $v0, 0x2840($a1)
    ctx->pc = 0x4ca2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10304)));
    // 0x4ca2f4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x4ca2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4ca2f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4ca2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4ca2fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ca2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ca300: 0x28e40011  slti        $a0, $a3, 0x11
    ctx->pc = 0x4ca300u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x4ca304: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CA304u;
    {
        const bool branch_taken_0x4ca304 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA304u;
        // 0x4ca308: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca304) {
            ctx->pc = 0x4CA2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ca2f0;
        }
    }
    ctx->pc = 0x4CA30Cu;
    // 0x4ca30c: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x4ca30cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4ca310: 0x3c0a0053  lui         $t2, 0x53
    ctx->pc = 0x4ca310u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)83 << 16));
    // 0x4ca314: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x4ca314u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ca318: 0x3408fdac  ori         $t0, $zero, 0xFDAC
    ctx->pc = 0x4ca318u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64940);
    // 0x4ca31c: 0x24067dad  addiu       $a2, $zero, 0x7DAD
    ctx->pc = 0x4ca31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32173));
label_4ca320:
    // 0x4ca320: 0x8d452840  lw          $a1, 0x2840($t2)
    ctx->pc = 0x4ca320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 10304)));
    // 0x4ca324: 0x126202a  slt         $a0, $t1, $a2
    ctx->pc = 0x4ca324u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x4ca328: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x4ca328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca32c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x4ca32cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4ca330: 0xc4100b  movn        $v0, $a2, $a0
    ctx->pc = 0x4ca330u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x4ca334: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4ca334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4ca338: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x4ca338u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x4ca33c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4ca33cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4ca340: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4ca340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4ca344: 0x25087dad  addiu       $t0, $t0, 0x7DAD
    ctx->pc = 0x4ca344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32173));
    // 0x4ca348: 0x28e200eb  slti        $v0, $a3, 0xEB
    ctx->pc = 0x4ca348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)235) ? 1 : 0);
    // 0x4ca34c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4CA34Cu;
    {
        const bool branch_taken_0x4ca34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CA350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA34Cu;
        // 0x4ca350: 0x24c67dad  addiu       $a2, $a2, 0x7DAD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32173));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca34c) {
            ctx->pc = 0x4CA320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ca320;
        }
    }
    ctx->pc = 0x4CA354u;
    // 0x4ca354: 0x240700eb  addiu       $a3, $zero, 0xEB
    ctx->pc = 0x4ca354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
    // 0x4ca358: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x4ca358u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
    // 0x4ca35c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x4ca35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4ca360:
    // 0x4ca360: 0x8cc22840  lw          $v0, 0x2840($a2)
    ctx->pc = 0x4ca360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10304)));
    // 0x4ca364: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x4ca364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4ca368: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4ca368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4ca36c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ca36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ca370: 0x28e40100  slti        $a0, $a3, 0x100
    ctx->pc = 0x4ca370u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x4ca374: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CA374u;
    {
        const bool branch_taken_0x4ca374 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CA378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA374u;
        // 0x4ca378: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca374) {
            ctx->pc = 0x4CA360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ca360;
        }
    }
    ctx->pc = 0x4CA37Cu;
    // 0x4ca37c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ca37cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ca380:
    // 0x4ca380: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x4ca380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
    // 0x4ca384: 0x0  nop
    ctx->pc = 0x4ca384u;
    // NOP
label_4ca388:
    // 0x4ca388: 0x8ca22844  lw          $v0, 0x2844($a1)
    ctx->pc = 0x4ca388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10308)));
    // 0x4ca38c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x4ca38cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4ca390: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4ca390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4ca394: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ca394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ca398: 0x28e40100  slti        $a0, $a3, 0x100
    ctx->pc = 0x4ca398u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x4ca39c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CA39Cu;
    {
        const bool branch_taken_0x4ca39c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CA3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA39Cu;
        // 0x4ca3a0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca39c) {
            ctx->pc = 0x4CA388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ca388;
        }
    }
    ctx->pc = 0x4CA3A4u;
    // 0x4ca3a4: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x4ca3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
    // 0x4ca3a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ca3a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca3ac: 0x24c938a0  addiu       $t1, $a2, 0x38A0
    ctx->pc = 0x4ca3acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 14496));
    // 0x4ca3b0: 0x3c080053  lui         $t0, 0x53
    ctx->pc = 0x4ca3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)83 << 16));
    // 0x4ca3b4: 0x0  nop
    ctx->pc = 0x4ca3b4u;
    // NOP
label_4ca3b8:
    // 0x4ca3b8: 0x8d220018  lw          $v0, 0x18($t1)
    ctx->pc = 0x4ca3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x4ca3bc: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x4ca3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4ca3c0: 0x8d032844  lw          $v1, 0x2844($t0)
    ctx->pc = 0x4ca3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 10308)));
    // 0x4ca3c4: 0x8cc538a0  lw          $a1, 0x38A0($a2)
    ctx->pc = 0x4ca3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 14496)));
    // 0x4ca3c8: 0x471007  srav        $v0, $a3, $v0
    ctx->pc = 0x4ca3c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x4ca3cc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4ca3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4ca3d0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4ca3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4ca3d4: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x4ca3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x4ca3d8: 0x28e30100  slti        $v1, $a3, 0x100
    ctx->pc = 0x4ca3d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x4ca3dc: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x4CA3DCu;
    {
        const bool branch_taken_0x4ca3dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CA3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA3DCu;
        // 0x4ca3e0: 0xac820400  sw          $v0, 0x400($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca3dc) {
            ctx->pc = 0x4CA3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ca3b8;
        }
    }
    ctx->pc = 0x4CA3E4u;
    // 0x4ca3e4: 0x268438a0  addiu       $a0, $s4, 0x38A0
    ctx->pc = 0x4ca3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 14496));
    // 0x4ca3e8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4ca3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4ca3ec: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x4ca3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4ca3f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ca3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ca3f4: 0x8e8438a0  lw          $a0, 0x38A0($s4)
    ctx->pc = 0x4ca3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 14496)));
    // 0x4ca3f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ca3f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca3fc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4ca3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4ca400: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x4ca400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4ca404: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x4ca404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
    // 0x4ca408: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4ca408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4ca40c: 0x823004  sllv        $a2, $v0, $a0
    ctx->pc = 0x4ca40cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_4ca410:
    // 0x4ca410: 0x8ca22844  lw          $v0, 0x2844($a1)
    ctx->pc = 0x4ca410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10308)));
    // 0x4ca414: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x4ca414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4ca418: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4ca418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4ca41c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ca41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ca420: 0x28e40100  slti        $a0, $a3, 0x100
    ctx->pc = 0x4ca420u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x4ca424: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CA424u;
    {
        const bool branch_taken_0x4ca424 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CA428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA424u;
        // 0x4ca428: 0xac660800  sw          $a2, 0x800($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2048), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca424) {
            ctx->pc = 0x4CA410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ca410;
        }
    }
    ctx->pc = 0x4CA42Cu;
    // 0x4ca42c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ca42cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca430: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x4ca430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
    // 0x4ca434: 0x0  nop
    ctx->pc = 0x4ca434u;
    // NOP
label_4ca438:
    // 0x4ca438: 0x8ca22848  lw          $v0, 0x2848($a1)
    ctx->pc = 0x4ca438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10312)));
    // 0x4ca43c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x4ca43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4ca440: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4ca440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4ca444: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ca444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ca448: 0x28e40100  slti        $a0, $a3, 0x100
    ctx->pc = 0x4ca448u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x4ca44c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CA44Cu;
    {
        const bool branch_taken_0x4ca44c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CA450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA44Cu;
        // 0x4ca450: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca44c) {
            ctx->pc = 0x4CA438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ca438;
        }
    }
    ctx->pc = 0x4CA454u;
    // 0x4ca454: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4ca454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4ca458: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ca458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca45c: 0x244638a0  addiu       $a2, $v0, 0x38A0
    ctx->pc = 0x4ca45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 14496));
    // 0x4ca460: 0x3c080053  lui         $t0, 0x53
    ctx->pc = 0x4ca460u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)83 << 16));
    // 0x4ca464: 0x0  nop
    ctx->pc = 0x4ca464u;
    // NOP
label_4ca468:
    // 0x4ca468: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x4ca468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x4ca46c: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x4ca46cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4ca470: 0x8d032848  lw          $v1, 0x2848($t0)
    ctx->pc = 0x4ca470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 10312)));
    // 0x4ca474: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x4ca474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4ca478: 0x471007  srav        $v0, $a3, $v0
    ctx->pc = 0x4ca478u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x4ca47c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4ca47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4ca480: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4ca480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4ca484: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x4ca484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x4ca488: 0x28e30100  slti        $v1, $a3, 0x100
    ctx->pc = 0x4ca488u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x4ca48c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x4CA48Cu;
    {
        const bool branch_taken_0x4ca48c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CA490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA48Cu;
        // 0x4ca490: 0xac820400  sw          $v0, 0x400($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca48c) {
            ctx->pc = 0x4CA468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ca468;
        }
    }
    ctx->pc = 0x4CA494u;
    // 0x4ca494: 0x268438a0  addiu       $a0, $s4, 0x38A0
    ctx->pc = 0x4ca494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 14496));
    // 0x4ca498: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4ca498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4ca49c: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x4ca49cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x4ca4a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ca4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ca4a4: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x4ca4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4ca4a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ca4a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca4ac: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4ca4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4ca4b0: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x4ca4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4ca4b4: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x4ca4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
    // 0x4ca4b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4ca4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4ca4bc: 0xc23004  sllv        $a2, $v0, $a2
    ctx->pc = 0x4ca4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
label_4ca4c0:
    // 0x4ca4c0: 0x8ca22848  lw          $v0, 0x2848($a1)
    ctx->pc = 0x4ca4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10312)));
    // 0x4ca4c4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x4ca4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4ca4c8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4ca4c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4ca4cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ca4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ca4d0: 0x28e40100  slti        $a0, $a3, 0x100
    ctx->pc = 0x4ca4d0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x4ca4d4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CA4D4u;
    {
        const bool branch_taken_0x4ca4d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CA4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA4D4u;
        // 0x4ca4d8: 0xac660800  sw          $a2, 0x800($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2048), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca4d4) {
            ctx->pc = 0x4CA4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ca4c0;
        }
    }
    ctx->pc = 0x4CA4DCu;
    // 0x4ca4dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ca4dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca4e0: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x4ca4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
    // 0x4ca4e4: 0x0  nop
    ctx->pc = 0x4ca4e4u;
    // NOP
label_4ca4e8:
    // 0x4ca4e8: 0x8ca2284c  lw          $v0, 0x284C($a1)
    ctx->pc = 0x4ca4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10316)));
    // 0x4ca4ec: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x4ca4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4ca4f0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4ca4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4ca4f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ca4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ca4f8: 0x28e40100  slti        $a0, $a3, 0x100
    ctx->pc = 0x4ca4f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x4ca4fc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CA4FCu;
    {
        const bool branch_taken_0x4ca4fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CA500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA4FCu;
        // 0x4ca500: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca4fc) {
            ctx->pc = 0x4CA4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ca4e8;
        }
    }
    ctx->pc = 0x4CA504u;
    // 0x4ca504: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4ca504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4ca508: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ca508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca50c: 0x244638a0  addiu       $a2, $v0, 0x38A0
    ctx->pc = 0x4ca50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 14496));
    // 0x4ca510: 0x3c080053  lui         $t0, 0x53
    ctx->pc = 0x4ca510u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)83 << 16));
    // 0x4ca514: 0x0  nop
    ctx->pc = 0x4ca514u;
    // NOP
label_4ca518:
    // 0x4ca518: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x4ca518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x4ca51c: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x4ca51cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4ca520: 0x8d03284c  lw          $v1, 0x284C($t0)
    ctx->pc = 0x4ca520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 10316)));
    // 0x4ca524: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x4ca524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4ca528: 0x471007  srav        $v0, $a3, $v0
    ctx->pc = 0x4ca528u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x4ca52c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4ca52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4ca530: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4ca530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4ca534: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x4ca534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x4ca538: 0x28e30100  slti        $v1, $a3, 0x100
    ctx->pc = 0x4ca538u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x4ca53c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x4CA53Cu;
    {
        const bool branch_taken_0x4ca53c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CA540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA53Cu;
        // 0x4ca540: 0xac820400  sw          $v0, 0x400($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca53c) {
            ctx->pc = 0x4CA518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ca518;
        }
    }
    ctx->pc = 0x4CA544u;
    // 0x4ca544: 0x268438a0  addiu       $a0, $s4, 0x38A0
    ctx->pc = 0x4ca544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 14496));
    // 0x4ca548: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4ca548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4ca54c: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x4ca54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x4ca550: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ca550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ca554: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x4ca554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4ca558: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ca558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca55c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4ca55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4ca560: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x4ca560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4ca564: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x4ca564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
    // 0x4ca568: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4ca568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4ca56c: 0xc23004  sllv        $a2, $v0, $a2
    ctx->pc = 0x4ca56cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
label_4ca570:
    // 0x4ca570: 0x8ca2284c  lw          $v0, 0x284C($a1)
    ctx->pc = 0x4ca570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 10316)));
    // 0x4ca574: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x4ca574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4ca578: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4ca578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4ca57c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ca57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ca580: 0x28e40100  slti        $a0, $a3, 0x100
    ctx->pc = 0x4ca580u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x4ca584: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CA584u;
    {
        const bool branch_taken_0x4ca584 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CA588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA584u;
        // 0x4ca588: 0xac660800  sw          $a2, 0x800($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2048), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca584) {
            ctx->pc = 0x4CA570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ca570;
        }
    }
    ctx->pc = 0x4CA58Cu;
    // 0x4ca58c: 0xae7138d4  sw          $s1, 0x38D4($s3)
    ctx->pc = 0x4ca58cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 14548), GPR_U32(ctx, 17));
label_4ca590:
    // 0x4ca590: 0x8ea238d8  lw          $v0, 0x38D8($s5)
    ctx->pc = 0x4ca590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 14552)));
    // 0x4ca594: 0x1052002f  beq         $v0, $s2, . + 4 + (0x2F << 2)
    ctx->pc = 0x4CA594u;
    {
        const bool branch_taken_0x4ca594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x4CA598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA594u;
        // 0x4ca598: 0x3c100053  lui         $s0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca594) {
            ctx->pc = 0x4CA654u;
            goto label_4ca654;
        }
    }
    ctx->pc = 0x4CA59Cu;
    // 0x4ca59c: 0x8e022854  lw          $v0, 0x2854($s0)
    ctx->pc = 0x4ca59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10324)));
    // 0x4ca5a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4CA5A0u;
    {
        const bool branch_taken_0x4ca5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CA5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA5A0u;
        // 0x4ca5a4: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca5a0) {
            ctx->pc = 0x4CA5C0u;
            goto label_4ca5c0;
        }
    }
    ctx->pc = 0x4CA5A8u;
    // 0x4ca5a8: 0x24050420  addiu       $a1, $zero, 0x420
    ctx->pc = 0x4ca5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x4ca5ac: 0xc1322ac  jal         func_4C8AB0
    ctx->pc = 0x4CA5ACu;
    SET_GPR_U32(ctx, 31, 0x4CA5B4u);
    ctx->pc = 0x4CA5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA5ACu;
    // 0x4ca5b0: 0x24842850  addiu       $a0, $a0, 0x2850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8AB0u, 0x4CA5ACu, 0x4CA5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA5B4u;
label_4ca5b4:
    // 0x4ca5b4: 0xc132300  jal         func_4C8C00
    ctx->pc = 0x4CA5B4u;
    SET_GPR_U32(ctx, 31, 0x4CA5BCu);
    ctx->pc = 0x4CA5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA5B4u;
    // 0x4ca5b8: 0x24040c20  addiu       $a0, $zero, 0xC20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8C00u, 0x4CA5B4u, 0x4CA5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA5BCu;
label_4ca5bc:
    // 0x4ca5bc: 0xae022854  sw          $v0, 0x2854($s0)
    ctx->pc = 0x4ca5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10324), GPR_U32(ctx, 2));
label_4ca5c0:
    // 0x4ca5c0: 0x3c09fff7  lui         $t1, 0xFFF7
    ctx->pc = 0x4ca5c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65527 << 16));
    // 0x4ca5c4: 0x3c08fff6  lui         $t0, 0xFFF6
    ctx->pc = 0x4ca5c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65526 << 16));
    // 0x4ca5c8: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x4ca5c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca5cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ca5ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca5d0: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x4ca5d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ca5d4: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x4ca5d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4ca5d8: 0x3c0c0053  lui         $t4, 0x53
    ctx->pc = 0x4ca5d8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)83 << 16));
    // 0x4ca5dc: 0x35296fde  ori         $t1, $t1, 0x6FDE
    ctx->pc = 0x4ca5dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)28638);
    // 0x4ca5e0: 0x3508efdf  ori         $t0, $t0, 0xEFDF
    ctx->pc = 0x4ca5e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)61407);
    // 0x4ca5e4: 0x340b9502  ori         $t3, $zero, 0x9502
    ctx->pc = 0x4ca5e4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38146);
label_4ca5e8:
    // 0x4ca5e8: 0x8d432854  lw          $v1, 0x2854($t2)
    ctx->pc = 0x4ca5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 10324)));
    // 0x4ca5ec: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x4ca5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4ca5f0: 0x1c8202a  slt         $a0, $t6, $t0
    ctx->pc = 0x4ca5f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x4ca5f4: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x4ca5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca5f8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4ca5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4ca5fc: 0x104100b  movn        $v0, $t0, $a0
    ctx->pc = 0x4ca5fcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x4ca600: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4ca600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x4ca604: 0x233c3  sra         $a2, $v0, 15
    ctx->pc = 0x4ca604u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 15));
    // 0x4ca608: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x4ca608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4ca60c: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x4ca60cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x4ca610: 0x8d422854  lw          $v0, 0x2854($t2)
    ctx->pc = 0x4ca610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 10324)));
    // 0x4ca614: 0x24840400  addiu       $a0, $a0, 0x400
    ctx->pc = 0x4ca614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x4ca618: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x4ca618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x4ca61c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4ca61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4ca620: 0xac470400  sw          $a3, 0x400($v0)
    ctx->pc = 0x4ca620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1024), GPR_U32(ctx, 7));
    // 0x4ca624: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4ca624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4ca628: 0x8d422854  lw          $v0, 0x2854($t2)
    ctx->pc = 0x4ca628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 10324)));
    // 0x4ca62c: 0x28e60100  slti        $a2, $a3, 0x100
    ctx->pc = 0x4ca62cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x4ca630: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4ca630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4ca634: 0xac4d0800  sw          $t5, 0x800($v0)
    ctx->pc = 0x4ca634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2048), GPR_U32(ctx, 13));
    // 0x4ca638: 0x8d832850  lw          $v1, 0x2850($t4)
    ctx->pc = 0x4ca638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 10320)));
    // 0x4ca63c: 0x8d422854  lw          $v0, 0x2854($t2)
    ctx->pc = 0x4ca63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 10324)));
    // 0x4ca640: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4ca640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4ca644: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4ca644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4ca648: 0x14c0ffe7  bnez        $a2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x4CA648u;
    {
        const bool branch_taken_0x4ca648 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CA64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA648u;
        // 0x4ca64c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca648) {
            ctx->pc = 0x4CA5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ca5e8;
        }
    }
    ctx->pc = 0x4CA650u;
    // 0x4ca650: 0xaeb238d8  sw          $s2, 0x38D8($s5)
    ctx->pc = 0x4ca650u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 14552), GPR_U32(ctx, 18));
label_4ca654:
    // 0x4ca654: 0x8ec238dc  lw          $v0, 0x38DC($s6)
    ctx->pc = 0x4ca654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 14556)));
    // 0x4ca658: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x4CA658u;
    {
        const bool branch_taken_0x4ca658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CA65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA658u;
        // 0x4ca65c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca658) {
            ctx->pc = 0x4CA7B4u;
            goto label_4ca7b4;
        }
    }
    ctx->pc = 0x4CA660u;
    // 0x4ca660: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4ca660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4ca664: 0x3c05ffcc  lui         $a1, 0xFFCC
    ctx->pc = 0x4ca664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65484 << 16));
    // 0x4ca668: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4ca668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4ca66c: 0x3c04ffcb  lui         $a0, 0xFFCB
    ctx->pc = 0x4ca66cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65483 << 16));
    // 0x4ca670: 0x24460400  addiu       $a2, $v0, 0x400
    ctx->pc = 0x4ca670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x4ca674: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4ca674u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ca678: 0x34a56fff  ori         $a1, $a1, 0x6FFF
    ctx->pc = 0x4ca678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28671);
    // 0x4ca67c: 0x3484f000  ori         $a0, $a0, 0xF000
    ctx->pc = 0x4ca67cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61440);
    // 0x4ca680: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x4ca680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4ca684: 0x0  nop
    ctx->pc = 0x4ca684u;
    // NOP
label_4ca688:
    // 0x4ca688: 0x104182a  slt         $v1, $t0, $a0
    ctx->pc = 0x4ca688u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4ca68c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4ca68cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca690: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x4ca690u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4ca694: 0x24a56820  addiu       $a1, $a1, 0x6820
    ctx->pc = 0x4ca694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26656));
    // 0x4ca698: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x4ca698u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x4ca69c: 0x24846820  addiu       $a0, $a0, 0x6820
    ctx->pc = 0x4ca69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26656));
    // 0x4ca6a0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4ca6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4ca6a4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4ca6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4ca6a8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4ca6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4ca6ac: 0x4e1fff6  bgez        $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x4CA6ACu;
    {
        const bool branch_taken_0x4ca6ac = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x4CA6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA6ACu;
        // 0x4ca6b0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca6ac) {
            ctx->pc = 0x4CA688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ca688;
        }
    }
    ctx->pc = 0x4CA6B4u;
    // 0x4ca6b4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4ca6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4ca6b8: 0x3c05ffe7  lui         $a1, 0xFFE7
    ctx->pc = 0x4ca6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65511 << 16));
    // 0x4ca6bc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4ca6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4ca6c0: 0x3c04ffe6  lui         $a0, 0xFFE6
    ctx->pc = 0x4ca6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65510 << 16));
    // 0x4ca6c4: 0x24460800  addiu       $a2, $v0, 0x800
    ctx->pc = 0x4ca6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x4ca6c8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4ca6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ca6cc: 0x34a5727f  ori         $a1, $a1, 0x727F
    ctx->pc = 0x4ca6ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29311);
    // 0x4ca6d0: 0x3484f280  ori         $a0, $a0, 0xF280
    ctx->pc = 0x4ca6d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62080);
    // 0x4ca6d4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x4ca6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4ca6d8:
    // 0x4ca6d8: 0x104182a  slt         $v1, $t0, $a0
    ctx->pc = 0x4ca6d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4ca6dc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4ca6dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca6e0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x4ca6e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4ca6e4: 0x24a5321b  addiu       $a1, $a1, 0x321B
    ctx->pc = 0x4ca6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12827));
    // 0x4ca6e8: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x4ca6e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x4ca6ec: 0x2484321b  addiu       $a0, $a0, 0x321B
    ctx->pc = 0x4ca6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12827));
    // 0x4ca6f0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4ca6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4ca6f4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4ca6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4ca6f8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4ca6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4ca6fc: 0x4e1fff6  bgez        $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x4CA6FCu;
    {
        const bool branch_taken_0x4ca6fc = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x4CA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA6FCu;
        // 0x4ca700: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca6fc) {
            ctx->pc = 0x4CA6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ca6d8;
        }
    }
    ctx->pc = 0x4CA704u;
    // 0x4ca704: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4ca704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4ca708: 0x3c05ff9a  lui         $a1, 0xFF9A
    ctx->pc = 0x4ca708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65434 << 16));
    // 0x4ca70c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4ca70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4ca710: 0x3c04ff99  lui         $a0, 0xFF99
    ctx->pc = 0x4ca710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65433 << 16));
    // 0x4ca714: 0x24460c00  addiu       $a2, $v0, 0xC00
    ctx->pc = 0x4ca714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x4ca718: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x4ca718u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ca71c: 0x34a55e7f  ori         $a1, $a1, 0x5E7F
    ctx->pc = 0x4ca71cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24191);
    // 0x4ca720: 0x3484de80  ori         $a0, $a0, 0xDE80
    ctx->pc = 0x4ca720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)56960);
    // 0x4ca724: 0x3408cc43  ori         $t0, $zero, 0xCC43
    ctx->pc = 0x4ca724u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52291);
    // 0x4ca728: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x4ca728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4ca72c: 0x0  nop
    ctx->pc = 0x4ca72cu;
    // NOP
label_4ca730:
    // 0x4ca730: 0x124182a  slt         $v1, $t1, $a0
    ctx->pc = 0x4ca730u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4ca734: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4ca734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca738: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x4ca738u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4ca73c: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x4ca73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x4ca740: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x4ca740u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x4ca744: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x4ca744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x4ca748: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4ca748u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4ca74c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4ca74cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4ca750: 0x4e1fff7  bgez        $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4CA750u;
    {
        const bool branch_taken_0x4ca750 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x4CA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA750u;
        // 0x4ca754: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca750) {
            ctx->pc = 0x4CA730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ca730;
        }
    }
    ctx->pc = 0x4CA758u;
    // 0x4ca758: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4ca758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4ca75c: 0x3c05ff7f  lui         $a1, 0xFF7F
    ctx->pc = 0x4ca75cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65407 << 16));
    // 0x4ca760: 0x3c04ff7e  lui         $a0, 0xFF7E
    ctx->pc = 0x4ca760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65406 << 16));
    // 0x4ca764: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x4ca764u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x4ca768: 0x244828a0  addiu       $t0, $v0, 0x28A0
    ctx->pc = 0x4ca768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x4ca76c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x4ca76cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ca770: 0x34a55bff  ori         $a1, $a1, 0x5BFF
    ctx->pc = 0x4ca770u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)23551);
    // 0x4ca774: 0x3484dc00  ori         $a0, $a0, 0xDC00
    ctx->pc = 0x4ca774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)56320);
    // 0x4ca778: 0x34c60248  ori         $a2, $a2, 0x248
    ctx->pc = 0x4ca778u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)584);
    // 0x4ca77c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x4ca77cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4ca780:
    // 0x4ca780: 0x124182a  slt         $v1, $t1, $a0
    ctx->pc = 0x4ca780u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4ca784: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4ca784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca788: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x4ca788u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4ca78c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4ca78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4ca790: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x4ca790u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x4ca794: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4ca794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4ca798: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4ca798u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4ca79c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4ca79cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4ca7a0: 0x4e1fff7  bgez        $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4CA7A0u;
    {
        const bool branch_taken_0x4ca7a0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x4CA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA7A0u;
        // 0x4ca7a4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca7a0) {
            ctx->pc = 0x4CA780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ca780;
        }
    }
    ctx->pc = 0x4CA7A8u;
    // 0x4ca7a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ca7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ca7ac: 0xaec238dc  sw          $v0, 0x38DC($s6)
    ctx->pc = 0x4ca7acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 14556), GPR_U32(ctx, 2));
    // 0x4ca7b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ca7b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ca7b4:
    // 0x4ca7b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ca7b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ca7b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ca7b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ca7bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ca7bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ca7c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ca7c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ca7c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ca7c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ca7c8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ca7c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ca7cc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4ca7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ca7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4CA7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CA7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA7D0u;
        // 0x4ca7d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CA7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CA7D8u;
}
