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

// Function: sub_001CE748
// Address: 0x1ce748 - 0x1ce8b8
void sub_001CE748_0x1ce748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE748_0x1ce748");
#endif

    switch (ctx->pc) {
        case 0x1ce748u: goto label_1ce748;
        case 0x1ce74cu: goto label_1ce74c;
        case 0x1ce750u: goto label_1ce750;
        case 0x1ce754u: goto label_1ce754;
        case 0x1ce758u: goto label_1ce758;
        case 0x1ce75cu: goto label_1ce75c;
        case 0x1ce760u: goto label_1ce760;
        case 0x1ce764u: goto label_1ce764;
        case 0x1ce768u: goto label_1ce768;
        case 0x1ce76cu: goto label_1ce76c;
        case 0x1ce770u: goto label_1ce770;
        case 0x1ce774u: goto label_1ce774;
        case 0x1ce778u: goto label_1ce778;
        case 0x1ce77cu: goto label_1ce77c;
        case 0x1ce780u: goto label_1ce780;
        case 0x1ce784u: goto label_1ce784;
        case 0x1ce788u: goto label_1ce788;
        case 0x1ce78cu: goto label_1ce78c;
        case 0x1ce790u: goto label_1ce790;
        case 0x1ce794u: goto label_1ce794;
        case 0x1ce798u: goto label_1ce798;
        case 0x1ce79cu: goto label_1ce79c;
        case 0x1ce7a0u: goto label_1ce7a0;
        case 0x1ce7a4u: goto label_1ce7a4;
        case 0x1ce7a8u: goto label_1ce7a8;
        case 0x1ce7acu: goto label_1ce7ac;
        case 0x1ce7b0u: goto label_1ce7b0;
        case 0x1ce7b4u: goto label_1ce7b4;
        case 0x1ce7b8u: goto label_1ce7b8;
        case 0x1ce7bcu: goto label_1ce7bc;
        case 0x1ce7c0u: goto label_1ce7c0;
        case 0x1ce7c4u: goto label_1ce7c4;
        case 0x1ce7c8u: goto label_1ce7c8;
        case 0x1ce7ccu: goto label_1ce7cc;
        case 0x1ce7d0u: goto label_1ce7d0;
        case 0x1ce7d4u: goto label_1ce7d4;
        case 0x1ce7d8u: goto label_1ce7d8;
        case 0x1ce7dcu: goto label_1ce7dc;
        case 0x1ce7e0u: goto label_1ce7e0;
        case 0x1ce7e4u: goto label_1ce7e4;
        case 0x1ce7e8u: goto label_1ce7e8;
        case 0x1ce7ecu: goto label_1ce7ec;
        case 0x1ce7f0u: goto label_1ce7f0;
        case 0x1ce7f4u: goto label_1ce7f4;
        case 0x1ce7f8u: goto label_1ce7f8;
        case 0x1ce7fcu: goto label_1ce7fc;
        case 0x1ce800u: goto label_1ce800;
        case 0x1ce804u: goto label_1ce804;
        case 0x1ce808u: goto label_1ce808;
        case 0x1ce80cu: goto label_1ce80c;
        case 0x1ce810u: goto label_1ce810;
        case 0x1ce814u: goto label_1ce814;
        case 0x1ce818u: goto label_1ce818;
        case 0x1ce81cu: goto label_1ce81c;
        case 0x1ce820u: goto label_1ce820;
        case 0x1ce824u: goto label_1ce824;
        case 0x1ce828u: goto label_1ce828;
        case 0x1ce82cu: goto label_1ce82c;
        case 0x1ce830u: goto label_1ce830;
        case 0x1ce834u: goto label_1ce834;
        case 0x1ce838u: goto label_1ce838;
        case 0x1ce83cu: goto label_1ce83c;
        case 0x1ce840u: goto label_1ce840;
        case 0x1ce844u: goto label_1ce844;
        case 0x1ce848u: goto label_1ce848;
        case 0x1ce84cu: goto label_1ce84c;
        case 0x1ce850u: goto label_1ce850;
        case 0x1ce854u: goto label_1ce854;
        case 0x1ce858u: goto label_1ce858;
        case 0x1ce85cu: goto label_1ce85c;
        case 0x1ce860u: goto label_1ce860;
        case 0x1ce864u: goto label_1ce864;
        case 0x1ce868u: goto label_1ce868;
        case 0x1ce86cu: goto label_1ce86c;
        case 0x1ce870u: goto label_1ce870;
        case 0x1ce874u: goto label_1ce874;
        case 0x1ce878u: goto label_1ce878;
        case 0x1ce87cu: goto label_1ce87c;
        case 0x1ce880u: goto label_1ce880;
        case 0x1ce884u: goto label_1ce884;
        case 0x1ce888u: goto label_1ce888;
        case 0x1ce88cu: goto label_1ce88c;
        case 0x1ce890u: goto label_1ce890;
        case 0x1ce894u: goto label_1ce894;
        case 0x1ce898u: goto label_1ce898;
        case 0x1ce89cu: goto label_1ce89c;
        case 0x1ce8a0u: goto label_1ce8a0;
        case 0x1ce8a4u: goto label_1ce8a4;
        case 0x1ce8a8u: goto label_1ce8a8;
        case 0x1ce8acu: goto label_1ce8ac;
        case 0x1ce8b0u: goto label_1ce8b0;
        case 0x1ce8b4u: goto label_1ce8b4;
        default: break;
    }

    ctx->pc = 0x1ce748u;

label_1ce748:
    // 0x1ce748: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ce748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1ce74c:
    // 0x1ce74c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1ce74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1ce750:
    // 0x1ce750: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1ce750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_1ce754:
    // 0x1ce754: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ce754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ce758:
    // 0x1ce758: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1ce758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1ce75c:
    // 0x1ce75c: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x1ce75cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1ce760:
    // 0x1ce760: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1ce760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_1ce764:
    // 0x1ce764: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1ce764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1ce768:
    // 0x1ce768: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1ce768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1ce76c:
    // 0x1ce76c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1ce76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_1ce770:
    // 0x1ce770: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ce770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1ce774:
    // 0x1ce774: 0x8e430290  lw          $v1, 0x290($s2)
    ctx->pc = 0x1ce774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 656)));
label_1ce778:
    // 0x1ce778: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ce778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1ce77c:
    // 0x1ce77c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ce77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ce780:
    // 0x1ce780: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1ce780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1ce784:
    // 0x1ce784: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ce784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1ce788:
    // 0x1ce788: 0x1082003a  beq         $a0, $v0, . + 4 + (0x3A << 2)
label_1ce78c:
    if (ctx->pc == 0x1CE78Cu) {
        ctx->pc = 0x1CE78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE788u;
        // 0x1ce78c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE790u;
        goto label_1ce790;
    }
    ctx->pc = 0x1CE788u;
    {
        const bool branch_taken_0x1ce788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE788u;
        // 0x1ce78c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce788) {
            ctx->pc = 0x1CE874u;
            goto label_1ce874;
        }
    }
    ctx->pc = 0x1CE790u;
label_1ce790:
    // 0x1ce790: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x1ce790u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ce794:
    // 0x1ce794: 0x3c15006f  lui         $s5, 0x6F
    ctx->pc = 0x1ce794u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
label_1ce798:
    // 0x1ce798: 0x3c140055  lui         $s4, 0x55
    ctx->pc = 0x1ce798u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
label_1ce79c:
    // 0x1ce79c: 0x0  nop
    ctx->pc = 0x1ce79cu;
    // NOP
label_1ce7a0:
    // 0x1ce7a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ce7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce7a4:
    // 0x1ce7a4: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x1ce7a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1ce7a8:
    // 0x1ce7a8: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x1ce7a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_1ce7ac:
    // 0x1ce7ac: 0x50530004  beql        $v0, $s3, . + 4 + (0x4 << 2)
label_1ce7b0:
    if (ctx->pc == 0x1CE7B0u) {
        ctx->pc = 0x1CE7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE7ACu;
        // 0x1ce7b0: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE7B4u;
        goto label_1ce7b4;
    }
    ctx->pc = 0x1CE7ACu;
    {
        const bool branch_taken_0x1ce7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1ce7ac) {
            ctx->pc = 0x1CE7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE7ACu;
            // 0x1ce7b0: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE7C0u;
            goto label_1ce7c0;
        }
    }
    ctx->pc = 0x1CE7B4u;
label_1ce7b4:
    // 0x1ce7b4: 0x56760027  bnel        $s3, $s6, . + 4 + (0x27 << 2)
label_1ce7b8:
    if (ctx->pc == 0x1CE7B8u) {
        ctx->pc = 0x1CE7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE7B4u;
        // 0x1ce7b8: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE7BCu;
        goto label_1ce7bc;
    }
    ctx->pc = 0x1CE7B4u;
    {
        const bool branch_taken_0x1ce7b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 22));
        if (branch_taken_0x1ce7b4) {
            ctx->pc = 0x1CE7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE7B4u;
            // 0x1ce7b8: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE854u;
            goto label_1ce854;
        }
    }
    ctx->pc = 0x1CE7BCu;
label_1ce7bc:
    // 0x1ce7bc: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1ce7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_1ce7c0:
    // 0x1ce7c0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1ce7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ce7c4:
    // 0x1ce7c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ce7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1ce7c8:
    // 0x1ce7c8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1ce7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_1ce7cc:
    // 0x1ce7cc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ce7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ce7d0:
    // 0x1ce7d0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1ce7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1ce7d4:
    // 0x1ce7d4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1ce7d8:
    if (ctx->pc == 0x1CE7D8u) {
        ctx->pc = 0x1CE7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE7D4u;
        // 0x1ce7d8: 0x8ea8b9c0  lw          $t0, -0x4640($s5) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE7DCu;
        goto label_1ce7dc;
    }
    ctx->pc = 0x1CE7D4u;
    {
        const bool branch_taken_0x1ce7d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE7D4u;
        // 0x1ce7d8: 0x8ea8b9c0  lw          $t0, -0x4640($s5) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce7d4) {
            ctx->pc = 0x1CE7F8u;
            goto label_1ce7f8;
        }
    }
    ctx->pc = 0x1CE7DCu;
label_1ce7dc:
    // 0x1ce7dc: 0x26865998  addiu       $a2, $s4, 0x5998
    ctx->pc = 0x1ce7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 22936));
label_1ce7e0:
    // 0x1ce7e0: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1ce7e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1ce7e4:
    // 0x1ce7e4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1ce7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1ce7e8:
    // 0x1ce7e8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1ce7e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1ce7ec:
    // 0x1ce7ec: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1ce7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1ce7f0:
    // 0x1ce7f0: 0x60f809  jalr        $v1
label_1ce7f4:
    if (ctx->pc == 0x1CE7F4u) {
        ctx->pc = 0x1CE7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE7F0u;
        // 0x1ce7f4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE7F8u;
        goto label_1ce7f8;
    }
    ctx->pc = 0x1CE7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CE7F8u);
        ctx->pc = 0x1CE7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE7F0u;
        // 0x1ce7f4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE7F0u, 0x1CE7F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CE7F8u;
label_1ce7f8:
    // 0x1ce7f8: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1ce7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_1ce7fc:
    // 0x1ce7fc: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1ce7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_1ce800:
    // 0x1ce800: 0x8e460294  lw          $a2, 0x294($s2)
    ctx->pc = 0x1ce800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 660)));
label_1ce804:
    // 0x1ce804: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x1ce804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_1ce808:
    // 0x1ce808: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ce808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ce80c:
    // 0x1ce80c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1ce80cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1ce810:
    // 0x1ce810: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ce810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ce814:
    // 0x1ce814: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ce814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1ce818:
    // 0x1ce818: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1ce818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_1ce81c:
    // 0x1ce81c: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x1ce81cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
label_1ce820:
    // 0x1ce820: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1ce820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1ce824:
    // 0x1ce824: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x1ce824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1ce828:
    // 0x1ce828: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1ce82c:
    if (ctx->pc == 0x1CE82Cu) {
        ctx->pc = 0x1CE82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE828u;
        // 0x1ce82c: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE830u;
        goto label_1ce830;
    }
    ctx->pc = 0x1CE828u;
    {
        const bool branch_taken_0x1ce828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce828) {
            ctx->pc = 0x1CE82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE828u;
            // 0x1ce82c: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE848u;
            goto label_1ce848;
        }
    }
    ctx->pc = 0x1CE830u;
label_1ce830:
    // 0x1ce830: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x1ce830u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ce834:
    // 0x1ce834: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_1ce838:
    if (ctx->pc == 0x1CE838u) {
        ctx->pc = 0x1CE838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE834u;
        // 0x1ce838: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE83Cu;
        goto label_1ce83c;
    }
    ctx->pc = 0x1CE834u;
    {
        const bool branch_taken_0x1ce834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce834) {
            ctx->pc = 0x1CE838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE834u;
            // 0x1ce838: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE83Cu;
            goto label_1ce83c;
        }
    }
    ctx->pc = 0x1CE83Cu;
label_1ce83c:
    // 0x1ce83c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ce83cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ce840:
    // 0x1ce840: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x1ce840u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_1ce844:
    // 0x1ce844: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1ce844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1ce848:
    // 0x1ce848: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ce848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ce84c:
    // 0x1ce84c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ce850:
    if (ctx->pc == 0x1CE850u) {
        ctx->pc = 0x1CE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE84Cu;
        // 0x1ce850: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE854u;
        goto label_1ce854;
    }
    ctx->pc = 0x1CE84Cu;
    {
        const bool branch_taken_0x1ce84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE84Cu;
        // 0x1ce850: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce84c) {
            ctx->pc = 0x1CE860u;
            goto label_1ce860;
        }
    }
    ctx->pc = 0x1CE854u;
label_1ce854:
    // 0x1ce854: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ce854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ce858:
    // 0x1ce858: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1ce858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1ce85c:
    // 0x1ce85c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1ce85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1ce860:
    // 0x1ce860: 0x8e420290  lw          $v0, 0x290($s2)
    ctx->pc = 0x1ce860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 656)));
label_1ce864:
    // 0x1ce864: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1ce864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce868:
    // 0x1ce868: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ce868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ce86c:
    // 0x1ce86c: 0x1483ffcc  bne         $a0, $v1, . + 4 + (-0x34 << 2)
label_1ce870:
    if (ctx->pc == 0x1CE870u) {
        ctx->pc = 0x1CE870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE86Cu;
        // 0x1ce870: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE874u;
        goto label_1ce874;
    }
    ctx->pc = 0x1CE86Cu;
    {
        const bool branch_taken_0x1ce86c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CE870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE86Cu;
        // 0x1ce870: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce86c) {
            ctx->pc = 0x1CE7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ce7a0;
        }
    }
    ctx->pc = 0x1CE874u;
label_1ce874:
    // 0x1ce874: 0x924203ac  lbu         $v0, 0x3AC($s2)
    ctx->pc = 0x1ce874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 940)));
label_1ce878:
    // 0x1ce878: 0x10530003  beq         $v0, $s3, . + 4 + (0x3 << 2)
label_1ce87c:
    if (ctx->pc == 0x1CE87Cu) {
        ctx->pc = 0x1CE87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE878u;
        // 0x1ce87c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE880u;
        goto label_1ce880;
    }
    ctx->pc = 0x1CE878u;
    {
        const bool branch_taken_0x1ce878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1CE87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE878u;
        // 0x1ce87c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce878) {
            ctx->pc = 0x1CE888u;
            goto label_1ce888;
        }
    }
    ctx->pc = 0x1CE880u;
label_1ce880:
    // 0x1ce880: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
label_1ce884:
    if (ctx->pc == 0x1CE884u) {
        ctx->pc = 0x1CE884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE880u;
        // 0x1ce884: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE888u;
        goto label_1ce888;
    }
    ctx->pc = 0x1CE880u;
    {
        const bool branch_taken_0x1ce880 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CE884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE880u;
        // 0x1ce884: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce880) {
            ctx->pc = 0x1CE894u;
            goto label_1ce894;
        }
    }
    ctx->pc = 0x1CE888u;
label_1ce888:
    // 0x1ce888: 0xc06e4a4  jal         func_1B9290
label_1ce88c:
    if (ctx->pc == 0x1CE88Cu) {
        ctx->pc = 0x1CE88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE888u;
        // 0x1ce88c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE890u;
        goto label_1ce890;
    }
    ctx->pc = 0x1CE888u;
    SET_GPR_U32(ctx, 31, 0x1CE890u);
    ctx->pc = 0x1CE88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE888u;
    // 0x1ce88c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1CE888u, 0x1CE890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE890u;
label_1ce890:
    // 0x1ce890: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1ce890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1ce894:
    // 0x1ce894: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1ce894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1ce898:
    // 0x1ce898: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1ce898u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1ce89c:
    // 0x1ce89c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1ce89cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ce8a0:
    // 0x1ce8a0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1ce8a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ce8a4:
    // 0x1ce8a4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1ce8a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ce8a8:
    // 0x1ce8a8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1ce8a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ce8ac:
    // 0x1ce8ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ce8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ce8b0:
    // 0x1ce8b0: 0x3e00008  jr          $ra
label_1ce8b4:
    if (ctx->pc == 0x1CE8B4u) {
        ctx->pc = 0x1CE8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8B0u;
        // 0x1ce8b4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE8B8u;
        goto label_fallthrough_0x1ce8b0;
    }
    ctx->pc = 0x1CE8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8B0u;
        // 0x1ce8b4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ce8b0:
    ctx->pc = 0x1CE8B8u;
}
