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

// Function: sub_002DE498
// Address: 0x2de498 - 0x2de540
void sub_002DE498_0x2de498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE498_0x2de498");
#endif

    switch (ctx->pc) {
        case 0x2de498u: goto label_2de498;
        case 0x2de49cu: goto label_2de49c;
        case 0x2de4a0u: goto label_2de4a0;
        case 0x2de4a4u: goto label_2de4a4;
        case 0x2de4a8u: goto label_2de4a8;
        case 0x2de4acu: goto label_2de4ac;
        case 0x2de4b0u: goto label_2de4b0;
        case 0x2de4b4u: goto label_2de4b4;
        case 0x2de4b8u: goto label_2de4b8;
        case 0x2de4bcu: goto label_2de4bc;
        case 0x2de4c0u: goto label_2de4c0;
        case 0x2de4c4u: goto label_2de4c4;
        case 0x2de4c8u: goto label_2de4c8;
        case 0x2de4ccu: goto label_2de4cc;
        case 0x2de4d0u: goto label_2de4d0;
        case 0x2de4d4u: goto label_2de4d4;
        case 0x2de4d8u: goto label_2de4d8;
        case 0x2de4dcu: goto label_2de4dc;
        case 0x2de4e0u: goto label_2de4e0;
        case 0x2de4e4u: goto label_2de4e4;
        case 0x2de4e8u: goto label_2de4e8;
        case 0x2de4ecu: goto label_2de4ec;
        case 0x2de4f0u: goto label_2de4f0;
        case 0x2de4f4u: goto label_2de4f4;
        case 0x2de4f8u: goto label_2de4f8;
        case 0x2de4fcu: goto label_2de4fc;
        case 0x2de500u: goto label_2de500;
        case 0x2de504u: goto label_2de504;
        case 0x2de508u: goto label_2de508;
        case 0x2de50cu: goto label_2de50c;
        case 0x2de510u: goto label_2de510;
        case 0x2de514u: goto label_2de514;
        case 0x2de518u: goto label_2de518;
        case 0x2de51cu: goto label_2de51c;
        case 0x2de520u: goto label_2de520;
        case 0x2de524u: goto label_2de524;
        case 0x2de528u: goto label_2de528;
        case 0x2de52cu: goto label_2de52c;
        case 0x2de530u: goto label_2de530;
        case 0x2de534u: goto label_2de534;
        case 0x2de538u: goto label_2de538;
        case 0x2de53cu: goto label_2de53c;
        default: break;
    }

    ctx->pc = 0x2de498u;

label_2de498:
    // 0x2de498: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2de498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2de49c:
    // 0x2de49c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2de49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2de4a0:
    // 0x2de4a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2de4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2de4a4:
    // 0x2de4a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2de4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2de4a8:
    // 0x2de4a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2de4a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2de4ac:
    // 0x2de4ac: 0x82250026  lb          $a1, 0x26($s1)
    ctx->pc = 0x2de4acu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
label_2de4b0:
    // 0x2de4b0: 0xc0a337e  jal         func_28CDF8
label_2de4b4:
    if (ctx->pc == 0x2DE4B4u) {
        ctx->pc = 0x2DE4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4B0u;
        // 0x2de4b4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE4B8u;
        goto label_2de4b8;
    }
    ctx->pc = 0x2DE4B0u;
    SET_GPR_U32(ctx, 31, 0x2DE4B8u);
    ctx->pc = 0x2DE4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE4B0u;
    // 0x2de4b4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2DE4B0u, 0x2DE4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE4B8u;
label_2de4b8:
    // 0x2de4b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2de4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2de4bc:
    // 0x2de4bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2de4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2de4c0:
    // 0x2de4c0: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2de4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
label_2de4c4:
    // 0x2de4c4: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2de4c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
label_2de4c8:
    // 0x2de4c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2de4c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de4cc:
    // 0x2de4cc: 0x0  nop
    ctx->pc = 0x2de4ccu;
    // NOP
label_2de4d0:
    // 0x2de4d0: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2de4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2de4d4:
    // 0x2de4d4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2de4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2de4d8:
    // 0x2de4d8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2de4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2de4dc:
    // 0x2de4dc: 0xc0e409a  jal         func_390268
label_2de4e0:
    if (ctx->pc == 0x2DE4E0u) {
        ctx->pc = 0x2DE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4DCu;
        // 0x2de4e0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE4E4u;
        goto label_2de4e4;
    }
    ctx->pc = 0x2DE4DCu;
    SET_GPR_U32(ctx, 31, 0x2DE4E4u);
    ctx->pc = 0x2DE4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE4DCu;
    // 0x2de4e0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2DE4DCu, 0x2DE4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE4E4u;
label_2de4e4:
    // 0x2de4e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de4e8:
    // 0x2de4e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2de4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de4ec:
    // 0x2de4ec: 0xc0a352c  jal         func_28D4B0
label_2de4f0:
    if (ctx->pc == 0x2DE4F0u) {
        ctx->pc = 0x2DE4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4ECu;
        // 0x2de4f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE4F4u;
        goto label_2de4f4;
    }
    ctx->pc = 0x2DE4ECu;
    SET_GPR_U32(ctx, 31, 0x2DE4F4u);
    ctx->pc = 0x2DE4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE4ECu;
    // 0x2de4f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2DE4ECu, 0x2DE4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE4F4u;
label_2de4f4:
    // 0x2de4f4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2de4f8:
    if (ctx->pc == 0x2DE4F8u) {
        ctx->pc = 0x2DE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE4F4u;
        // 0x2de4f8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE4FCu;
        goto label_2de4fc;
    }
    ctx->pc = 0x2DE4F4u;
    {
        const bool branch_taken_0x2de4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de4f4) {
            ctx->pc = 0x2DE4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE4F4u;
            // 0x2de4f8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE51Cu;
            goto label_2de51c;
        }
    }
    ctx->pc = 0x2DE4FCu;
label_2de4fc:
    // 0x2de4fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2de4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de500:
    // 0x2de500: 0xc08750a  jal         func_21D428
label_2de504:
    if (ctx->pc == 0x2DE504u) {
        ctx->pc = 0x2DE504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE500u;
        // 0x2de504: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE508u;
        goto label_2de508;
    }
    ctx->pc = 0x2DE500u;
    SET_GPR_U32(ctx, 31, 0x2DE508u);
    ctx->pc = 0x2DE504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE500u;
    // 0x2de504: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2DE500u, 0x2DE508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE508u;
label_2de508:
    // 0x2de508: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2de508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2de50c:
    // 0x2de50c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2de50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de510:
    // 0x2de510: 0xc0a580a  jal         func_296028
label_2de514:
    if (ctx->pc == 0x2DE514u) {
        ctx->pc = 0x2DE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE510u;
        // 0x2de514: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE518u;
        goto label_2de518;
    }
    ctx->pc = 0x2DE510u;
    SET_GPR_U32(ctx, 31, 0x2DE518u);
    ctx->pc = 0x2DE514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE510u;
    // 0x2de514: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296028u, 0x2DE510u, 0x2DE518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE518u;
label_2de518:
    // 0x2de518: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2de518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2de51c:
    // 0x2de51c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x2de51cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2de520:
    // 0x2de520: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2de520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2de524:
    // 0x2de524: 0x60f809  jalr        $v1
label_2de528:
    if (ctx->pc == 0x2DE528u) {
        ctx->pc = 0x2DE528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE524u;
        // 0x2de528: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE52Cu;
        goto label_2de52c;
    }
    ctx->pc = 0x2DE524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DE52Cu);
        ctx->pc = 0x2DE528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE524u;
        // 0x2de528: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE524u, 0x2DE52Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DE52Cu;
label_2de52c:
    // 0x2de52c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2de52cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2de530:
    // 0x2de530: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2de530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2de534:
    // 0x2de534: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2de534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2de538:
    // 0x2de538: 0x3e00008  jr          $ra
label_2de53c:
    if (ctx->pc == 0x2DE53Cu) {
        ctx->pc = 0x2DE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE538u;
        // 0x2de53c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE540u;
        goto label_fallthrough_0x2de538;
    }
    ctx->pc = 0x2DE538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE538u;
        // 0x2de53c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2de538:
    ctx->pc = 0x2DE540u;
}
