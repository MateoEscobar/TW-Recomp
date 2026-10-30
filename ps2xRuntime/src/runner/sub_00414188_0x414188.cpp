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

// Function: sub_00414188
// Address: 0x414188 - 0x414220
void sub_00414188_0x414188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414188_0x414188");
#endif

    switch (ctx->pc) {
        case 0x4141c0u: goto label_4141c0;
        case 0x4141dcu: goto label_4141dc;
        default: break;
    }

    ctx->pc = 0x414188u;

    // 0x414188: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x414188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x41418c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41418cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x414190: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x414190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x414194: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x414194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x414198: 0x24503a10  addiu       $s0, $v0, 0x3A10
    ctx->pc = 0x414198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14864));
    // 0x41419c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x41419cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4141a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4141a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4141a4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4141a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4141a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4141a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4141ac: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4141acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4141b0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x4141b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4141b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4141b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4141b8: 0x26140540  addiu       $s4, $s0, 0x540
    ctx->pc = 0x4141b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1344));
    // 0x4141bc: 0x92020148  lbu         $v0, 0x148($s0)
    ctx->pc = 0x4141bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6F3B58u));
label_4141c0:
    // 0x4141c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4141c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4141c4: 0x54530009  bnel        $v0, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x4141C4u;
    {
        const bool branch_taken_0x4141c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x4141c4) {
            ctx->pc = 0x4141C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4141C4u;
            // 0x4141c8: 0x26100150  addiu       $s0, $s0, 0x150 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4141ECu;
            goto label_4141ec;
        }
    }
    ctx->pc = 0x4141CCu;
    // 0x4141cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4141ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4141d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4141d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4141d4: 0xc104f12  jal         func_413C48
    ctx->pc = 0x4141D4u;
    SET_GPR_U32(ctx, 31, 0x4141DCu);
    ctx->pc = 0x4141D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4141D4u;
    // 0x4141d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413C48u, 0x4141D4u, 0x4141DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4141DCu;
label_4141dc:
    // 0x4141dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4141DCu;
    {
        const bool branch_taken_0x4141dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4141E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4141DCu;
        // 0x4141e0: 0x26100150  addiu       $s0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4141dc) {
            ctx->pc = 0x4141ECu;
            goto label_4141ec;
        }
    }
    ctx->pc = 0x4141E4u;
    // 0x4141e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4141E4u;
    {
        const bool branch_taken_0x4141e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4141E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4141E4u;
        // 0x4141e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4141e4) {
            ctx->pc = 0x4141FCu;
            goto label_4141fc;
        }
    }
    ctx->pc = 0x4141ECu;
label_4141ec:
    // 0x4141ec: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x4141ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x4141f0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x4141F0u;
    {
        const bool branch_taken_0x4141f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4141f0) {
            ctx->pc = 0x4141F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4141F0u;
            // 0x4141f4: 0x92020148  lbu         $v0, 0x148($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4141C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4141c0;
        }
    }
    ctx->pc = 0x4141F8u;
    // 0x4141f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4141f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4141fc:
    // 0x4141fc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4141fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x414200: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x414200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x414204: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x414204u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x414208: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x414208u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41420c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x41420cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x414210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x414210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x414214: 0x3e00008  jr          $ra
    ctx->pc = 0x414214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414214u;
        // 0x414218: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41421Cu;
    // 0x41421c: 0x0  nop
    ctx->pc = 0x41421cu;
    // NOP
    ctx->pc = 0x414220u;
}
