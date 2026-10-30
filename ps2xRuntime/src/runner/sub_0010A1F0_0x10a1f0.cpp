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

// Function: sub_0010A1F0
// Address: 0x10a1f0 - 0x10a2a0
void sub_0010A1F0_0x10a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A1F0_0x10a1f0");
#endif

    switch (ctx->pc) {
        case 0x10a21cu: goto label_10a21c;
        case 0x10a224u: goto label_10a224;
        case 0x10a22cu: goto label_10a22c;
        case 0x10a240u: goto label_10a240;
        case 0x10a248u: goto label_10a248;
        case 0x10a250u: goto label_10a250;
        default: break;
    }

    ctx->pc = 0x10a1f0u;

    // 0x10a1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a1f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10a1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x10a1f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10a1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10a1fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a1fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a200: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10a200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a208: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x10a208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x10a20c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10A20Cu;
    {
        const bool branch_taken_0x10a20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A20Cu;
        // 0x10a210: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a20c) {
            ctx->pc = 0x10A22Cu;
            goto label_10a22c;
        }
    }
    ctx->pc = 0x10A214u;
    // 0x10a214: 0xc041120  jal         func_104480
    ctx->pc = 0x10A214u;
    SET_GPR_U32(ctx, 31, 0x10A21Cu);
    ctx->pc = 0x10A218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A214u;
    // 0x10a218: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104480u, 0x10A214u, 0x10A21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A21Cu;
label_10a21c:
    // 0x10a21c: 0xc041120  jal         func_104480
    ctx->pc = 0x10A21Cu;
    SET_GPR_U32(ctx, 31, 0x10A224u);
    ctx->pc = 0x10A220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A21Cu;
    // 0x10a220: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104480u, 0x10A21Cu, 0x10A224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A224u;
label_10a224:
    // 0x10a224: 0xc041120  jal         func_104480
    ctx->pc = 0x10A224u;
    SET_GPR_U32(ctx, 31, 0x10A22Cu);
    ctx->pc = 0x10A228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A224u;
    // 0x10a228: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104480u, 0x10A224u, 0x10A22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A22Cu;
label_10a22c:
    // 0x10a22c: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x10a22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x10a230: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A230u;
    {
        const bool branch_taken_0x10a230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A230u;
        // 0x10a234: 0x32220010  andi        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a230) {
            ctx->pc = 0x10A254u;
            goto label_10a254;
        }
    }
    ctx->pc = 0x10A238u;
    // 0x10a238: 0xc041124  jal         func_104490
    ctx->pc = 0x10A238u;
    SET_GPR_U32(ctx, 31, 0x10A240u);
    ctx->pc = 0x10A23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A238u;
    // 0x10a23c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104490u, 0x10A238u, 0x10A240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A240u;
label_10a240:
    // 0x10a240: 0xc041124  jal         func_104490
    ctx->pc = 0x10A240u;
    SET_GPR_U32(ctx, 31, 0x10A248u);
    ctx->pc = 0x10A244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A240u;
    // 0x10a244: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104490u, 0x10A240u, 0x10A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A248u;
label_10a248:
    // 0x10a248: 0xc041124  jal         func_104490
    ctx->pc = 0x10A248u;
    SET_GPR_U32(ctx, 31, 0x10A250u);
    ctx->pc = 0x10A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A248u;
    // 0x10a24c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104490u, 0x10A248u, 0x10A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A250u;
label_10a250:
    // 0x10a250: 0x32220010  andi        $v0, $s1, 0x10
    ctx->pc = 0x10a250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
label_10a254:
    // 0x10a254: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x10A254u;
    {
        const bool branch_taken_0x10a254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a254) {
            ctx->pc = 0x10A258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A254u;
            // 0x10a258: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A290u;
            goto label_10a290;
        }
    }
    ctx->pc = 0x10A25Cu;
    // 0x10a25c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x10a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x10a260: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x10a260u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x10a264: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x10a264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x10a268: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x10a268u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x10a26c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10a26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10a270: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x10a270u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x10a274: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x10a274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x10a278: 0xa482001e  sh          $v0, 0x1E($a0)
    ctx->pc = 0x10a278u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x10a27c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x10a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x10a280: 0x9462001e  lhu         $v0, 0x1E($v1)
    ctx->pc = 0x10a280u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x10a284: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x10a284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x10a288: 0xa462001e  sh          $v0, 0x1E($v1)
    ctx->pc = 0x10a288u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x10a28c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10a28cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10a290:
    // 0x10a290: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10a290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a298: 0x3e00008  jr          $ra
    ctx->pc = 0x10A298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A298u;
        // 0x10a29c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A2A0u;
}
