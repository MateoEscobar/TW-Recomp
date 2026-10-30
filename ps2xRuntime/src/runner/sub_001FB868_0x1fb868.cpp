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

// Function: sub_001FB868
// Address: 0x1fb868 - 0x1fb8f0
void sub_001FB868_0x1fb868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB868_0x1fb868");
#endif

    switch (ctx->pc) {
        case 0x1fb868u: goto label_1fb868;
        case 0x1fb86cu: goto label_1fb86c;
        case 0x1fb870u: goto label_1fb870;
        case 0x1fb874u: goto label_1fb874;
        case 0x1fb878u: goto label_1fb878;
        case 0x1fb87cu: goto label_1fb87c;
        case 0x1fb880u: goto label_1fb880;
        case 0x1fb884u: goto label_1fb884;
        case 0x1fb888u: goto label_1fb888;
        case 0x1fb88cu: goto label_1fb88c;
        case 0x1fb890u: goto label_1fb890;
        case 0x1fb894u: goto label_1fb894;
        case 0x1fb898u: goto label_1fb898;
        case 0x1fb89cu: goto label_1fb89c;
        case 0x1fb8a0u: goto label_1fb8a0;
        case 0x1fb8a4u: goto label_1fb8a4;
        case 0x1fb8a8u: goto label_1fb8a8;
        case 0x1fb8acu: goto label_1fb8ac;
        case 0x1fb8b0u: goto label_1fb8b0;
        case 0x1fb8b4u: goto label_1fb8b4;
        case 0x1fb8b8u: goto label_1fb8b8;
        case 0x1fb8bcu: goto label_1fb8bc;
        case 0x1fb8c0u: goto label_1fb8c0;
        case 0x1fb8c4u: goto label_1fb8c4;
        case 0x1fb8c8u: goto label_1fb8c8;
        case 0x1fb8ccu: goto label_1fb8cc;
        case 0x1fb8d0u: goto label_1fb8d0;
        case 0x1fb8d4u: goto label_1fb8d4;
        case 0x1fb8d8u: goto label_1fb8d8;
        case 0x1fb8dcu: goto label_1fb8dc;
        case 0x1fb8e0u: goto label_1fb8e0;
        case 0x1fb8e4u: goto label_1fb8e4;
        case 0x1fb8e8u: goto label_1fb8e8;
        case 0x1fb8ecu: goto label_1fb8ec;
        default: break;
    }

    ctx->pc = 0x1fb868u;

label_1fb868:
    // 0x1fb868: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fb868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fb86c:
    // 0x1fb86c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fb86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1fb870:
    // 0x1fb870: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fb870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fb874:
    // 0x1fb874: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fb874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fb878:
    // 0x1fb878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fb878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fb87c:
    // 0x1fb87c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1fb87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1fb880:
    // 0x1fb880: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1fb884:
    if (ctx->pc == 0x1FB884u) {
        ctx->pc = 0x1FB884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB880u;
        // 0x1fb884: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB888u;
        goto label_1fb888;
    }
    ctx->pc = 0x1FB880u;
    {
        const bool branch_taken_0x1fb880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB880u;
        // 0x1fb884: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb880) {
            ctx->pc = 0x1FB8D4u;
            goto label_1fb8d4;
        }
    }
    ctx->pc = 0x1FB888u;
label_1fb888:
    // 0x1fb888: 0xc06a3aa  jal         func_1A8EA8
label_1fb88c:
    if (ctx->pc == 0x1FB88Cu) {
        ctx->pc = 0x1FB88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB888u;
        // 0x1fb88c: 0x8e05008c  lw          $a1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB890u;
        goto label_1fb890;
    }
    ctx->pc = 0x1FB888u;
    SET_GPR_U32(ctx, 31, 0x1FB890u);
    ctx->pc = 0x1FB88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB888u;
    // 0x1fb88c: 0x8e05008c  lw          $a1, 0x8C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1FB888u, 0x1FB890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB890u;
label_1fb890:
    // 0x1fb890: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1fb894:
    if (ctx->pc == 0x1FB894u) {
        ctx->pc = 0x1FB894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB890u;
        // 0x1fb894: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB898u;
        goto label_1fb898;
    }
    ctx->pc = 0x1FB890u;
    {
        const bool branch_taken_0x1fb890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB890u;
        // 0x1fb894: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb890) {
            ctx->pc = 0x1FB8D8u;
            goto label_1fb8d8;
        }
    }
    ctx->pc = 0x1FB898u;
label_1fb898:
    // 0x1fb898: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1fb898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1fb89c:
    // 0x1fb89c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fb89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fb8a0:
    // 0x1fb8a0: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1fb8a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1fb8a4:
    // 0x1fb8a4: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1fb8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1fb8a8:
    // 0x1fb8a8: 0x40f809  jalr        $v0
label_1fb8ac:
    if (ctx->pc == 0x1FB8ACu) {
        ctx->pc = 0x1FB8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8A8u;
        // 0x1fb8ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB8B0u;
        goto label_1fb8b0;
    }
    ctx->pc = 0x1FB8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FB8B0u);
        ctx->pc = 0x1FB8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8A8u;
        // 0x1fb8ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB8A8u, 0x1FB8B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB8B0u;
label_1fb8b0:
    // 0x1fb8b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1fb8b4:
    if (ctx->pc == 0x1FB8B4u) {
        ctx->pc = 0x1FB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8B0u;
        // 0x1fb8b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB8B8u;
        goto label_1fb8b8;
    }
    ctx->pc = 0x1FB8B0u;
    {
        const bool branch_taken_0x1fb8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8B0u;
        // 0x1fb8b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb8b0) {
            ctx->pc = 0x1FB8D8u;
            goto label_1fb8d8;
        }
    }
    ctx->pc = 0x1FB8B8u;
label_1fb8b8:
    // 0x1fb8b8: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x1fb8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1fb8bc:
    // 0x1fb8bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fb8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fb8c0:
    // 0x1fb8c0: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1fb8c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1fb8c4:
    // 0x1fb8c4: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1fb8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1fb8c8:
    // 0x1fb8c8: 0x40f809  jalr        $v0
label_1fb8cc:
    if (ctx->pc == 0x1FB8CCu) {
        ctx->pc = 0x1FB8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8C8u;
        // 0x1fb8cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB8D0u;
        goto label_1fb8d0;
    }
    ctx->pc = 0x1FB8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FB8D0u);
        ctx->pc = 0x1FB8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8C8u;
        // 0x1fb8cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB8C8u, 0x1FB8D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB8D0u;
label_1fb8d0:
    // 0x1fb8d0: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x1fb8d0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fb8d4:
    // 0x1fb8d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1fb8d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb8d8:
    // 0x1fb8d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fb8d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fb8dc:
    // 0x1fb8dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fb8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb8e0:
    // 0x1fb8e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fb8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb8e4:
    // 0x1fb8e4: 0x3e00008  jr          $ra
label_1fb8e8:
    if (ctx->pc == 0x1FB8E8u) {
        ctx->pc = 0x1FB8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8E4u;
        // 0x1fb8e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB8ECu;
        goto label_1fb8ec;
    }
    ctx->pc = 0x1FB8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8E4u;
        // 0x1fb8e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB8ECu;
label_1fb8ec:
    // 0x1fb8ec: 0x0  nop
    ctx->pc = 0x1fb8ecu;
    // NOP
    ctx->pc = 0x1fb8f0u;
}
