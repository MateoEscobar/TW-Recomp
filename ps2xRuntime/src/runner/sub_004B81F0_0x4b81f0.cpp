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

// Function: sub_004B81F0
// Address: 0x4b81f0 - 0x4b82d8
void sub_004B81F0_0x4b81f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B81F0_0x4b81f0");
#endif

    switch (ctx->pc) {
        case 0x4b8254u: goto label_4b8254;
        case 0x4b82b0u: goto label_4b82b0;
        case 0x4b82c4u: goto label_4b82c4;
        default: break;
    }

    ctx->pc = 0x4b81f0u;

    // 0x4b81f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b81f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b81f4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b81f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b81f8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x4b81f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x4b81fc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4b81fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4b8200: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4b8200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8204: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b8204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4b8208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b8208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b820c: 0x24440de8  addiu       $a0, $v0, 0xDE8
    ctx->pc = 0x4b820cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3560));
    // 0x4b8210: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4b8210u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b8214: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x4B8214u;
    {
        const bool branch_taken_0x4b8214 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B8218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8214u;
        // 0x4b8218: 0xace40028  sw          $a0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8214) {
            ctx->pc = 0x4B8248u;
            goto label_4b8248;
        }
    }
    ctx->pc = 0x4B821Cu;
    // 0x4b821c: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x4b821cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4b8220: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4b8220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4b8224: 0xdc460de8  ld          $a2, 0xDE8($v0)
    ctx->pc = 0x4b8224u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 3560)));
    // 0x4b8228: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x4b8228u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4b822c: 0x24e2ff98  addiu       $v0, $a3, -0x68
    ctx->pc = 0x4b822cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967192));
    // 0x4b8230: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x4b8230u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4b8234: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x4b8234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x4b8238: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x4b8238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x4b823c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b823cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b8240: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x4b8240u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x4b8244: 0xa7a30018  sh          $v1, 0x18($sp)
    ctx->pc = 0x4b8244u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 3));
label_4b8248:
    // 0x4b8248: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x4b8248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x4b824c: 0xc12df2c  jal         func_4B7CB0
    ctx->pc = 0x4B824Cu;
    SET_GPR_U32(ctx, 31, 0x4B8254u);
    ctx->pc = 0x4B8250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B824Cu;
    // 0x4b8250: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7CB0u, 0x4B824Cu, 0x4B8254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8254u;
label_4b8254:
    // 0x4b8254: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x4b8254u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b8258: 0x3c070059  lui         $a3, 0x59
    ctx->pc = 0x4b8258u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)89 << 16));
    // 0x4b825c: 0x24e304a0  addiu       $v1, $a3, 0x4A0
    ctx->pc = 0x4b825cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1184));
    // 0x4b8260: 0x32280002  andi        $t0, $s1, 0x2
    ctx->pc = 0x4b8260u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x4b8264: 0xad230028  sw          $v1, 0x28($t1)
    ctx->pc = 0x4b8264u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 3));
    // 0x4b8268: 0x2522fff8  addiu       $v0, $t1, -0x8
    ctx->pc = 0x4b8268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x4b826c: 0x94640008  lhu         $a0, 0x8($v1)
    ctx->pc = 0x4b826cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x5904A8u));
    // 0x4b8270: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x4b8270u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4b8274: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x4b8274u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4b8278: 0xdce504a0  ld          $a1, 0x4A0($a3)
    ctx->pc = 0x4b8278u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 1184)));
    // 0x4b827c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4b827cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4b8280: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x4b8280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x4b8284: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x4b8284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x4b8288: 0xa7a40008  sh          $a0, 0x8($sp)
    ctx->pc = 0x4b8288u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x4b828c: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B828Cu;
    {
        const bool branch_taken_0x4b828c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B828Cu;
        // 0x4b8290: 0xad3d0028  sw          $sp, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b828c) {
            ctx->pc = 0x4B82B0u;
            goto label_4b82b0;
        }
    }
    ctx->pc = 0x4B8294u;
    // 0x4b8294: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b8294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b8298: 0x8d240020  lw          $a0, 0x20($t1)
    ctx->pc = 0x4b8298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x4b829c: 0x24420668  addiu       $v0, $v0, 0x668
    ctx->pc = 0x4b829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1640));
    // 0x4b82a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B82A0u;
    {
        const bool branch_taken_0x4b82a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B82A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B82A0u;
        // 0x4b82a4: 0xad220028  sw          $v0, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b82a0) {
            ctx->pc = 0x4B82B0u;
            goto label_4b82b0;
        }
    }
    ctx->pc = 0x4B82A8u;
    // 0x4b82a8: 0xc136792  jal         func_4D9E48
    ctx->pc = 0x4B82A8u;
    SET_GPR_U32(ctx, 31, 0x4B82B0u);
    ctx->pc = 0x4D9E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D9E48u, 0x4B82A8u, 0x4B82B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B82B0u;
label_4b82b0:
    // 0x4b82b0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x4b82b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x4b82b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B82B4u;
    {
        const bool branch_taken_0x4b82b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B82B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B82B4u;
        // 0x4b82b8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b82b4) {
            ctx->pc = 0x4B82C8u;
            goto label_4b82c8;
        }
    }
    ctx->pc = 0x4B82BCu;
    // 0x4b82bc: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4B82BCu;
    SET_GPR_U32(ctx, 31, 0x4B82C4u);
    ctx->pc = 0x4B82C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B82BCu;
    // 0x4b82c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4B82BCu, 0x4B82C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B82C4u;
label_4b82c4:
    // 0x4b82c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b82c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4b82c8:
    // 0x4b82c8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x4b82c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b82cc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4b82ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b82d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B82D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B82D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B82D0u;
        // 0x4b82d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B82D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B82D8u;
}
