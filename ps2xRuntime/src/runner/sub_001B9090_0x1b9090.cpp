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

// Function: sub_001B9090
// Address: 0x1b9090 - 0x1b9288
void sub_001B9090_0x1b9090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9090_0x1b9090");
#endif

    switch (ctx->pc) {
        case 0x1b9090u: goto label_1b9090;
        case 0x1b9094u: goto label_1b9094;
        case 0x1b9098u: goto label_1b9098;
        case 0x1b909cu: goto label_1b909c;
        case 0x1b90a0u: goto label_1b90a0;
        case 0x1b90a4u: goto label_1b90a4;
        case 0x1b90a8u: goto label_1b90a8;
        case 0x1b90acu: goto label_1b90ac;
        case 0x1b90b0u: goto label_1b90b0;
        case 0x1b90b4u: goto label_1b90b4;
        case 0x1b90b8u: goto label_1b90b8;
        case 0x1b90bcu: goto label_1b90bc;
        case 0x1b90c0u: goto label_1b90c0;
        case 0x1b90c4u: goto label_1b90c4;
        case 0x1b90c8u: goto label_1b90c8;
        case 0x1b90ccu: goto label_1b90cc;
        case 0x1b90d0u: goto label_1b90d0;
        case 0x1b90d4u: goto label_1b90d4;
        case 0x1b90d8u: goto label_1b90d8;
        case 0x1b90dcu: goto label_1b90dc;
        case 0x1b90e0u: goto label_1b90e0;
        case 0x1b90e4u: goto label_1b90e4;
        case 0x1b90e8u: goto label_1b90e8;
        case 0x1b90ecu: goto label_1b90ec;
        case 0x1b90f0u: goto label_1b90f0;
        case 0x1b90f4u: goto label_1b90f4;
        case 0x1b90f8u: goto label_1b90f8;
        case 0x1b90fcu: goto label_1b90fc;
        case 0x1b9100u: goto label_1b9100;
        case 0x1b9104u: goto label_1b9104;
        case 0x1b9108u: goto label_1b9108;
        case 0x1b910cu: goto label_1b910c;
        case 0x1b9110u: goto label_1b9110;
        case 0x1b9114u: goto label_1b9114;
        case 0x1b9118u: goto label_1b9118;
        case 0x1b911cu: goto label_1b911c;
        case 0x1b9120u: goto label_1b9120;
        case 0x1b9124u: goto label_1b9124;
        case 0x1b9128u: goto label_1b9128;
        case 0x1b912cu: goto label_1b912c;
        case 0x1b9130u: goto label_1b9130;
        case 0x1b9134u: goto label_1b9134;
        case 0x1b9138u: goto label_1b9138;
        case 0x1b913cu: goto label_1b913c;
        case 0x1b9140u: goto label_1b9140;
        case 0x1b9144u: goto label_1b9144;
        case 0x1b9148u: goto label_1b9148;
        case 0x1b914cu: goto label_1b914c;
        case 0x1b9150u: goto label_1b9150;
        case 0x1b9154u: goto label_1b9154;
        case 0x1b9158u: goto label_1b9158;
        case 0x1b915cu: goto label_1b915c;
        case 0x1b9160u: goto label_1b9160;
        case 0x1b9164u: goto label_1b9164;
        case 0x1b9168u: goto label_1b9168;
        case 0x1b916cu: goto label_1b916c;
        case 0x1b9170u: goto label_1b9170;
        case 0x1b9174u: goto label_1b9174;
        case 0x1b9178u: goto label_1b9178;
        case 0x1b917cu: goto label_1b917c;
        case 0x1b9180u: goto label_1b9180;
        case 0x1b9184u: goto label_1b9184;
        case 0x1b9188u: goto label_1b9188;
        case 0x1b918cu: goto label_1b918c;
        case 0x1b9190u: goto label_1b9190;
        case 0x1b9194u: goto label_1b9194;
        case 0x1b9198u: goto label_1b9198;
        case 0x1b919cu: goto label_1b919c;
        case 0x1b91a0u: goto label_1b91a0;
        case 0x1b91a4u: goto label_1b91a4;
        case 0x1b91a8u: goto label_1b91a8;
        case 0x1b91acu: goto label_1b91ac;
        case 0x1b91b0u: goto label_1b91b0;
        case 0x1b91b4u: goto label_1b91b4;
        case 0x1b91b8u: goto label_1b91b8;
        case 0x1b91bcu: goto label_1b91bc;
        case 0x1b91c0u: goto label_1b91c0;
        case 0x1b91c4u: goto label_1b91c4;
        case 0x1b91c8u: goto label_1b91c8;
        case 0x1b91ccu: goto label_1b91cc;
        case 0x1b91d0u: goto label_1b91d0;
        case 0x1b91d4u: goto label_1b91d4;
        case 0x1b91d8u: goto label_1b91d8;
        case 0x1b91dcu: goto label_1b91dc;
        case 0x1b91e0u: goto label_1b91e0;
        case 0x1b91e4u: goto label_1b91e4;
        case 0x1b91e8u: goto label_1b91e8;
        case 0x1b91ecu: goto label_1b91ec;
        case 0x1b91f0u: goto label_1b91f0;
        case 0x1b91f4u: goto label_1b91f4;
        case 0x1b91f8u: goto label_1b91f8;
        case 0x1b91fcu: goto label_1b91fc;
        case 0x1b9200u: goto label_1b9200;
        case 0x1b9204u: goto label_1b9204;
        case 0x1b9208u: goto label_1b9208;
        case 0x1b920cu: goto label_1b920c;
        case 0x1b9210u: goto label_1b9210;
        case 0x1b9214u: goto label_1b9214;
        case 0x1b9218u: goto label_1b9218;
        case 0x1b921cu: goto label_1b921c;
        case 0x1b9220u: goto label_1b9220;
        case 0x1b9224u: goto label_1b9224;
        case 0x1b9228u: goto label_1b9228;
        case 0x1b922cu: goto label_1b922c;
        case 0x1b9230u: goto label_1b9230;
        case 0x1b9234u: goto label_1b9234;
        case 0x1b9238u: goto label_1b9238;
        case 0x1b923cu: goto label_1b923c;
        case 0x1b9240u: goto label_1b9240;
        case 0x1b9244u: goto label_1b9244;
        case 0x1b9248u: goto label_1b9248;
        case 0x1b924cu: goto label_1b924c;
        case 0x1b9250u: goto label_1b9250;
        case 0x1b9254u: goto label_1b9254;
        case 0x1b9258u: goto label_1b9258;
        case 0x1b925cu: goto label_1b925c;
        case 0x1b9260u: goto label_1b9260;
        case 0x1b9264u: goto label_1b9264;
        case 0x1b9268u: goto label_1b9268;
        case 0x1b926cu: goto label_1b926c;
        case 0x1b9270u: goto label_1b9270;
        case 0x1b9274u: goto label_1b9274;
        case 0x1b9278u: goto label_1b9278;
        case 0x1b927cu: goto label_1b927c;
        case 0x1b9280u: goto label_1b9280;
        case 0x1b9284u: goto label_1b9284;
        default: break;
    }

    ctx->pc = 0x1b9090u;

label_1b9090:
    // 0x1b9090: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1b9090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1b9094:
    // 0x1b9094: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b9094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b9098:
    // 0x1b9098: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x1b9098u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1b909c:
    // 0x1b909c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1b909cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1b90a0:
    // 0x1b90a0: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x1b90a0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_1b90a4:
    // 0x1b90a4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1b90a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1b90a8:
    // 0x1b90a8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1b90a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1b90ac:
    // 0x1b90ac: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1b90acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b90b0:
    // 0x1b90b0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1b90b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1b90b4:
    // 0x1b90b4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1b90b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1b90b8:
    // 0x1b90b8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1b90b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1b90bc:
    // 0x1b90bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b90bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b90c0:
    // 0x1b90c0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1b90c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1b90c4:
    // 0x1b90c4: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x1b90c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1b90c8:
    // 0x1b90c8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1b90c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_1b90cc:
    // 0x1b90cc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b90ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b90d0:
    // 0x1b90d0: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x1b90d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1b90d4:
    // 0x1b90d4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1b90d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b90d8:
    // 0x1b90d8: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1b90d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_1b90dc:
    // 0x1b90dc: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1b90dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_1b90e0:
    // 0x1b90e0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b90e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b90e4:
    // 0x1b90e4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1b90e4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_1b90e8:
    // 0x1b90e8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1b90e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1b90ec:
    // 0x1b90ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b90ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b90f0:
    // 0x1b90f0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1b90f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1b90f4:
    // 0x1b90f4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b90f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b90f8:
    // 0x1b90f8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1b90f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1b90fc:
    // 0x1b90fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b90fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1b9100:
    // 0x1b9100: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1b9100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1b9104:
    // 0x1b9104: 0xc06876e  jal         func_1A1DB8
label_1b9108:
    if (ctx->pc == 0x1B9108u) {
        ctx->pc = 0x1B9108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9104u;
        // 0x1b9108: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B910Cu;
        goto label_1b910c;
    }
    ctx->pc = 0x1B9104u;
    SET_GPR_U32(ctx, 31, 0x1B910Cu);
    ctx->pc = 0x1B9108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9104u;
    // 0x1b9108: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1B9104u, 0x1B910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B910Cu;
label_1b910c:
    // 0x1b910c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b910cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b9110:
    // 0x1b9110: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b9110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b9114:
    // 0x1b9114: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x1b9114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
label_1b9118:
    // 0x1b9118: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1b9118u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_1b911c:
    // 0x1b911c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b911cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9120:
    // 0x1b9120: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b9120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b9124:
    // 0x1b9124: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b9124u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1b9128:
    // 0x1b9128: 0xe6400184  swc1        $f0, 0x184($s2)
    ctx->pc = 0x1b9128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 388), bits); }
label_1b912c:
    // 0x1b912c: 0xae400188  sw          $zero, 0x188($s2)
    ctx->pc = 0x1b912cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 0));
label_1b9130:
    // 0x1b9130: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1b9130u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1b9134:
    // 0x1b9134: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1b9134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1b9138:
    // 0x1b9138: 0x60f809  jalr        $v1
label_1b913c:
    if (ctx->pc == 0x1B913Cu) {
        ctx->pc = 0x1B913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9138u;
        // 0x1b913c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9140u;
        goto label_1b9140;
    }
    ctx->pc = 0x1B9138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B9140u);
        ctx->pc = 0x1B913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9138u;
        // 0x1b913c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9138u, 0x1B9140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9140u;
label_1b9140:
    // 0x1b9140: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b9140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b9144:
    // 0x1b9144: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x1b9144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
label_1b9148:
    // 0x1b9148: 0xa242018c  sb          $v0, 0x18C($s2)
    ctx->pc = 0x1b9148u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 396), (uint8_t)GPR_U32(ctx, 2));
label_1b914c:
    // 0x1b914c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b914cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b9150:
    // 0x1b9150: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b9150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b9154:
    // 0x1b9154: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x1b9154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
label_1b9158:
    // 0x1b9158: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1b9158u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1b915c:
    // 0x1b915c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1b915cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1b9160:
    // 0x1b9160: 0x60f809  jalr        $v1
label_1b9164:
    if (ctx->pc == 0x1B9164u) {
        ctx->pc = 0x1B9164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9160u;
        // 0x1b9164: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9168u;
        goto label_1b9168;
    }
    ctx->pc = 0x1B9160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B9168u);
        ctx->pc = 0x1B9164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9160u;
        // 0x1b9164: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9160u, 0x1B9168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9168u;
label_1b9168:
    // 0x1b9168: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1b9168u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b916c:
    // 0x1b916c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b916cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9170:
    // 0x1b9170: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b9170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b9174:
    // 0x1b9174: 0x84e40008  lh          $a0, 0x8($a3)
    ctx->pc = 0x1b9174u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_1b9178:
    // 0x1b9178: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1b9178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1b917c:
    // 0x1b917c: 0x40f809  jalr        $v0
label_1b9180:
    if (ctx->pc == 0x1B9180u) {
        ctx->pc = 0x1B9180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B917Cu;
        // 0x1b9180: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9184u;
        goto label_1b9184;
    }
    ctx->pc = 0x1B917Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B9184u);
        ctx->pc = 0x1B9180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B917Cu;
        // 0x1b9180: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B917Cu, 0x1B9184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9184u;
label_1b9184:
    // 0x1b9184: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1b9184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b9188:
    // 0x1b9188: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b9188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b918c:
    // 0x1b918c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1b918cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1b9190:
    // 0x1b9190: 0x8c660044  lw          $a2, 0x44($v1)
    ctx->pc = 0x1b9190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1b9194:
    // 0x1b9194: 0xc0f809  jalr        $a2
label_1b9198:
    if (ctx->pc == 0x1B9198u) {
        ctx->pc = 0x1B9198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9194u;
        // 0x1b9198: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B919Cu;
        goto label_1b919c;
    }
    ctx->pc = 0x1B9194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B919Cu);
        ctx->pc = 0x1B9198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9194u;
        // 0x1b9198: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9194u, 0x1B919Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B919Cu;
label_1b919c:
    // 0x1b919c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b919cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b91a0:
    // 0x1b91a0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b91a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1b91a4:
    // 0x1b91a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b91a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b91a8:
    // 0x1b91a8: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1b91a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_1b91ac:
    // 0x1b91ac: 0xe65401d0  swc1        $f20, 0x1D0($s2)
    ctx->pc = 0x1b91acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 464), bits); }
label_1b91b0:
    // 0x1b91b0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1b91b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b91b4:
    // 0x1b91b4: 0xae420190  sw          $v0, 0x190($s2)
    ctx->pc = 0x1b91b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 2));
label_1b91b8:
    // 0x1b91b8: 0x16630003  bne         $s3, $v1, . + 4 + (0x3 << 2)
label_1b91bc:
    if (ctx->pc == 0x1B91BCu) {
        ctx->pc = 0x1B91BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B91B8u;
        // 0x1b91bc: 0xae4001a0  sw          $zero, 0x1A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B91C0u;
        goto label_1b91c0;
    }
    ctx->pc = 0x1B91B8u;
    {
        const bool branch_taken_0x1b91b8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B91BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B91B8u;
        // 0x1b91bc: 0xae4001a0  sw          $zero, 0x1A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b91b8) {
            ctx->pc = 0x1B91C8u;
            goto label_1b91c8;
        }
    }
    ctx->pc = 0x1B91C0u;
label_1b91c0:
    // 0x1b91c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b91c4:
    if (ctx->pc == 0x1B91C4u) {
        ctx->pc = 0x1B91C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B91C0u;
        // 0x1b91c4: 0xae53019c  sw          $s3, 0x19C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 412), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B91C8u;
        goto label_1b91c8;
    }
    ctx->pc = 0x1B91C0u;
    {
        const bool branch_taken_0x1b91c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B91C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B91C0u;
        // 0x1b91c4: 0xae53019c  sw          $s3, 0x19C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 412), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b91c0) {
            ctx->pc = 0x1B91D0u;
            goto label_1b91d0;
        }
    }
    ctx->pc = 0x1B91C8u;
label_1b91c8:
    // 0x1b91c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b91c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b91cc:
    // 0x1b91cc: 0xae42019c  sw          $v0, 0x19C($s2)
    ctx->pc = 0x1b91ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 412), GPR_U32(ctx, 2));
label_1b91d0:
    // 0x1b91d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1b91d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b91d4:
    // 0x1b91d4: 0xc05e602  jal         func_179808
label_1b91d8:
    if (ctx->pc == 0x1B91D8u) {
        ctx->pc = 0x1B91D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B91D4u;
        // 0x1b91d8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B91DCu;
        goto label_1b91dc;
    }
    ctx->pc = 0x1B91D4u;
    SET_GPR_U32(ctx, 31, 0x1B91DCu);
    ctx->pc = 0x1B91D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B91D4u;
    // 0x1b91d8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1B91D4u, 0x1B91DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B91DCu;
label_1b91dc:
    // 0x1b91dc: 0x26500070  addiu       $s0, $s2, 0x70
    ctx->pc = 0x1b91dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_1b91e0:
    // 0x1b91e0: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1b91e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b91e4:
    // 0x1b91e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b91e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b91e8:
    // 0x1b91e8: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1b91e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b91ec:
    // 0x1b91ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b91ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b91f0:
    // 0x1b91f0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1b91f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b91f4:
    // 0x1b91f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b91f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b91f8:
    // 0x1b91f8: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1b91f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b91fc:
    // 0x1b91fc: 0xe64301c0  swc1        $f3, 0x1C0($s2)
    ctx->pc = 0x1b91fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 448), bits); }
label_1b9200:
    // 0x1b9200: 0xe64201c4  swc1        $f2, 0x1C4($s2)
    ctx->pc = 0x1b9200u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 452), bits); }
label_1b9204:
    // 0x1b9204: 0xe64101c8  swc1        $f1, 0x1C8($s2)
    ctx->pc = 0x1b9204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 456), bits); }
label_1b9208:
    // 0x1b9208: 0xc068818  jal         func_1A2060
label_1b920c:
    if (ctx->pc == 0x1B920Cu) {
        ctx->pc = 0x1B920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9208u;
        // 0x1b920c: 0xe64001cc  swc1        $f0, 0x1CC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 460), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9210u;
        goto label_1b9210;
    }
    ctx->pc = 0x1B9208u;
    SET_GPR_U32(ctx, 31, 0x1B9210u);
    ctx->pc = 0x1B920Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9208u;
    // 0x1b920c: 0xe64001cc  swc1        $f0, 0x1CC($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 460), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1B9208u, 0x1B9210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9210u;
label_1b9210:
    // 0x1b9210: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1b9210u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1b9214:
    // 0x1b9214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b9218:
    // 0x1b9218: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b9218u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b921c:
    // 0x1b921c: 0xc068848  jal         func_1A2120
label_1b9220:
    if (ctx->pc == 0x1B9220u) {
        ctx->pc = 0x1B9220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B921Cu;
        // 0x1b9220: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9224u;
        goto label_1b9224;
    }
    ctx->pc = 0x1B921Cu;
    SET_GPR_U32(ctx, 31, 0x1B9224u);
    ctx->pc = 0x1B9220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B921Cu;
    // 0x1b9220: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1B921Cu, 0x1B9224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9224u;
label_1b9224:
    // 0x1b9224: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b9224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1b9228:
    // 0x1b9228: 0xae5501d8  sw          $s5, 0x1D8($s2)
    ctx->pc = 0x1b9228u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 472), GPR_U32(ctx, 21));
label_1b922c:
    // 0x1b922c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b922cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b9230:
    // 0x1b9230: 0xae4001dc  sw          $zero, 0x1DC($s2)
    ctx->pc = 0x1b9230u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 476), GPR_U32(ctx, 0));
label_1b9234:
    // 0x1b9234: 0xae420198  sw          $v0, 0x198($s2)
    ctx->pc = 0x1b9234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
label_1b9238:
    // 0x1b9238: 0xae4001b4  sw          $zero, 0x1B4($s2)
    ctx->pc = 0x1b9238u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 436), GPR_U32(ctx, 0));
label_1b923c:
    // 0x1b923c: 0xa24001b1  sb          $zero, 0x1B1($s2)
    ctx->pc = 0x1b923cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 433), (uint8_t)GPR_U32(ctx, 0));
label_1b9240:
    // 0x1b9240: 0xae4001b8  sw          $zero, 0x1B8($s2)
    ctx->pc = 0x1b9240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 0));
label_1b9244:
    // 0x1b9244: 0xae40006c  sw          $zero, 0x6C($s2)
    ctx->pc = 0x1b9244u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 0));
label_1b9248:
    // 0x1b9248: 0xae400194  sw          $zero, 0x194($s2)
    ctx->pc = 0x1b9248u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 0));
label_1b924c:
    // 0x1b924c: 0xae4001bc  sw          $zero, 0x1BC($s2)
    ctx->pc = 0x1b924cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 0));
label_1b9250:
    // 0x1b9250: 0xae4001d4  sw          $zero, 0x1D4($s2)
    ctx->pc = 0x1b9250u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 0));
label_1b9254:
    // 0x1b9254: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1b9254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b9258:
    // 0x1b9258: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1b9258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b925c:
    // 0x1b925c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1b925cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b9260:
    // 0x1b9260: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1b9260u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b9264:
    // 0x1b9264: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1b9264u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b9268:
    // 0x1b9268: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1b9268u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b926c:
    // 0x1b926c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b926cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b9270:
    // 0x1b9270: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x1b9270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1b9274:
    // 0x1b9274: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x1b9274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b9278:
    // 0x1b9278: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1b9278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b927c:
    // 0x1b927c: 0x3e00008  jr          $ra
label_1b9280:
    if (ctx->pc == 0x1B9280u) {
        ctx->pc = 0x1B9280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B927Cu;
        // 0x1b9280: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9284u;
        goto label_1b9284;
    }
    ctx->pc = 0x1B927Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B927Cu;
        // 0x1b9280: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B927Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9284u;
label_1b9284:
    // 0x1b9284: 0x0  nop
    ctx->pc = 0x1b9284u;
    // NOP
    ctx->pc = 0x1b9288u;
}
