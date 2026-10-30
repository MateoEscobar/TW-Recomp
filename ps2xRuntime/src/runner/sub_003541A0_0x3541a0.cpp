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

// Function: sub_003541A0
// Address: 0x3541a0 - 0x354280
void sub_003541A0_0x3541a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003541A0_0x3541a0");
#endif

    switch (ctx->pc) {
        case 0x3541ccu: goto label_3541cc;
        case 0x3541e0u: goto label_3541e0;
        case 0x3541e8u: goto label_3541e8;
        case 0x354208u: goto label_354208;
        case 0x354210u: goto label_354210;
        default: break;
    }

    ctx->pc = 0x3541a0u;

    // 0x3541a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3541a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3541a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3541a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3541a8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3541a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3541ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3541acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3541b0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3541b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3541b4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3541b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3541b8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3541b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3541bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3541bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3541c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3541c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3541c4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x3541C4u;
    SET_GPR_U32(ctx, 31, 0x3541CCu);
    ctx->pc = 0x3541C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3541C4u;
    // 0x3541c8: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3541C4u, 0x3541CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3541CCu;
label_3541cc:
    // 0x3541cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3541ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3541d0: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3541D0u;
    {
        const bool branch_taken_0x3541d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3541D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3541D0u;
        // 0x3541d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3541d0) {
            ctx->pc = 0x35425Cu;
            goto label_35425c;
        }
    }
    ctx->pc = 0x3541D8u;
    // 0x3541d8: 0xc08c978  jal         func_2325E0
    ctx->pc = 0x3541D8u;
    SET_GPR_U32(ctx, 31, 0x3541E0u);
    ctx->pc = 0x3541DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3541D8u;
    // 0x3541dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2325E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2325E0u, 0x3541D8u, 0x3541E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3541E0u;
label_3541e0:
    // 0x3541e0: 0xc0d4ca6  jal         func_353298
    ctx->pc = 0x3541E0u;
    SET_GPR_U32(ctx, 31, 0x3541E8u);
    ctx->pc = 0x3541E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3541E0u;
    // 0x3541e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353298u, 0x3541E0u, 0x3541E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3541E8u;
label_3541e8:
    // 0x3541e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3541e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3541ec: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3541ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3541f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3541f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3541f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3541F4u;
    {
        const bool branch_taken_0x3541f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3541F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3541F4u;
        // 0x3541f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3541f4) {
            ctx->pc = 0x354208u;
            goto label_354208;
        }
    }
    ctx->pc = 0x3541FCu;
    // 0x3541fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3541fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354200: 0xc0d497e  jal         func_3525F8
    ctx->pc = 0x354200u;
    SET_GPR_U32(ctx, 31, 0x354208u);
    ctx->pc = 0x354204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354200u;
    // 0x354204: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3525F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3525F8u, 0x354200u, 0x354208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354208u;
label_354208:
    // 0x354208: 0xc0d4c08  jal         func_353020
    ctx->pc = 0x354208u;
    SET_GPR_U32(ctx, 31, 0x354210u);
    ctx->pc = 0x35420Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354208u;
    // 0x35420c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353020u, 0x354208u, 0x354210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354210u;
label_354210:
    // 0x354210: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x354210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354214: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x354214u;
    {
        const bool branch_taken_0x354214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x354218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354214u;
        // 0x354218: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354214) {
            ctx->pc = 0x354260u;
            goto label_354260;
        }
    }
    ctx->pc = 0x35421Cu;
    // 0x35421c: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x35421cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x354220: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x354220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x354224: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x354224u;
    {
        const bool branch_taken_0x354224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354224u;
        // 0x354228: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354224) {
            ctx->pc = 0x35425Cu;
            goto label_35425c;
        }
    }
    ctx->pc = 0x35422Cu;
    // 0x35422c: 0x8e230280  lw          $v1, 0x280($s1)
    ctx->pc = 0x35422cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
    // 0x354230: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x354230u;
    {
        const bool branch_taken_0x354230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x354230) {
            ctx->pc = 0x354234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354230u;
            // 0x354234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354260u;
            goto label_354260;
        }
    }
    ctx->pc = 0x354238u;
    // 0x354238: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x354238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x35423c: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x35423cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x354240: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x354240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x354244: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x354244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x354248: 0xac510050  sw          $s1, 0x50($v0)
    ctx->pc = 0x354248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 17));
    // 0x35424c: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x35424cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x354250: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x354250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354254: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x354254u;
    {
        const bool branch_taken_0x354254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354254u;
        // 0x354258: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354254) {
            ctx->pc = 0x354260u;
            goto label_354260;
        }
    }
    ctx->pc = 0x35425Cu;
label_35425c:
    // 0x35425c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35425cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354260:
    // 0x354260: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x354260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x354264: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x354264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x354268: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x354268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35426c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x35426cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x354270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x354270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354274: 0x3e00008  jr          $ra
    ctx->pc = 0x354274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354274u;
        // 0x354278: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35427Cu;
    // 0x35427c: 0x0  nop
    ctx->pc = 0x35427cu;
    // NOP
    ctx->pc = 0x354280u;
}
