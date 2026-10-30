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

// Function: sub_003C3078
// Address: 0x3c3078 - 0x3c31e8
void sub_003C3078_0x3c3078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3078_0x3c3078");
#endif

    switch (ctx->pc) {
        case 0x3c3078u: goto label_3c3078;
        case 0x3c307cu: goto label_3c307c;
        case 0x3c3080u: goto label_3c3080;
        case 0x3c3084u: goto label_3c3084;
        case 0x3c3088u: goto label_3c3088;
        case 0x3c308cu: goto label_3c308c;
        case 0x3c3090u: goto label_3c3090;
        case 0x3c3094u: goto label_3c3094;
        case 0x3c3098u: goto label_3c3098;
        case 0x3c309cu: goto label_3c309c;
        case 0x3c30a0u: goto label_3c30a0;
        case 0x3c30a4u: goto label_3c30a4;
        case 0x3c30a8u: goto label_3c30a8;
        case 0x3c30acu: goto label_3c30ac;
        case 0x3c30b0u: goto label_3c30b0;
        case 0x3c30b4u: goto label_3c30b4;
        case 0x3c30b8u: goto label_3c30b8;
        case 0x3c30bcu: goto label_3c30bc;
        case 0x3c30c0u: goto label_3c30c0;
        case 0x3c30c4u: goto label_3c30c4;
        case 0x3c30c8u: goto label_3c30c8;
        case 0x3c30ccu: goto label_3c30cc;
        case 0x3c30d0u: goto label_3c30d0;
        case 0x3c30d4u: goto label_3c30d4;
        case 0x3c30d8u: goto label_3c30d8;
        case 0x3c30dcu: goto label_3c30dc;
        case 0x3c30e0u: goto label_3c30e0;
        case 0x3c30e4u: goto label_3c30e4;
        case 0x3c30e8u: goto label_3c30e8;
        case 0x3c30ecu: goto label_3c30ec;
        case 0x3c30f0u: goto label_3c30f0;
        case 0x3c30f4u: goto label_3c30f4;
        case 0x3c30f8u: goto label_3c30f8;
        case 0x3c30fcu: goto label_3c30fc;
        case 0x3c3100u: goto label_3c3100;
        case 0x3c3104u: goto label_3c3104;
        case 0x3c3108u: goto label_3c3108;
        case 0x3c310cu: goto label_3c310c;
        case 0x3c3110u: goto label_3c3110;
        case 0x3c3114u: goto label_3c3114;
        case 0x3c3118u: goto label_3c3118;
        case 0x3c311cu: goto label_3c311c;
        case 0x3c3120u: goto label_3c3120;
        case 0x3c3124u: goto label_3c3124;
        case 0x3c3128u: goto label_3c3128;
        case 0x3c312cu: goto label_3c312c;
        case 0x3c3130u: goto label_3c3130;
        case 0x3c3134u: goto label_3c3134;
        case 0x3c3138u: goto label_3c3138;
        case 0x3c313cu: goto label_3c313c;
        case 0x3c3140u: goto label_3c3140;
        case 0x3c3144u: goto label_3c3144;
        case 0x3c3148u: goto label_3c3148;
        case 0x3c314cu: goto label_3c314c;
        case 0x3c3150u: goto label_3c3150;
        case 0x3c3154u: goto label_3c3154;
        case 0x3c3158u: goto label_3c3158;
        case 0x3c315cu: goto label_3c315c;
        case 0x3c3160u: goto label_3c3160;
        case 0x3c3164u: goto label_3c3164;
        case 0x3c3168u: goto label_3c3168;
        case 0x3c316cu: goto label_3c316c;
        case 0x3c3170u: goto label_3c3170;
        case 0x3c3174u: goto label_3c3174;
        case 0x3c3178u: goto label_3c3178;
        case 0x3c317cu: goto label_3c317c;
        case 0x3c3180u: goto label_3c3180;
        case 0x3c3184u: goto label_3c3184;
        case 0x3c3188u: goto label_3c3188;
        case 0x3c318cu: goto label_3c318c;
        case 0x3c3190u: goto label_3c3190;
        case 0x3c3194u: goto label_3c3194;
        case 0x3c3198u: goto label_3c3198;
        case 0x3c319cu: goto label_3c319c;
        case 0x3c31a0u: goto label_3c31a0;
        case 0x3c31a4u: goto label_3c31a4;
        case 0x3c31a8u: goto label_3c31a8;
        case 0x3c31acu: goto label_3c31ac;
        case 0x3c31b0u: goto label_3c31b0;
        case 0x3c31b4u: goto label_3c31b4;
        case 0x3c31b8u: goto label_3c31b8;
        case 0x3c31bcu: goto label_3c31bc;
        case 0x3c31c0u: goto label_3c31c0;
        case 0x3c31c4u: goto label_3c31c4;
        case 0x3c31c8u: goto label_3c31c8;
        case 0x3c31ccu: goto label_3c31cc;
        case 0x3c31d0u: goto label_3c31d0;
        case 0x3c31d4u: goto label_3c31d4;
        case 0x3c31d8u: goto label_3c31d8;
        case 0x3c31dcu: goto label_3c31dc;
        case 0x3c31e0u: goto label_3c31e0;
        case 0x3c31e4u: goto label_3c31e4;
        default: break;
    }

    ctx->pc = 0x3c3078u;

label_3c3078:
    // 0x3c3078: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3c3078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3c307c:
    // 0x3c307c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3c307cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3c3080:
    // 0x3c3080: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3c3080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3c3084:
    // 0x3c3084: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c3084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c3088:
    // 0x3c3088: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3c3088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3c308c:
    // 0x3c308c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3c308cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3c3090:
    // 0x3c3090: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c3090u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c3094:
    // 0x3c3094: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3c3094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3c3098:
    // 0x3c3098: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3c3098u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3c309c:
    // 0x3c309c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c309cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c30a0:
    // 0x3c30a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c30a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c30a4:
    // 0x3c30a4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c30a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c30a8:
    // 0x3c30a8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c30a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c30ac:
    // 0x3c30ac: 0x40f809  jalr        $v0
label_3c30b0:
    if (ctx->pc == 0x3C30B0u) {
        ctx->pc = 0x3C30B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C30ACu;
        // 0x3c30b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C30B4u;
        goto label_3c30b4;
    }
    ctx->pc = 0x3C30ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C30B4u);
        ctx->pc = 0x3C30B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C30ACu;
        // 0x3c30b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C30ACu, 0x3C30B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C30B4u;
label_3c30b4:
    // 0x3c30b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c30b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c30b8:
    // 0x3c30b8: 0xc0ea146  jal         func_3A8518
label_3c30bc:
    if (ctx->pc == 0x3C30BCu) {
        ctx->pc = 0x3C30BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C30B8u;
        // 0x3c30bc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C30C0u;
        goto label_3c30c0;
    }
    ctx->pc = 0x3C30B8u;
    SET_GPR_U32(ctx, 31, 0x3C30C0u);
    ctx->pc = 0x3C30BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C30B8u;
    // 0x3c30bc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C30B8u, 0x3C30C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C30C0u;
label_3c30c0:
    // 0x3c30c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c30c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c30c4:
    // 0x3c30c4: 0xc0ea146  jal         func_3A8518
label_3c30c8:
    if (ctx->pc == 0x3C30C8u) {
        ctx->pc = 0x3C30C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C30C4u;
        // 0x3c30c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C30CCu;
        goto label_3c30cc;
    }
    ctx->pc = 0x3C30C4u;
    SET_GPR_U32(ctx, 31, 0x3C30CCu);
    ctx->pc = 0x3C30C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C30C4u;
    // 0x3c30c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C30C4u, 0x3C30CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C30CCu;
label_3c30cc:
    // 0x3c30cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3c30ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c30d0:
    // 0x3c30d0: 0xc0ea13a  jal         func_3A84E8
label_3c30d4:
    if (ctx->pc == 0x3C30D4u) {
        ctx->pc = 0x3C30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C30D0u;
        // 0x3c30d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C30D8u;
        goto label_3c30d8;
    }
    ctx->pc = 0x3C30D0u;
    SET_GPR_U32(ctx, 31, 0x3C30D8u);
    ctx->pc = 0x3C30D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C30D0u;
    // 0x3c30d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3C30D0u, 0x3C30D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C30D8u;
label_3c30d8:
    // 0x3c30d8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c30d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c30dc:
    // 0x3c30dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c30dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c30e0:
    // 0x3c30e0: 0xc0ea12a  jal         func_3A84A8
label_3c30e4:
    if (ctx->pc == 0x3C30E4u) {
        ctx->pc = 0x3C30E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C30E0u;
        // 0x3c30e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C30E8u;
        goto label_3c30e8;
    }
    ctx->pc = 0x3C30E0u;
    SET_GPR_U32(ctx, 31, 0x3C30E8u);
    ctx->pc = 0x3C30E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C30E0u;
    // 0x3c30e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C30E0u, 0x3C30E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C30E8u;
label_3c30e8:
    // 0x3c30e8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c30e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c30ec:
    // 0x3c30ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c30ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c30f0:
    // 0x3c30f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c30f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c30f4:
    // 0x3c30f4: 0xc0ea12a  jal         func_3A84A8
label_3c30f8:
    if (ctx->pc == 0x3C30F8u) {
        ctx->pc = 0x3C30F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C30F4u;
        // 0x3c30f8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C30FCu;
        goto label_3c30fc;
    }
    ctx->pc = 0x3C30F4u;
    SET_GPR_U32(ctx, 31, 0x3C30FCu);
    ctx->pc = 0x3C30F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C30F4u;
    // 0x3c30f8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C30F4u, 0x3C30FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C30FCu;
label_3c30fc:
    // 0x3c30fc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c30fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c3100:
    // 0x3c3100: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c3100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c3104:
    // 0x3c3104: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3c3104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c3108:
    // 0x3c3108: 0xc0e858c  jal         func_3A1630
label_3c310c:
    if (ctx->pc == 0x3C310Cu) {
        ctx->pc = 0x3C310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3108u;
        // 0x3c310c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3110u;
        goto label_3c3110;
    }
    ctx->pc = 0x3C3108u;
    SET_GPR_U32(ctx, 31, 0x3C3110u);
    ctx->pc = 0x3C310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3108u;
    // 0x3c310c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C3108u, 0x3C3110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3110u;
label_3c3110:
    // 0x3c3110: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3c3110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_3c3114:
    // 0x3c3114: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c3114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c3118:
    // 0x3c3118: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3c3118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3c311c:
    // 0x3c311c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3c311cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c3120:
    // 0x3c3120: 0xc0cd4ee  jal         func_3353B8
label_3c3124:
    if (ctx->pc == 0x3C3124u) {
        ctx->pc = 0x3C3124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3120u;
        // 0x3c3124: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C3128u;
        goto label_3c3128;
    }
    ctx->pc = 0x3C3120u;
    SET_GPR_U32(ctx, 31, 0x3C3128u);
    ctx->pc = 0x3C3124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3120u;
    // 0x3c3124: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C3120u, 0x3C3128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3128u;
label_3c3128:
    // 0x3c3128: 0x2442002e  addiu       $v0, $v0, 0x2E
    ctx->pc = 0x3c3128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 46));
label_3c312c:
    // 0x3c312c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3c312cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3c3130:
    // 0x3c3130: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3c3130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3c3134:
    // 0x3c3134: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3c3134u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c3138:
    // 0x3c3138: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c3138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3c313c:
    // 0x3c313c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c313cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c3140:
    // 0x3c3140: 0xae4200c4  sw          $v0, 0xC4($s2)
    ctx->pc = 0x3c3140u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
label_3c3144:
    // 0x3c3144: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3c3144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c3148:
    // 0x3c3148: 0x7e440010  sq          $a0, 0x10($s2)
    ctx->pc = 0x3c3148u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 4));
label_3c314c:
    // 0x3c314c: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3c314cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3c3150:
    // 0x3c3150: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3c3150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3c3154:
    // 0x3c3154: 0x60f809  jalr        $v1
label_3c3158:
    if (ctx->pc == 0x3C3158u) {
        ctx->pc = 0x3C3158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3154u;
        // 0x3c3158: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C315Cu;
        goto label_3c315c;
    }
    ctx->pc = 0x3C3154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C315Cu);
        ctx->pc = 0x3C3158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3154u;
        // 0x3c3158: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C3154u, 0x3C315Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C315Cu;
label_3c315c:
    // 0x3c315c: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x3c315cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_3c3160:
    // 0x3c3160: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3c3160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3c3164:
    // 0x3c3164: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c3164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c3168:
    // 0x3c3168: 0x3c02bec7  lui         $v0, 0xBEC7
    ctx->pc = 0x3c3168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48839 << 16));
label_3c316c:
    // 0x3c316c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3c316cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_3c3170:
    // 0x3c3170: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3c3170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c3174:
    // 0x3c3174: 0x3442ce00  ori         $v0, $v0, 0xCE00
    ctx->pc = 0x3c3174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52736);
label_3c3178:
    // 0x3c3178: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3c3178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3c317c:
    // 0x3c317c: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x3c317cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_3c3180:
    // 0x3c3180: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x3c3180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_3c3184:
    // 0x3c3184: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c3184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c3188:
    // 0x3c3188: 0xae4200b0  sw          $v0, 0xB0($s2)
    ctx->pc = 0x3c3188u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
label_3c318c:
    // 0x3c318c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c318cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c3190:
    // 0x3c3190: 0xe64200cc  swc1        $f2, 0xCC($s2)
    ctx->pc = 0x3c3190u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 204), bits); }
label_3c3194:
    // 0x3c3194: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x3c3194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_3c3198:
    // 0x3c3198: 0xe64100d0  swc1        $f1, 0xD0($s2)
    ctx->pc = 0x3c3198u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
label_3c319c:
    // 0x3c319c: 0x16230005  bne         $s1, $v1, . + 4 + (0x5 << 2)
label_3c31a0:
    if (ctx->pc == 0x3C31A0u) {
        ctx->pc = 0x3C31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C319Cu;
        // 0x3c31a0: 0xae4000bc  sw          $zero, 0xBC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C31A4u;
        goto label_3c31a4;
    }
    ctx->pc = 0x3C319Cu;
    {
        const bool branch_taken_0x3c319c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C319Cu;
        // 0x3c31a0: 0xae4000bc  sw          $zero, 0xBC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c319c) {
            ctx->pc = 0x3C31B4u;
            goto label_3c31b4;
        }
    }
    ctx->pc = 0x3C31A4u;
label_3c31a4:
    // 0x3c31a4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3c31a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3c31a8:
    // 0x3c31a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3c31a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3c31ac:
    // 0x3c31ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c31acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3c31b0:
    // 0x3c31b0: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3c31b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3c31b4:
    // 0x3c31b4: 0xe6740008  swc1        $f20, 0x8($s3)
    ctx->pc = 0x3c31b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_3c31b8:
    // 0x3c31b8: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x3c31b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
label_3c31bc:
    // 0x3c31bc: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3c31bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3c31c0:
    // 0x3c31c0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3c31c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c31c4:
    // 0x3c31c4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3c31c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c31c8:
    // 0x3c31c8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3c31c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c31cc:
    // 0x3c31cc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3c31ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c31d0:
    // 0x3c31d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3c31d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c31d4:
    // 0x3c31d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c31d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c31d8:
    // 0x3c31d8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3c31d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c31dc:
    // 0x3c31dc: 0x3e00008  jr          $ra
label_3c31e0:
    if (ctx->pc == 0x3C31E0u) {
        ctx->pc = 0x3C31E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C31DCu;
        // 0x3c31e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C31E4u;
        goto label_3c31e4;
    }
    ctx->pc = 0x3C31DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C31E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C31DCu;
        // 0x3c31e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C31DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C31E4u;
label_3c31e4:
    // 0x3c31e4: 0x0  nop
    ctx->pc = 0x3c31e4u;
    // NOP
    ctx->pc = 0x3c31e8u;
}
