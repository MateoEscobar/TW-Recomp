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

// Function: sub_002AB1E8
// Address: 0x2ab1e8 - 0x2ab288
void sub_002AB1E8_0x2ab1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB1E8_0x2ab1e8");
#endif

    switch (ctx->pc) {
        case 0x2ab218u: goto label_2ab218;
        case 0x2ab220u: goto label_2ab220;
        case 0x2ab230u: goto label_2ab230;
        case 0x2ab268u: goto label_2ab268;
        default: break;
    }

    ctx->pc = 0x2ab1e8u;

    // 0x2ab1e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ab1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ab1ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ab1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ab1f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ab1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2ab1f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ab1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab1f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ab1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2ab1fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ab1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ab200: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2ab200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2ab204: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2AB204u;
    {
        const bool branch_taken_0x2ab204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB204u;
        // 0x2ab208: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab204) {
            ctx->pc = 0x2AB26Cu;
            goto label_2ab26c;
        }
    }
    ctx->pc = 0x2AB20Cu;
    // 0x2ab20c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ab20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ab210: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2AB210u;
    SET_GPR_U32(ctx, 31, 0x2AB218u);
    ctx->pc = 0x2AB214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB210u;
    // 0x2ab214: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2AB210u, 0x2AB218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB218u;
label_2ab218:
    // 0x2ab218: 0xc087502  jal         func_21D408
    ctx->pc = 0x2AB218u;
    SET_GPR_U32(ctx, 31, 0x2AB220u);
    ctx->pc = 0x2AB21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB218u;
    // 0x2ab21c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2AB218u, 0x2AB220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB220u;
label_2ab220:
    // 0x2ab220: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ab220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab224: 0x24050069  addiu       $a1, $zero, 0x69
    ctx->pc = 0x2ab224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x2ab228: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x2AB228u;
    SET_GPR_U32(ctx, 31, 0x2AB230u);
    ctx->pc = 0x2AB22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB228u;
    // 0x2ab22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2AB228u, 0x2AB230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB230u;
label_2ab230:
    // 0x2ab230: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ab230u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab234: 0x462000e  bltzl       $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2AB234u;
    {
        const bool branch_taken_0x2ab234 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2ab234) {
            ctx->pc = 0x2AB238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB234u;
            // 0x2ab238: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB270u;
            goto label_2ab270;
        }
    }
    ctx->pc = 0x2AB23Cu;
    // 0x2ab23c: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x2ab23cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2ab240: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2ab240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ab244: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AB244u;
    {
        const bool branch_taken_0x2ab244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab244) {
            ctx->pc = 0x2AB248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB244u;
            // 0x2ab248: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB258u;
            goto label_2ab258;
        }
    }
    ctx->pc = 0x2AB24Cu;
    // 0x2ab24c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ab24cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ab250: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2ab250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ab254: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2ab254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2ab258:
    // 0x2ab258: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2ab258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2ab25c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ab25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab260: 0xc0a689a  jal         func_29A268
    ctx->pc = 0x2AB260u;
    SET_GPR_U32(ctx, 31, 0x2AB268u);
    ctx->pc = 0x2AB264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB260u;
    // 0x2ab264: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A268u, 0x2AB260u, 0x2AB268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB268u;
label_2ab268:
    // 0x2ab268: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x2ab268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
label_2ab26c:
    // 0x2ab26c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ab26cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ab270:
    // 0x2ab270: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ab270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab274: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ab274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ab278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab27c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB27Cu;
        // 0x2ab280: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB284u;
    // 0x2ab284: 0x0  nop
    ctx->pc = 0x2ab284u;
    // NOP
    ctx->pc = 0x2ab288u;
}
