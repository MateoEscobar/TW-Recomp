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

// Function: sub_0022E4C0
// Address: 0x22e4c0 - 0x22e558
void sub_0022E4C0_0x22e4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E4C0_0x22e4c0");
#endif

    switch (ctx->pc) {
        case 0x22e4c0u: goto label_22e4c0;
        case 0x22e4c4u: goto label_22e4c4;
        case 0x22e4c8u: goto label_22e4c8;
        case 0x22e4ccu: goto label_22e4cc;
        case 0x22e4d0u: goto label_22e4d0;
        case 0x22e4d4u: goto label_22e4d4;
        case 0x22e4d8u: goto label_22e4d8;
        case 0x22e4dcu: goto label_22e4dc;
        case 0x22e4e0u: goto label_22e4e0;
        case 0x22e4e4u: goto label_22e4e4;
        case 0x22e4e8u: goto label_22e4e8;
        case 0x22e4ecu: goto label_22e4ec;
        case 0x22e4f0u: goto label_22e4f0;
        case 0x22e4f4u: goto label_22e4f4;
        case 0x22e4f8u: goto label_22e4f8;
        case 0x22e4fcu: goto label_22e4fc;
        case 0x22e500u: goto label_22e500;
        case 0x22e504u: goto label_22e504;
        case 0x22e508u: goto label_22e508;
        case 0x22e50cu: goto label_22e50c;
        case 0x22e510u: goto label_22e510;
        case 0x22e514u: goto label_22e514;
        case 0x22e518u: goto label_22e518;
        case 0x22e51cu: goto label_22e51c;
        case 0x22e520u: goto label_22e520;
        case 0x22e524u: goto label_22e524;
        case 0x22e528u: goto label_22e528;
        case 0x22e52cu: goto label_22e52c;
        case 0x22e530u: goto label_22e530;
        case 0x22e534u: goto label_22e534;
        case 0x22e538u: goto label_22e538;
        case 0x22e53cu: goto label_22e53c;
        case 0x22e540u: goto label_22e540;
        case 0x22e544u: goto label_22e544;
        case 0x22e548u: goto label_22e548;
        case 0x22e54cu: goto label_22e54c;
        case 0x22e550u: goto label_22e550;
        case 0x22e554u: goto label_22e554;
        default: break;
    }

    ctx->pc = 0x22e4c0u;

label_22e4c0:
    // 0x22e4c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22e4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22e4c4:
    // 0x22e4c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22e4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_22e4c8:
    // 0x22e4c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22e4c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22e4cc:
    // 0x22e4cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22e4d0:
    // 0x22e4d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22e4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22e4d4:
    // 0x22e4d4: 0xc088ac6  jal         func_222B18
label_22e4d8:
    if (ctx->pc == 0x22E4D8u) {
        ctx->pc = 0x22E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E4D4u;
        // 0x22e4d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E4DCu;
        goto label_22e4dc;
    }
    ctx->pc = 0x22E4D4u;
    SET_GPR_U32(ctx, 31, 0x22E4DCu);
    ctx->pc = 0x22E4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E4D4u;
    // 0x22e4d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22E4D4u, 0x22E4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E4DCu;
label_22e4dc:
    // 0x22e4dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_22e4e0:
    // 0x22e4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e4e4:
    // 0x22e4e4: 0xc088ac6  jal         func_222B18
label_22e4e8:
    if (ctx->pc == 0x22E4E8u) {
        ctx->pc = 0x22E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E4E4u;
        // 0x22e4e8: 0xa4430046  sh          $v1, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E4ECu;
        goto label_22e4ec;
    }
    ctx->pc = 0x22E4E4u;
    SET_GPR_U32(ctx, 31, 0x22E4ECu);
    ctx->pc = 0x22E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E4E4u;
    // 0x22e4e8: 0xa4430046  sh          $v1, 0x46($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22E4E4u, 0x22E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E4ECu;
label_22e4ec:
    // 0x22e4ec: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x22e4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_22e4f0:
    // 0x22e4f0: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x22e4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_22e4f4:
    // 0x22e4f4: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x22e4f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_22e4f8:
    // 0x22e4f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22e4f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22e4fc:
    // 0x22e4fc: 0x8c8302c0  lw          $v1, 0x2C0($a0)
    ctx->pc = 0x22e4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 704)));
label_22e500:
    // 0x22e500: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22e500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22e504:
    // 0x22e504: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x22e504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_22e508:
    // 0x22e508: 0xa4430040  sh          $v1, 0x40($v0)
    ctx->pc = 0x22e508u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 3));
label_22e50c:
    // 0x22e50c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22e510:
    // 0x22e510: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x22e510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_22e514:
    // 0x22e514: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x22e514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_22e518:
    // 0x22e518: 0x60f809  jalr        $v1
label_22e51c:
    if (ctx->pc == 0x22E51Cu) {
        ctx->pc = 0x22E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E518u;
        // 0x22e51c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E520u;
        goto label_22e520;
    }
    ctx->pc = 0x22E518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22E520u);
        ctx->pc = 0x22E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E518u;
        // 0x22e51c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E518u, 0x22E520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22E520u;
label_22e520:
    // 0x22e520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e524:
    // 0x22e524: 0xc089988  jal         func_226620
label_22e528:
    if (ctx->pc == 0x22E528u) {
        ctx->pc = 0x22E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E524u;
        // 0x22e528: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E52Cu;
        goto label_22e52c;
    }
    ctx->pc = 0x22E524u;
    SET_GPR_U32(ctx, 31, 0x22E52Cu);
    ctx->pc = 0x22E528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E524u;
    // 0x22e528: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22E524u, 0x22E52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E52Cu;
label_22e52c:
    // 0x22e52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e530:
    // 0x22e530: 0xc089974  jal         func_2265D0
label_22e534:
    if (ctx->pc == 0x22E534u) {
        ctx->pc = 0x22E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E530u;
        // 0x22e534: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E538u;
        goto label_22e538;
    }
    ctx->pc = 0x22E530u;
    SET_GPR_U32(ctx, 31, 0x22E538u);
    ctx->pc = 0x22E534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E530u;
    // 0x22e534: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22E530u, 0x22E538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E538u;
label_22e538:
    // 0x22e538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e53c:
    // 0x22e53c: 0xc089c20  jal         func_227080
label_22e540:
    if (ctx->pc == 0x22E540u) {
        ctx->pc = 0x22E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E53Cu;
        // 0x22e540: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E544u;
        goto label_22e544;
    }
    ctx->pc = 0x22E53Cu;
    SET_GPR_U32(ctx, 31, 0x22E544u);
    ctx->pc = 0x22E540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E53Cu;
    // 0x22e540: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x22E53Cu, 0x22E544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E544u;
label_22e544:
    // 0x22e544: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22e544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22e548:
    // 0x22e548: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22e54c:
    // 0x22e54c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22e550:
    // 0x22e550: 0x3e00008  jr          $ra
label_22e554:
    if (ctx->pc == 0x22E554u) {
        ctx->pc = 0x22E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E550u;
        // 0x22e554: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E558u;
        goto label_fallthrough_0x22e550;
    }
    ctx->pc = 0x22E550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E550u;
        // 0x22e554: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22e550:
    ctx->pc = 0x22E558u;
}
