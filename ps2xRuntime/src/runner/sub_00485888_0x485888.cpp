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

// Function: sub_00485888
// Address: 0x485888 - 0x485928
void sub_00485888_0x485888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485888_0x485888");
#endif

    switch (ctx->pc) {
        case 0x485888u: goto label_485888;
        case 0x48588cu: goto label_48588c;
        case 0x485890u: goto label_485890;
        case 0x485894u: goto label_485894;
        case 0x485898u: goto label_485898;
        case 0x48589cu: goto label_48589c;
        case 0x4858a0u: goto label_4858a0;
        case 0x4858a4u: goto label_4858a4;
        case 0x4858a8u: goto label_4858a8;
        case 0x4858acu: goto label_4858ac;
        case 0x4858b0u: goto label_4858b0;
        case 0x4858b4u: goto label_4858b4;
        case 0x4858b8u: goto label_4858b8;
        case 0x4858bcu: goto label_4858bc;
        case 0x4858c0u: goto label_4858c0;
        case 0x4858c4u: goto label_4858c4;
        case 0x4858c8u: goto label_4858c8;
        case 0x4858ccu: goto label_4858cc;
        case 0x4858d0u: goto label_4858d0;
        case 0x4858d4u: goto label_4858d4;
        case 0x4858d8u: goto label_4858d8;
        case 0x4858dcu: goto label_4858dc;
        case 0x4858e0u: goto label_4858e0;
        case 0x4858e4u: goto label_4858e4;
        case 0x4858e8u: goto label_4858e8;
        case 0x4858ecu: goto label_4858ec;
        case 0x4858f0u: goto label_4858f0;
        case 0x4858f4u: goto label_4858f4;
        case 0x4858f8u: goto label_4858f8;
        case 0x4858fcu: goto label_4858fc;
        case 0x485900u: goto label_485900;
        case 0x485904u: goto label_485904;
        case 0x485908u: goto label_485908;
        case 0x48590cu: goto label_48590c;
        case 0x485910u: goto label_485910;
        case 0x485914u: goto label_485914;
        case 0x485918u: goto label_485918;
        case 0x48591cu: goto label_48591c;
        case 0x485920u: goto label_485920;
        case 0x485924u: goto label_485924;
        default: break;
    }

    ctx->pc = 0x485888u;

label_485888:
    // 0x485888: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x485888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_48588c:
    // 0x48588c: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x48588cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_485890:
    // 0x485890: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x485890u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
label_485894:
    // 0x485894: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x485894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_485898:
    // 0x485898: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x485898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_48589c:
    // 0x48589c: 0x24e7ad18  addiu       $a3, $a3, -0x52E8
    ctx->pc = 0x48589cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946072));
label_4858a0:
    // 0x4858a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4858a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4858a4:
    // 0x4858a4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4858a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_4858a8:
    // 0x4858a8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4858a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4858ac:
    // 0x4858ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4858acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4858b0:
    // 0x4858b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4858b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4858b4:
    // 0x4858b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4858b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4858b8:
    // 0x4858b8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4858b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4858bc:
    // 0x4858bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4858bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4858c0:
    // 0x4858c0: 0x8ce20118  lw          $v0, 0x118($a3)
    ctx->pc = 0x4858c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 280)));
label_4858c4:
    // 0x4858c4: 0x34a50018  ori         $a1, $a1, 0x18
    ctx->pc = 0x4858c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
label_4858c8:
    // 0x4858c8: 0x40f809  jalr        $v0
label_4858cc:
    if (ctx->pc == 0x4858CCu) {
        ctx->pc = 0x4858CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4858C8u;
        // 0x4858cc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4858D0u;
        goto label_4858d0;
    }
    ctx->pc = 0x4858C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4858D0u);
        ctx->pc = 0x4858CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4858C8u;
        // 0x4858cc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4858C8u, 0x4858D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4858D0u;
label_4858d0:
    // 0x4858d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4858d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4858d4:
    // 0x4858d4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_4858d8:
    if (ctx->pc == 0x4858D8u) {
        ctx->pc = 0x4858D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4858D4u;
        // 0x4858d8: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4858DCu;
        goto label_4858dc;
    }
    ctx->pc = 0x4858D4u;
    {
        const bool branch_taken_0x4858d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4858D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4858D4u;
        // 0x4858d8: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4858d4) {
            ctx->pc = 0x485908u;
            goto label_485908;
        }
    }
    ctx->pc = 0x4858DCu;
label_4858dc:
    // 0x4858dc: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x4858dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_4858e0:
    // 0x4858e0: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x4858e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
label_4858e4:
    // 0x4858e4: 0x2484ebd8  addiu       $a0, $a0, -0x1428
    ctx->pc = 0x4858e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962136));
label_4858e8:
    // 0x4858e8: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x4858e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_4858ec:
    // 0x4858ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4858ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4858f0:
    // 0x4858f0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x4858f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_4858f4:
    // 0x4858f4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x4858f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_4858f8:
    // 0x4858f8: 0xc11ff8e  jal         func_47FE38
label_4858fc:
    if (ctx->pc == 0x4858FCu) {
        ctx->pc = 0x4858FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4858F8u;
        // 0x4858fc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485900u;
        goto label_485900;
    }
    ctx->pc = 0x4858F8u;
    SET_GPR_U32(ctx, 31, 0x485900u);
    ctx->pc = 0x4858FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4858F8u;
    // 0x4858fc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE38u, 0x4858F8u, 0x485900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485900u;
label_485900:
    // 0x485900: 0x10000002  b           . + 4 + (0x2 << 2)
label_485904:
    if (ctx->pc == 0x485904u) {
        ctx->pc = 0x485904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485900u;
        // 0x485904: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485908u;
        goto label_485908;
    }
    ctx->pc = 0x485900u;
    {
        const bool branch_taken_0x485900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x485904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485900u;
        // 0x485904: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485900) {
            ctx->pc = 0x48590Cu;
            goto label_48590c;
        }
    }
    ctx->pc = 0x485908u;
label_485908:
    // 0x485908: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x485908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48590c:
    // 0x48590c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x48590cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_485910:
    // 0x485910: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x485910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_485914:
    // 0x485914: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x485914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_485918:
    // 0x485918: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x485918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48591c:
    // 0x48591c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48591cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_485920:
    // 0x485920: 0x3e00008  jr          $ra
label_485924:
    if (ctx->pc == 0x485924u) {
        ctx->pc = 0x485924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485920u;
        // 0x485924: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485928u;
        goto label_fallthrough_0x485920;
    }
    ctx->pc = 0x485920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x485924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485920u;
        // 0x485924: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x485920:
    ctx->pc = 0x485928u;
}
