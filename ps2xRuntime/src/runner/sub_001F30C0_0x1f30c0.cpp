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

// Function: sub_001F30C0
// Address: 0x1f30c0 - 0x1f3128
void sub_001F30C0_0x1f30c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F30C0_0x1f30c0");
#endif

    switch (ctx->pc) {
        case 0x1f30c0u: goto label_1f30c0;
        case 0x1f30c4u: goto label_1f30c4;
        case 0x1f30c8u: goto label_1f30c8;
        case 0x1f30ccu: goto label_1f30cc;
        case 0x1f30d0u: goto label_1f30d0;
        case 0x1f30d4u: goto label_1f30d4;
        case 0x1f30d8u: goto label_1f30d8;
        case 0x1f30dcu: goto label_1f30dc;
        case 0x1f30e0u: goto label_1f30e0;
        case 0x1f30e4u: goto label_1f30e4;
        case 0x1f30e8u: goto label_1f30e8;
        case 0x1f30ecu: goto label_1f30ec;
        case 0x1f30f0u: goto label_1f30f0;
        case 0x1f30f4u: goto label_1f30f4;
        case 0x1f30f8u: goto label_1f30f8;
        case 0x1f30fcu: goto label_1f30fc;
        case 0x1f3100u: goto label_1f3100;
        case 0x1f3104u: goto label_1f3104;
        case 0x1f3108u: goto label_1f3108;
        case 0x1f310cu: goto label_1f310c;
        case 0x1f3110u: goto label_1f3110;
        case 0x1f3114u: goto label_1f3114;
        case 0x1f3118u: goto label_1f3118;
        case 0x1f311cu: goto label_1f311c;
        case 0x1f3120u: goto label_1f3120;
        case 0x1f3124u: goto label_1f3124;
        default: break;
    }

    ctx->pc = 0x1f30c0u;

label_1f30c0:
    // 0x1f30c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f30c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f30c4:
    // 0x1f30c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f30c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1f30c8:
    // 0x1f30c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f30c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f30cc:
    // 0x1f30cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f30ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f30d0:
    // 0x1f30d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f30d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f30d4:
    // 0x1f30d4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1f30d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f30d8:
    // 0x1f30d8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1f30dc:
    if (ctx->pc == 0x1F30DCu) {
        ctx->pc = 0x1F30DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F30D8u;
        // 0x1f30dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F30E0u;
        goto label_1f30e0;
    }
    ctx->pc = 0x1F30D8u;
    {
        const bool branch_taken_0x1f30d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F30DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F30D8u;
        // 0x1f30dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f30d8) {
            ctx->pc = 0x1F310Cu;
            goto label_1f310c;
        }
    }
    ctx->pc = 0x1F30E0u;
label_1f30e0:
    // 0x1f30e0: 0xc06a3aa  jal         func_1A8EA8
label_1f30e4:
    if (ctx->pc == 0x1F30E4u) {
        ctx->pc = 0x1F30E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F30E0u;
        // 0x1f30e4: 0x8e05008c  lw          $a1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F30E8u;
        goto label_1f30e8;
    }
    ctx->pc = 0x1F30E0u;
    SET_GPR_U32(ctx, 31, 0x1F30E8u);
    ctx->pc = 0x1F30E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F30E0u;
    // 0x1f30e4: 0x8e05008c  lw          $a1, 0x8C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1F30E0u, 0x1F30E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F30E8u;
label_1f30e8:
    // 0x1f30e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1f30ec:
    if (ctx->pc == 0x1F30ECu) {
        ctx->pc = 0x1F30ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F30E8u;
        // 0x1f30ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F30F0u;
        goto label_1f30f0;
    }
    ctx->pc = 0x1F30E8u;
    {
        const bool branch_taken_0x1f30e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F30ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F30E8u;
        // 0x1f30ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f30e8) {
            ctx->pc = 0x1F3110u;
            goto label_1f3110;
        }
    }
    ctx->pc = 0x1F30F0u;
label_1f30f0:
    // 0x1f30f0: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x1f30f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1f30f4:
    // 0x1f30f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f30f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f30f8:
    // 0x1f30f8: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1f30f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1f30fc:
    // 0x1f30fc: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1f30fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1f3100:
    // 0x1f3100: 0x40f809  jalr        $v0
label_1f3104:
    if (ctx->pc == 0x1F3104u) {
        ctx->pc = 0x1F3104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3100u;
        // 0x1f3104: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3108u;
        goto label_1f3108;
    }
    ctx->pc = 0x1F3100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3108u);
        ctx->pc = 0x1F3104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3100u;
        // 0x1f3104: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3100u, 0x1F3108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3108u;
label_1f3108:
    // 0x1f3108: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x1f3108u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f310c:
    // 0x1f310c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f310cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f3110:
    // 0x1f3110: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f3110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f3114:
    // 0x1f3114: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f3114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f3118:
    // 0x1f3118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f311c:
    // 0x1f311c: 0x3e00008  jr          $ra
label_1f3120:
    if (ctx->pc == 0x1F3120u) {
        ctx->pc = 0x1F3120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F311Cu;
        // 0x1f3120: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3124u;
        goto label_1f3124;
    }
    ctx->pc = 0x1F311Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F311Cu;
        // 0x1f3120: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F311Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3124u;
label_1f3124:
    // 0x1f3124: 0x0  nop
    ctx->pc = 0x1f3124u;
    // NOP
    ctx->pc = 0x1f3128u;
}
