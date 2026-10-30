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

// Function: sub_00260178
// Address: 0x260178 - 0x260250
void sub_00260178_0x260178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260178_0x260178");
#endif

    switch (ctx->pc) {
        case 0x260198u: goto label_260198;
        case 0x2601acu: goto label_2601ac;
        case 0x2601bcu: goto label_2601bc;
        case 0x2601c4u: goto label_2601c4;
        case 0x2601d0u: goto label_2601d0;
        case 0x2601f4u: goto label_2601f4;
        case 0x260208u: goto label_260208;
        case 0x260224u: goto label_260224;
        case 0x260234u: goto label_260234;
        default: break;
    }

    ctx->pc = 0x260178u;

    // 0x260178: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x260178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26017c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26017cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x260180: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x260180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260184: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x260184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x260188: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x260188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x26018c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26018cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x260190: 0xc0e409a  jal         func_390268
    ctx->pc = 0x260190u;
    SET_GPR_U32(ctx, 31, 0x260198u);
    ctx->pc = 0x260194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260190u;
    // 0x260194: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x260190u, 0x260198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260198u;
label_260198:
    // 0x260198: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x260198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26019c: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x26019Cu;
    {
        const bool branch_taken_0x26019c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2601A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26019Cu;
        // 0x2601a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26019c) {
            ctx->pc = 0x2601FCu;
            goto label_2601fc;
        }
    }
    ctx->pc = 0x2601A4u;
    // 0x2601a4: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x2601A4u;
    SET_GPR_U32(ctx, 31, 0x2601ACu);
    ctx->pc = 0x2601A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2601A4u;
    // 0x2601a8: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x2601A4u, 0x2601ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2601ACu;
label_2601ac:
    // 0x2601ac: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2601ACu;
    {
        const bool branch_taken_0x2601ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2601B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2601ACu;
        // 0x2601b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2601ac) {
            ctx->pc = 0x2601FCu;
            goto label_2601fc;
        }
    }
    ctx->pc = 0x2601B4u;
    // 0x2601b4: 0xc08b186  jal         func_22C618
    ctx->pc = 0x2601B4u;
    SET_GPR_U32(ctx, 31, 0x2601BCu);
    ctx->pc = 0x2601B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2601B4u;
    // 0x2601b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C618u, 0x2601B4u, 0x2601BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2601BCu;
label_2601bc:
    // 0x2601bc: 0xc08bb06  jal         func_22EC18
    ctx->pc = 0x2601BCu;
    SET_GPR_U32(ctx, 31, 0x2601C4u);
    ctx->pc = 0x2601C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2601BCu;
    // 0x2601c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EC18u, 0x2601BCu, 0x2601C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2601C4u;
label_2601c4:
    // 0x2601c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2601c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2601c8: 0xc088a60  jal         func_222980
    ctx->pc = 0x2601C8u;
    SET_GPR_U32(ctx, 31, 0x2601D0u);
    ctx->pc = 0x2601CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2601C8u;
    // 0x2601cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222980u, 0x2601C8u, 0x2601D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2601D0u;
label_2601d0:
    // 0x2601d0: 0x820301b0  lb          $v1, 0x1B0($s0)
    ctx->pc = 0x2601d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2601d4: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2601d4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2601d8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2601D8u;
    {
        const bool branch_taken_0x2601d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2601DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2601D8u;
        // 0x2601dc: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2601d8) {
            ctx->pc = 0x26022Cu;
            goto label_26022c;
        }
    }
    ctx->pc = 0x2601E0u;
    // 0x2601e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2601e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2601e4: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x2601e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x2601e8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2601e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2601ec: 0xc13b662  jal         func_4ED988
    ctx->pc = 0x2601ECu;
    SET_GPR_U32(ctx, 31, 0x2601F4u);
    ctx->pc = 0x2601F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2601ECu;
    // 0x2601f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED988u, 0x2601ECu, 0x2601F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2601F4u;
label_2601f4:
    // 0x2601f4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2601F4u;
    {
        const bool branch_taken_0x2601f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2601f4) {
            ctx->pc = 0x26022Cu;
            goto label_26022c;
        }
    }
    ctx->pc = 0x2601FCu;
label_2601fc:
    // 0x2601fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2601fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260200: 0xc089988  jal         func_226620
    ctx->pc = 0x260200u;
    SET_GPR_U32(ctx, 31, 0x260208u);
    ctx->pc = 0x260204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260200u;
    // 0x260204: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x260200u, 0x260208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260208u;
label_260208:
    // 0x260208: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x260208u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
    // 0x26020c: 0x8e42bd30  lw          $v0, -0x42D0($s2)
    ctx->pc = 0x26020cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x260210: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x260210u;
    {
        const bool branch_taken_0x260210 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x260214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260210u;
        // 0x260214: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260210) {
            ctx->pc = 0x26022Cu;
            goto label_26022c;
        }
    }
    ctx->pc = 0x260218u;
    // 0x260218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26021c: 0xc089988  jal         func_226620
    ctx->pc = 0x26021Cu;
    SET_GPR_U32(ctx, 31, 0x260224u);
    ctx->pc = 0x260220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26021Cu;
    // 0x260220: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x26021Cu, 0x260224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260224u;
label_260224:
    // 0x260224: 0x8e42bd30  lw          $v0, -0x42D0($s2)
    ctx->pc = 0x260224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950192)));
    // 0x260228: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x260228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_26022c:
    // 0x26022c: 0xc089a80  jal         func_226A00
    ctx->pc = 0x26022Cu;
    SET_GPR_U32(ctx, 31, 0x260234u);
    ctx->pc = 0x260230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26022Cu;
    // 0x260230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A00u, 0x26022Cu, 0x260234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260234u;
label_260234:
    // 0x260234: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x260234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x260238: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x260238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26023c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x26023cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x260240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260244: 0x3e00008  jr          $ra
    ctx->pc = 0x260244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260244u;
        // 0x260248: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26024Cu;
    // 0x26024c: 0x0  nop
    ctx->pc = 0x26024cu;
    // NOP
    ctx->pc = 0x260250u;
}
