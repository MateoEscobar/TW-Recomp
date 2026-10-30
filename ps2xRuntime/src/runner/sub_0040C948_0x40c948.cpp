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

// Function: sub_0040C948
// Address: 0x40c948 - 0x40ca18
void sub_0040C948_0x40c948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C948_0x40c948");
#endif

    switch (ctx->pc) {
        case 0x40c948u: goto label_40c948;
        case 0x40c94cu: goto label_40c94c;
        case 0x40c950u: goto label_40c950;
        case 0x40c954u: goto label_40c954;
        case 0x40c958u: goto label_40c958;
        case 0x40c95cu: goto label_40c95c;
        case 0x40c960u: goto label_40c960;
        case 0x40c964u: goto label_40c964;
        case 0x40c968u: goto label_40c968;
        case 0x40c96cu: goto label_40c96c;
        case 0x40c970u: goto label_40c970;
        case 0x40c974u: goto label_40c974;
        case 0x40c978u: goto label_40c978;
        case 0x40c97cu: goto label_40c97c;
        case 0x40c980u: goto label_40c980;
        case 0x40c984u: goto label_40c984;
        case 0x40c988u: goto label_40c988;
        case 0x40c98cu: goto label_40c98c;
        case 0x40c990u: goto label_40c990;
        case 0x40c994u: goto label_40c994;
        case 0x40c998u: goto label_40c998;
        case 0x40c99cu: goto label_40c99c;
        case 0x40c9a0u: goto label_40c9a0;
        case 0x40c9a4u: goto label_40c9a4;
        case 0x40c9a8u: goto label_40c9a8;
        case 0x40c9acu: goto label_40c9ac;
        case 0x40c9b0u: goto label_40c9b0;
        case 0x40c9b4u: goto label_40c9b4;
        case 0x40c9b8u: goto label_40c9b8;
        case 0x40c9bcu: goto label_40c9bc;
        case 0x40c9c0u: goto label_40c9c0;
        case 0x40c9c4u: goto label_40c9c4;
        case 0x40c9c8u: goto label_40c9c8;
        case 0x40c9ccu: goto label_40c9cc;
        case 0x40c9d0u: goto label_40c9d0;
        case 0x40c9d4u: goto label_40c9d4;
        case 0x40c9d8u: goto label_40c9d8;
        case 0x40c9dcu: goto label_40c9dc;
        case 0x40c9e0u: goto label_40c9e0;
        case 0x40c9e4u: goto label_40c9e4;
        case 0x40c9e8u: goto label_40c9e8;
        case 0x40c9ecu: goto label_40c9ec;
        case 0x40c9f0u: goto label_40c9f0;
        case 0x40c9f4u: goto label_40c9f4;
        case 0x40c9f8u: goto label_40c9f8;
        case 0x40c9fcu: goto label_40c9fc;
        case 0x40ca00u: goto label_40ca00;
        case 0x40ca04u: goto label_40ca04;
        case 0x40ca08u: goto label_40ca08;
        case 0x40ca0cu: goto label_40ca0c;
        case 0x40ca10u: goto label_40ca10;
        case 0x40ca14u: goto label_40ca14;
        default: break;
    }

    ctx->pc = 0x40c948u;

label_40c948:
    // 0x40c948: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x40c948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_40c94c:
    // 0x40c94c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40c94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_40c950:
    // 0x40c950: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x40c950u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_40c954:
    // 0x40c954: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x40c954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_40c958:
    // 0x40c958: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x40c958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_40c95c:
    // 0x40c95c: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x40c95cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_40c960:
    // 0x40c960: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x40c960u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40c964:
    // 0x40c964: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x40c964u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_40c968:
    // 0x40c968: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x40c968u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_40c96c:
    // 0x40c96c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40c96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_40c970:
    // 0x40c970: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x40c970u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_40c974:
    // 0x40c974: 0x8e25b734  lw          $a1, -0x48CC($s1)
    ctx->pc = 0x40c974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
label_40c978:
    // 0x40c978: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40c978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40c97c:
    // 0x40c97c: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x40c97cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_40c980:
    // 0x40c980: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x40c980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_40c984:
    // 0x40c984: 0x40f809  jalr        $v0
label_40c988:
    if (ctx->pc == 0x40C988u) {
        ctx->pc = 0x40C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C984u;
        // 0x40c988: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C98Cu;
        goto label_40c98c;
    }
    ctx->pc = 0x40C984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40C98Cu);
        ctx->pc = 0x40C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C984u;
        // 0x40c988: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C984u, 0x40C98Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40C98Cu;
label_40c98c:
    // 0x40c98c: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x40c98cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_40c990:
    // 0x40c990: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_40c994:
    if (ctx->pc == 0x40C994u) {
        ctx->pc = 0x40C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C990u;
        // 0x40c994: 0x8e25b734  lw          $a1, -0x48CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C998u;
        goto label_40c998;
    }
    ctx->pc = 0x40C990u;
    {
        const bool branch_taken_0x40c990 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C990u;
        // 0x40c994: 0x8e25b734  lw          $a1, -0x48CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c990) {
            ctx->pc = 0x40C9ACu;
            goto label_40c9ac;
        }
    }
    ctx->pc = 0x40C998u;
label_40c998:
    // 0x40c998: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x40c998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40c99c:
    // 0x40c99c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x40c99cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_40c9a0:
    // 0x40c9a0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x40c9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_40c9a4:
    // 0x40c9a4: 0x60f809  jalr        $v1
label_40c9a8:
    if (ctx->pc == 0x40C9A8u) {
        ctx->pc = 0x40C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C9A4u;
        // 0x40c9a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C9ACu;
        goto label_40c9ac;
    }
    ctx->pc = 0x40C9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40C9ACu);
        ctx->pc = 0x40C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C9A4u;
        // 0x40c9a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C9A4u, 0x40C9ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40C9ACu;
label_40c9ac:
    // 0x40c9ac: 0xc10b1c6  jal         func_42C718
label_40c9b0:
    if (ctx->pc == 0x40C9B0u) {
        ctx->pc = 0x40C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C9ACu;
        // 0x40c9b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C9B4u;
        goto label_40c9b4;
    }
    ctx->pc = 0x40C9ACu;
    SET_GPR_U32(ctx, 31, 0x40C9B4u);
    ctx->pc = 0x40C9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C9ACu;
    // 0x40c9b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x40C9ACu, 0x40C9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C9B4u;
label_40c9b4:
    // 0x40c9b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40c9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40c9b8:
    // 0x40c9b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_40c9bc:
    // 0x40c9bc: 0x8c4447c4  lw          $a0, 0x47C4($v0)
    ctx->pc = 0x40c9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_40c9c0:
    // 0x40c9c0: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x40c9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_40c9c4:
    // 0x40c9c4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_40c9c8:
    if (ctx->pc == 0x40C9C8u) {
        ctx->pc = 0x40C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C9C4u;
        // 0x40c9c8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C9CCu;
        goto label_40c9cc;
    }
    ctx->pc = 0x40C9C4u;
    {
        const bool branch_taken_0x40c9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C9C4u;
        // 0x40c9c8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c9c4) {
            ctx->pc = 0x40C9F4u;
            goto label_40c9f4;
        }
    }
    ctx->pc = 0x40C9CCu;
label_40c9cc:
    // 0x40c9cc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x40c9ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40c9d0:
    // 0x40c9d0: 0xc1038b6  jal         func_40E2D8
label_40c9d4:
    if (ctx->pc == 0x40C9D4u) {
        ctx->pc = 0x40C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C9D0u;
        // 0x40c9d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C9D8u;
        goto label_40c9d8;
    }
    ctx->pc = 0x40C9D0u;
    SET_GPR_U32(ctx, 31, 0x40C9D8u);
    ctx->pc = 0x40C9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C9D0u;
    // 0x40c9d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E2D8u, 0x40C9D0u, 0x40C9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C9D8u;
label_40c9d8:
    // 0x40c9d8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_40c9dc:
    if (ctx->pc == 0x40C9DCu) {
        ctx->pc = 0x40C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C9D8u;
        // 0x40c9dc: 0x8e25b734  lw          $a1, -0x48CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C9E0u;
        goto label_40c9e0;
    }
    ctx->pc = 0x40C9D8u;
    {
        const bool branch_taken_0x40c9d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C9D8u;
        // 0x40c9dc: 0x8e25b734  lw          $a1, -0x48CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c9d8) {
            ctx->pc = 0x40C9F4u;
            goto label_40c9f4;
        }
    }
    ctx->pc = 0x40C9E0u;
label_40c9e0:
    // 0x40c9e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x40c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40c9e4:
    // 0x40c9e4: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x40c9e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_40c9e8:
    // 0x40c9e8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x40c9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_40c9ec:
    // 0x40c9ec: 0x60f809  jalr        $v1
label_40c9f0:
    if (ctx->pc == 0x40C9F0u) {
        ctx->pc = 0x40C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C9ECu;
        // 0x40c9f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C9F4u;
        goto label_40c9f4;
    }
    ctx->pc = 0x40C9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40C9F4u);
        ctx->pc = 0x40C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C9ECu;
        // 0x40c9f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C9ECu, 0x40C9F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40C9F4u;
label_40c9f4:
    // 0x40c9f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x40c9f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40c9f8:
    // 0x40c9f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40c9f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40c9fc:
    // 0x40c9fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x40c9fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40ca00:
    // 0x40ca00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40ca00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40ca04:
    // 0x40ca04: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x40ca04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_40ca08:
    // 0x40ca08: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x40ca08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_40ca0c:
    // 0x40ca0c: 0x3e00008  jr          $ra
label_40ca10:
    if (ctx->pc == 0x40CA10u) {
        ctx->pc = 0x40CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CA0Cu;
        // 0x40ca10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40CA14u;
        goto label_40ca14;
    }
    ctx->pc = 0x40CA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CA0Cu;
        // 0x40ca10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40CA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40CA14u;
label_40ca14:
    // 0x40ca14: 0x0  nop
    ctx->pc = 0x40ca14u;
    // NOP
    ctx->pc = 0x40ca18u;
}
