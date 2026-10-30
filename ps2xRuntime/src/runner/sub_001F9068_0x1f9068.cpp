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

// Function: sub_001F9068
// Address: 0x1f9068 - 0x1f9228
void sub_001F9068_0x1f9068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9068_0x1f9068");
#endif

    switch (ctx->pc) {
        case 0x1f9068u: goto label_1f9068;
        case 0x1f906cu: goto label_1f906c;
        case 0x1f9070u: goto label_1f9070;
        case 0x1f9074u: goto label_1f9074;
        case 0x1f9078u: goto label_1f9078;
        case 0x1f907cu: goto label_1f907c;
        case 0x1f9080u: goto label_1f9080;
        case 0x1f9084u: goto label_1f9084;
        case 0x1f9088u: goto label_1f9088;
        case 0x1f908cu: goto label_1f908c;
        case 0x1f9090u: goto label_1f9090;
        case 0x1f9094u: goto label_1f9094;
        case 0x1f9098u: goto label_1f9098;
        case 0x1f909cu: goto label_1f909c;
        case 0x1f90a0u: goto label_1f90a0;
        case 0x1f90a4u: goto label_1f90a4;
        case 0x1f90a8u: goto label_1f90a8;
        case 0x1f90acu: goto label_1f90ac;
        case 0x1f90b0u: goto label_1f90b0;
        case 0x1f90b4u: goto label_1f90b4;
        case 0x1f90b8u: goto label_1f90b8;
        case 0x1f90bcu: goto label_1f90bc;
        case 0x1f90c0u: goto label_1f90c0;
        case 0x1f90c4u: goto label_1f90c4;
        case 0x1f90c8u: goto label_1f90c8;
        case 0x1f90ccu: goto label_1f90cc;
        case 0x1f90d0u: goto label_1f90d0;
        case 0x1f90d4u: goto label_1f90d4;
        case 0x1f90d8u: goto label_1f90d8;
        case 0x1f90dcu: goto label_1f90dc;
        case 0x1f90e0u: goto label_1f90e0;
        case 0x1f90e4u: goto label_1f90e4;
        case 0x1f90e8u: goto label_1f90e8;
        case 0x1f90ecu: goto label_1f90ec;
        case 0x1f90f0u: goto label_1f90f0;
        case 0x1f90f4u: goto label_1f90f4;
        case 0x1f90f8u: goto label_1f90f8;
        case 0x1f90fcu: goto label_1f90fc;
        case 0x1f9100u: goto label_1f9100;
        case 0x1f9104u: goto label_1f9104;
        case 0x1f9108u: goto label_1f9108;
        case 0x1f910cu: goto label_1f910c;
        case 0x1f9110u: goto label_1f9110;
        case 0x1f9114u: goto label_1f9114;
        case 0x1f9118u: goto label_1f9118;
        case 0x1f911cu: goto label_1f911c;
        case 0x1f9120u: goto label_1f9120;
        case 0x1f9124u: goto label_1f9124;
        case 0x1f9128u: goto label_1f9128;
        case 0x1f912cu: goto label_1f912c;
        case 0x1f9130u: goto label_1f9130;
        case 0x1f9134u: goto label_1f9134;
        case 0x1f9138u: goto label_1f9138;
        case 0x1f913cu: goto label_1f913c;
        case 0x1f9140u: goto label_1f9140;
        case 0x1f9144u: goto label_1f9144;
        case 0x1f9148u: goto label_1f9148;
        case 0x1f914cu: goto label_1f914c;
        case 0x1f9150u: goto label_1f9150;
        case 0x1f9154u: goto label_1f9154;
        case 0x1f9158u: goto label_1f9158;
        case 0x1f915cu: goto label_1f915c;
        case 0x1f9160u: goto label_1f9160;
        case 0x1f9164u: goto label_1f9164;
        case 0x1f9168u: goto label_1f9168;
        case 0x1f916cu: goto label_1f916c;
        case 0x1f9170u: goto label_1f9170;
        case 0x1f9174u: goto label_1f9174;
        case 0x1f9178u: goto label_1f9178;
        case 0x1f917cu: goto label_1f917c;
        case 0x1f9180u: goto label_1f9180;
        case 0x1f9184u: goto label_1f9184;
        case 0x1f9188u: goto label_1f9188;
        case 0x1f918cu: goto label_1f918c;
        case 0x1f9190u: goto label_1f9190;
        case 0x1f9194u: goto label_1f9194;
        case 0x1f9198u: goto label_1f9198;
        case 0x1f919cu: goto label_1f919c;
        case 0x1f91a0u: goto label_1f91a0;
        case 0x1f91a4u: goto label_1f91a4;
        case 0x1f91a8u: goto label_1f91a8;
        case 0x1f91acu: goto label_1f91ac;
        case 0x1f91b0u: goto label_1f91b0;
        case 0x1f91b4u: goto label_1f91b4;
        case 0x1f91b8u: goto label_1f91b8;
        case 0x1f91bcu: goto label_1f91bc;
        case 0x1f91c0u: goto label_1f91c0;
        case 0x1f91c4u: goto label_1f91c4;
        case 0x1f91c8u: goto label_1f91c8;
        case 0x1f91ccu: goto label_1f91cc;
        case 0x1f91d0u: goto label_1f91d0;
        case 0x1f91d4u: goto label_1f91d4;
        case 0x1f91d8u: goto label_1f91d8;
        case 0x1f91dcu: goto label_1f91dc;
        case 0x1f91e0u: goto label_1f91e0;
        case 0x1f91e4u: goto label_1f91e4;
        case 0x1f91e8u: goto label_1f91e8;
        case 0x1f91ecu: goto label_1f91ec;
        case 0x1f91f0u: goto label_1f91f0;
        case 0x1f91f4u: goto label_1f91f4;
        case 0x1f91f8u: goto label_1f91f8;
        case 0x1f91fcu: goto label_1f91fc;
        case 0x1f9200u: goto label_1f9200;
        case 0x1f9204u: goto label_1f9204;
        case 0x1f9208u: goto label_1f9208;
        case 0x1f920cu: goto label_1f920c;
        case 0x1f9210u: goto label_1f9210;
        case 0x1f9214u: goto label_1f9214;
        case 0x1f9218u: goto label_1f9218;
        case 0x1f921cu: goto label_1f921c;
        case 0x1f9220u: goto label_1f9220;
        case 0x1f9224u: goto label_1f9224;
        default: break;
    }

    ctx->pc = 0x1f9068u;

label_1f9068:
    // 0x1f9068: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f9068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1f906c:
    // 0x1f906c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1f906cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1f9070:
    // 0x1f9070: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1f9070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1f9074:
    // 0x1f9074: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f9074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f9078:
    // 0x1f9078: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1f9078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1f907c:
    // 0x1f907c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f907cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f9080:
    // 0x1f9080: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f9080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1f9084:
    // 0x1f9084: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1f9084u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1f9088:
    // 0x1f9088: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1f9088u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1f908c:
    // 0x1f908c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f908cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f9090:
    // 0x1f9090: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1f9090u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1f9094:
    // 0x1f9094: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1f9094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1f9098:
    // 0x1f9098: 0x40f809  jalr        $v0
label_1f909c:
    if (ctx->pc == 0x1F909Cu) {
        ctx->pc = 0x1F909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9098u;
        // 0x1f909c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F90A0u;
        goto label_1f90a0;
    }
    ctx->pc = 0x1F9098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F90A0u);
        ctx->pc = 0x1F909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9098u;
        // 0x1f909c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9098u, 0x1F90A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F90A0u;
label_1f90a0:
    // 0x1f90a0: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
label_1f90a4:
    if (ctx->pc == 0x1F90A4u) {
        ctx->pc = 0x1F90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90A0u;
        // 0x1f90a4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F90A8u;
        goto label_1f90a8;
    }
    ctx->pc = 0x1F90A0u;
    {
        const bool branch_taken_0x1f90a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90A0u;
        // 0x1f90a4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f90a0) {
            ctx->pc = 0x1F9204u;
            goto label_1f9204;
        }
    }
    ctx->pc = 0x1F90A8u;
label_1f90a8:
    // 0x1f90a8: 0xc07f88a  jal         func_1FE228
label_1f90ac:
    if (ctx->pc == 0x1F90ACu) {
        ctx->pc = 0x1F90B0u;
        goto label_1f90b0;
    }
    ctx->pc = 0x1F90A8u;
    SET_GPR_U32(ctx, 31, 0x1F90B0u);
    ctx->pc = 0x1FE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE228u, 0x1F90A8u, 0x1F90B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F90B0u;
label_1f90b0:
    // 0x1f90b0: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
label_1f90b4:
    if (ctx->pc == 0x1F90B4u) {
        ctx->pc = 0x1F90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90B0u;
        // 0x1f90b4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F90B8u;
        goto label_1f90b8;
    }
    ctx->pc = 0x1F90B0u;
    {
        const bool branch_taken_0x1f90b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90B0u;
        // 0x1f90b4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f90b0) {
            ctx->pc = 0x1F9204u;
            goto label_1f9204;
        }
    }
    ctx->pc = 0x1F90B8u;
label_1f90b8:
    // 0x1f90b8: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x1f90b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1f90bc:
    // 0x1f90bc: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x1f90bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_1f90c0:
    // 0x1f90c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f90c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1f90c4:
    // 0x1f90c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f90c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f90c8:
    // 0x1f90c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f90c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f90cc:
    // 0x1f90cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f90ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f90d0:
    // 0x1f90d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f90d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f90d4:
    // 0x1f90d4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f90d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1f90d8:
    // 0x1f90d8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f90d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f90dc:
    // 0x1f90dc: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f90dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f90e0:
    // 0x1f90e0: 0x60f809  jalr        $v1
label_1f90e4:
    if (ctx->pc == 0x1F90E4u) {
        ctx->pc = 0x1F90E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90E0u;
        // 0x1f90e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F90E8u;
        goto label_1f90e8;
    }
    ctx->pc = 0x1F90E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F90E8u);
        ctx->pc = 0x1F90E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90E0u;
        // 0x1f90e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F90E0u, 0x1F90E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F90E8u;
label_1f90e8:
    // 0x1f90e8: 0x8e2500a4  lw          $a1, 0xA4($s1)
    ctx->pc = 0x1f90e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_1f90ec:
    // 0x1f90ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f90ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f90f0:
    // 0x1f90f0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f90f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f90f4:
    // 0x1f90f4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f90f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f90f8:
    // 0x1f90f8: 0x60f809  jalr        $v1
label_1f90fc:
    if (ctx->pc == 0x1F90FCu) {
        ctx->pc = 0x1F90FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90F8u;
        // 0x1f90fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9100u;
        goto label_1f9100;
    }
    ctx->pc = 0x1F90F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F9100u);
        ctx->pc = 0x1F90FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90F8u;
        // 0x1f90fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F90F8u, 0x1F9100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9100u;
label_1f9100:
    // 0x1f9100: 0xc07e3e6  jal         func_1F8F98
label_1f9104:
    if (ctx->pc == 0x1F9104u) {
        ctx->pc = 0x1F9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9100u;
        // 0x1f9104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9108u;
        goto label_1f9108;
    }
    ctx->pc = 0x1F9100u;
    SET_GPR_U32(ctx, 31, 0x1F9108u);
    ctx->pc = 0x1F9104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9100u;
    // 0x1f9104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8F98u, 0x1F9100u, 0x1F9108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9108u;
label_1f9108:
    // 0x1f9108: 0x8e2600a0  lw          $a2, 0xA0($s1)
    ctx->pc = 0x1f9108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1f910c:
    // 0x1f910c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1f910cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f9110:
    // 0x1f9110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9114:
    // 0x1f9114: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f9114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f9118:
    // 0x1f9118: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1f9118u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1f911c:
    // 0x1f911c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1f911cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1f9120:
    // 0x1f9120: 0x60f809  jalr        $v1
label_1f9124:
    if (ctx->pc == 0x1F9124u) {
        ctx->pc = 0x1F9124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9120u;
        // 0x1f9124: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9128u;
        goto label_1f9128;
    }
    ctx->pc = 0x1F9120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F9128u);
        ctx->pc = 0x1F9124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9120u;
        // 0x1f9124: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9120u, 0x1F9128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9128u;
label_1f9128:
    // 0x1f9128: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1f9128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f912c:
    // 0x1f912c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f912cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f9130:
    // 0x1f9130: 0xc441f46c  lwc1        $f1, -0xB94($v0)
    ctx->pc = 0x1f9130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9134:
    // 0x1f9134: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f9134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f9138:
    // 0x1f9138: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1f9138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1f913c:
    // 0x1f913c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1f913cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1f9140:
    // 0x1f9140: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f9140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1f9144:
    // 0x1f9144: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f9144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9148:
    // 0x1f9148: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1f9148u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1f914c:
    // 0x1f914c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1f914cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1f9150:
    // 0x1f9150: 0x8e270090  lw          $a3, 0x90($s1)
    ctx->pc = 0x1f9150u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1f9154:
    // 0x1f9154: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f9154u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1f9158:
    // 0x1f9158: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f9158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1f915c:
    // 0x1f915c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f915cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f9160:
    // 0x1f9160: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1f9160u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1f9164:
    // 0x1f9164: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1f9164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1f9168:
    // 0x1f9168: 0x60f809  jalr        $v1
label_1f916c:
    if (ctx->pc == 0x1F916Cu) {
        ctx->pc = 0x1F916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9168u;
        // 0x1f916c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9170u;
        goto label_1f9170;
    }
    ctx->pc = 0x1F9168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F9170u);
        ctx->pc = 0x1F916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9168u;
        // 0x1f916c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9168u, 0x1F9170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9170u;
label_1f9170:
    // 0x1f9170: 0x8e2600a0  lw          $a2, 0xA0($s1)
    ctx->pc = 0x1f9170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1f9174:
    // 0x1f9174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9178:
    // 0x1f9178: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f9178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f917c:
    // 0x1f917c: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1f917cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1f9180:
    // 0x1f9180: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1f9180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1f9184:
    // 0x1f9184: 0x60f809  jalr        $v1
label_1f9188:
    if (ctx->pc == 0x1F9188u) {
        ctx->pc = 0x1F9188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9184u;
        // 0x1f9188: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F918Cu;
        goto label_1f918c;
    }
    ctx->pc = 0x1F9184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F918Cu);
        ctx->pc = 0x1F9188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9184u;
        // 0x1f9188: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9184u, 0x1F918Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F918Cu;
label_1f918c:
    // 0x1f918c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1f918cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9190:
    // 0x1f9190: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f9190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f9194:
    // 0x1f9194: 0xc441f470  lwc1        $f1, -0xB90($v0)
    ctx->pc = 0x1f9194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9198:
    // 0x1f9198: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f9198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f919c:
    // 0x1f919c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1f919cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1f91a0:
    // 0x1f91a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1f91a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1f91a4:
    // 0x1f91a4: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1f91a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1f91a8:
    // 0x1f91a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f91a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f91ac:
    // 0x1f91ac: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f91acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1f91b0:
    // 0x1f91b0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1f91b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1f91b4:
    // 0x1f91b4: 0x8e270094  lw          $a3, 0x94($s1)
    ctx->pc = 0x1f91b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1f91b8:
    // 0x1f91b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f91b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f91bc:
    // 0x1f91bc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f91bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1f91c0:
    // 0x1f91c0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f91c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f91c4:
    // 0x1f91c4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1f91c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1f91c8:
    // 0x1f91c8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1f91c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1f91cc:
    // 0x1f91cc: 0x60f809  jalr        $v1
label_1f91d0:
    if (ctx->pc == 0x1F91D0u) {
        ctx->pc = 0x1F91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91CCu;
        // 0x1f91d0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F91D4u;
        goto label_1f91d4;
    }
    ctx->pc = 0x1F91CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F91D4u);
        ctx->pc = 0x1F91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91CCu;
        // 0x1f91d0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F91CCu, 0x1F91D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F91D4u;
label_1f91d4:
    // 0x1f91d4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1f91d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f91d8:
    // 0x1f91d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f91d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f91dc:
    // 0x1f91dc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1f91dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1f91e0:
    // 0x1f91e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f91e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f91e4:
    // 0x1f91e4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f91e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f91e8:
    // 0x1f91e8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f91e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f91ec:
    // 0x1f91ec: 0x60f809  jalr        $v1
label_1f91f0:
    if (ctx->pc == 0x1F91F0u) {
        ctx->pc = 0x1F91F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91ECu;
        // 0x1f91f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F91F4u;
        goto label_1f91f4;
    }
    ctx->pc = 0x1F91ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F91F4u);
        ctx->pc = 0x1F91F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91ECu;
        // 0x1f91f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F91ECu, 0x1F91F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F91F4u;
label_1f91f4:
    // 0x1f91f4: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x1f91f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1f91f8:
    // 0x1f91f8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_1f91fc:
    if (ctx->pc == 0x1F91FCu) {
        ctx->pc = 0x1F91FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91F8u;
        // 0x1f91fc: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9200u;
        goto label_1f9200;
    }
    ctx->pc = 0x1F91F8u;
    {
        const bool branch_taken_0x1f91f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f91f8) {
            ctx->pc = 0x1F91FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F91F8u;
            // 0x1f91fc: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F91D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f91d8;
        }
    }
    ctx->pc = 0x1F9200u;
label_1f9200:
    // 0x1f9200: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1f9200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f9204:
    // 0x1f9204: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1f9204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f9208:
    // 0x1f9208: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1f9208u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f920c:
    // 0x1f920c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f920cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f9210:
    // 0x1f9210: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f9210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f9214:
    // 0x1f9214: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1f9214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1f9218:
    // 0x1f9218: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1f9218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f921c:
    // 0x1f921c: 0x3e00008  jr          $ra
label_1f9220:
    if (ctx->pc == 0x1F9220u) {
        ctx->pc = 0x1F9220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F921Cu;
        // 0x1f9220: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9224u;
        goto label_1f9224;
    }
    ctx->pc = 0x1F921Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F921Cu;
        // 0x1f9220: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F921Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9224u;
label_1f9224:
    // 0x1f9224: 0x0  nop
    ctx->pc = 0x1f9224u;
    // NOP
    ctx->pc = 0x1f9228u;
}
