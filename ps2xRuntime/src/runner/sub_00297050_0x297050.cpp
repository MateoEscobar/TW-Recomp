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

// Function: sub_00297050
// Address: 0x297050 - 0x2971c8
void sub_00297050_0x297050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297050_0x297050");
#endif

    switch (ctx->pc) {
        case 0x297050u: goto label_297050;
        case 0x297054u: goto label_297054;
        case 0x297058u: goto label_297058;
        case 0x29705cu: goto label_29705c;
        case 0x297060u: goto label_297060;
        case 0x297064u: goto label_297064;
        case 0x297068u: goto label_297068;
        case 0x29706cu: goto label_29706c;
        case 0x297070u: goto label_297070;
        case 0x297074u: goto label_297074;
        case 0x297078u: goto label_297078;
        case 0x29707cu: goto label_29707c;
        case 0x297080u: goto label_297080;
        case 0x297084u: goto label_297084;
        case 0x297088u: goto label_297088;
        case 0x29708cu: goto label_29708c;
        case 0x297090u: goto label_297090;
        case 0x297094u: goto label_297094;
        case 0x297098u: goto label_297098;
        case 0x29709cu: goto label_29709c;
        case 0x2970a0u: goto label_2970a0;
        case 0x2970a4u: goto label_2970a4;
        case 0x2970a8u: goto label_2970a8;
        case 0x2970acu: goto label_2970ac;
        case 0x2970b0u: goto label_2970b0;
        case 0x2970b4u: goto label_2970b4;
        case 0x2970b8u: goto label_2970b8;
        case 0x2970bcu: goto label_2970bc;
        case 0x2970c0u: goto label_2970c0;
        case 0x2970c4u: goto label_2970c4;
        case 0x2970c8u: goto label_2970c8;
        case 0x2970ccu: goto label_2970cc;
        case 0x2970d0u: goto label_2970d0;
        case 0x2970d4u: goto label_2970d4;
        case 0x2970d8u: goto label_2970d8;
        case 0x2970dcu: goto label_2970dc;
        case 0x2970e0u: goto label_2970e0;
        case 0x2970e4u: goto label_2970e4;
        case 0x2970e8u: goto label_2970e8;
        case 0x2970ecu: goto label_2970ec;
        case 0x2970f0u: goto label_2970f0;
        case 0x2970f4u: goto label_2970f4;
        case 0x2970f8u: goto label_2970f8;
        case 0x2970fcu: goto label_2970fc;
        case 0x297100u: goto label_297100;
        case 0x297104u: goto label_297104;
        case 0x297108u: goto label_297108;
        case 0x29710cu: goto label_29710c;
        case 0x297110u: goto label_297110;
        case 0x297114u: goto label_297114;
        case 0x297118u: goto label_297118;
        case 0x29711cu: goto label_29711c;
        case 0x297120u: goto label_297120;
        case 0x297124u: goto label_297124;
        case 0x297128u: goto label_297128;
        case 0x29712cu: goto label_29712c;
        case 0x297130u: goto label_297130;
        case 0x297134u: goto label_297134;
        case 0x297138u: goto label_297138;
        case 0x29713cu: goto label_29713c;
        case 0x297140u: goto label_297140;
        case 0x297144u: goto label_297144;
        case 0x297148u: goto label_297148;
        case 0x29714cu: goto label_29714c;
        case 0x297150u: goto label_297150;
        case 0x297154u: goto label_297154;
        case 0x297158u: goto label_297158;
        case 0x29715cu: goto label_29715c;
        case 0x297160u: goto label_297160;
        case 0x297164u: goto label_297164;
        case 0x297168u: goto label_297168;
        case 0x29716cu: goto label_29716c;
        case 0x297170u: goto label_297170;
        case 0x297174u: goto label_297174;
        case 0x297178u: goto label_297178;
        case 0x29717cu: goto label_29717c;
        case 0x297180u: goto label_297180;
        case 0x297184u: goto label_297184;
        case 0x297188u: goto label_297188;
        case 0x29718cu: goto label_29718c;
        case 0x297190u: goto label_297190;
        case 0x297194u: goto label_297194;
        case 0x297198u: goto label_297198;
        case 0x29719cu: goto label_29719c;
        case 0x2971a0u: goto label_2971a0;
        case 0x2971a4u: goto label_2971a4;
        case 0x2971a8u: goto label_2971a8;
        case 0x2971acu: goto label_2971ac;
        case 0x2971b0u: goto label_2971b0;
        case 0x2971b4u: goto label_2971b4;
        case 0x2971b8u: goto label_2971b8;
        case 0x2971bcu: goto label_2971bc;
        case 0x2971c0u: goto label_2971c0;
        case 0x2971c4u: goto label_2971c4;
        default: break;
    }

    ctx->pc = 0x297050u;

label_297050:
    // 0x297050: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x297050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_297054:
    // 0x297054: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x297054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_297058:
    // 0x297058: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x297058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_29705c:
    // 0x29705c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29705cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_297060:
    // 0x297060: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x297060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_297064:
    // 0x297064: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x297064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_297068:
    // 0x297068: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x297068u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_29706c:
    // 0x29706c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x29706cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_297070:
    // 0x297070: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x297070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_297074:
    // 0x297074: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x297074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_297078:
    // 0x297078: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x297078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_29707c:
    // 0x29707c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x29707cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_297080:
    // 0x297080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_297084:
    // 0x297084: 0xc0a5a72  jal         func_2969C8
label_297088:
    if (ctx->pc == 0x297088u) {
        ctx->pc = 0x297088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297084u;
        // 0x297088: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29708Cu;
        goto label_29708c;
    }
    ctx->pc = 0x297084u;
    SET_GPR_U32(ctx, 31, 0x29708Cu);
    ctx->pc = 0x297088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297084u;
    // 0x297088: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x297084u, 0x29708Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29708Cu;
label_29708c:
    // 0x29708c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29708cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_297090:
    // 0x297090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_297094:
    // 0x297094: 0xc087502  jal         func_21D408
label_297098:
    if (ctx->pc == 0x297098u) {
        ctx->pc = 0x297098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297094u;
        // 0x297098: 0x8e540000  lw          $s4, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29709Cu;
        goto label_29709c;
    }
    ctx->pc = 0x297094u;
    SET_GPR_U32(ctx, 31, 0x29709Cu);
    ctx->pc = 0x297098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297094u;
    // 0x297098: 0x8e540000  lw          $s4, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x297094u, 0x29709Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29709Cu;
label_29709c:
    // 0x29709c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29709cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2970a0:
    // 0x2970a0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2970a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2970a4:
    // 0x2970a4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2970a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2970a8:
    // 0x2970a8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2970a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2970ac:
    // 0x2970ac: 0x40f809  jalr        $v0
label_2970b0:
    if (ctx->pc == 0x2970B0u) {
        ctx->pc = 0x2970B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2970ACu;
        // 0x2970b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2970B4u;
        goto label_2970b4;
    }
    ctx->pc = 0x2970ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2970B4u);
        ctx->pc = 0x2970B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2970ACu;
        // 0x2970b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2970ACu, 0x2970B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2970B4u;
label_2970b4:
    // 0x2970b4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2970b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_2970b8:
    // 0x2970b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2970b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2970bc:
    // 0x2970bc: 0x924202d4  lbu         $v0, 0x2D4($s2)
    ctx->pc = 0x2970bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 724)));
label_2970c0:
    // 0x2970c0: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2970c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_2970c4:
    // 0x2970c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2970c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2970c8:
    // 0x2970c8: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x2970c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_2970cc:
    // 0x2970cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2970d0:
    if (ctx->pc == 0x2970D0u) {
        ctx->pc = 0x2970D4u;
        goto label_2970d4;
    }
    ctx->pc = 0x2970CCu;
    {
        const bool branch_taken_0x2970cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2970cc) {
            ctx->pc = 0x2970E8u;
            goto label_2970e8;
        }
    }
    ctx->pc = 0x2970D4u;
label_2970d4:
    // 0x2970d4: 0xc087502  jal         func_21D408
label_2970d8:
    if (ctx->pc == 0x2970D8u) {
        ctx->pc = 0x2970D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2970D4u;
        // 0x2970d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2970DCu;
        goto label_2970dc;
    }
    ctx->pc = 0x2970D4u;
    SET_GPR_U32(ctx, 31, 0x2970DCu);
    ctx->pc = 0x2970D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2970D4u;
    // 0x2970d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2970D4u, 0x2970DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2970DCu;
label_2970dc:
    // 0x2970dc: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x2970dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_2970e0:
    // 0x2970e0: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
label_2970e4:
    if (ctx->pc == 0x2970E4u) {
        ctx->pc = 0x2970E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2970E0u;
        // 0x2970e4: 0x24028000  addiu       $v0, $zero, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2970E8u;
        goto label_2970e8;
    }
    ctx->pc = 0x2970E0u;
    {
        const bool branch_taken_0x2970e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2970E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2970E0u;
        // 0x2970e4: 0x24028000  addiu       $v0, $zero, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2970e0) {
            ctx->pc = 0x29719Cu;
            goto label_29719c;
        }
    }
    ctx->pc = 0x2970E8u;
label_2970e8:
    // 0x2970e8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2970e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2970ec:
    // 0x2970ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2970ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2970f0:
    // 0x2970f0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2970f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2970f4:
    // 0x2970f4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2970f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2970f8:
    // 0x2970f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2970f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2970fc:
    // 0x2970fc: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2970fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_297100:
    // 0x297100: 0x0  nop
    ctx->pc = 0x297100u;
    // NOP
label_297104:
    // 0x297104: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_297108:
    if (ctx->pc == 0x297108u) {
        ctx->pc = 0x297108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297104u;
        // 0x297108: 0xc64c012c  lwc1        $f12, 0x12C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29710Cu;
        goto label_29710c;
    }
    ctx->pc = 0x297104u;
    {
        const bool branch_taken_0x297104 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x297104) {
            ctx->pc = 0x297108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297104u;
            // 0x297108: 0xc64c012c  lwc1        $f12, 0x12C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x29710Cu;
            goto label_29710c;
        }
    }
    ctx->pc = 0x29710Cu;
label_29710c:
    // 0x29710c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29710cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_297110:
    // 0x297110: 0xc0889b8  jal         func_2226E0
label_297114:
    if (ctx->pc == 0x297114u) {
        ctx->pc = 0x297114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297110u;
        // 0x297114: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297118u;
        goto label_297118;
    }
    ctx->pc = 0x297110u;
    SET_GPR_U32(ctx, 31, 0x297118u);
    ctx->pc = 0x297114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297110u;
    // 0x297114: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2226E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2226E0u, 0x297110u, 0x297118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297118u;
label_297118:
    // 0x297118: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_29711c:
    if (ctx->pc == 0x29711Cu) {
        ctx->pc = 0x29711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297118u;
        // 0x29711c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297120u;
        goto label_297120;
    }
    ctx->pc = 0x297118u;
    {
        const bool branch_taken_0x297118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297118u;
        // 0x29711c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297118) {
            ctx->pc = 0x297128u;
            goto label_297128;
        }
    }
    ctx->pc = 0x297120u;
label_297120:
    // 0x297120: 0x1000001e  b           . + 4 + (0x1E << 2)
label_297124:
    if (ctx->pc == 0x297124u) {
        ctx->pc = 0x297124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297120u;
        // 0x297124: 0x24028000  addiu       $v0, $zero, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297128u;
        goto label_297128;
    }
    ctx->pc = 0x297120u;
    {
        const bool branch_taken_0x297120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297120u;
        // 0x297124: 0x24028000  addiu       $v0, $zero, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297120) {
            ctx->pc = 0x29719Cu;
            goto label_29719c;
        }
    }
    ctx->pc = 0x297128u;
label_297128:
    // 0x297128: 0xc0a5ba4  jal         func_296E90
label_29712c:
    if (ctx->pc == 0x29712Cu) {
        ctx->pc = 0x29712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297128u;
        // 0x29712c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297130u;
        goto label_297130;
    }
    ctx->pc = 0x297128u;
    SET_GPR_U32(ctx, 31, 0x297130u);
    ctx->pc = 0x29712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297128u;
    // 0x29712c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E90u, 0x297128u, 0x297130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297130u;
label_297130:
    // 0x297130: 0xc62c01ac  lwc1        $f12, 0x1AC($s1)
    ctx->pc = 0x297130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_297134:
    // 0x297134: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x297134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_297138:
    // 0x297138: 0xc10b1c6  jal         func_42C718
label_29713c:
    if (ctx->pc == 0x29713Cu) {
        ctx->pc = 0x29713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297138u;
        // 0x29713c: 0x460c6300  add.s       $f12, $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x297140u;
        goto label_297140;
    }
    ctx->pc = 0x297138u;
    SET_GPR_U32(ctx, 31, 0x297140u);
    ctx->pc = 0x29713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297138u;
    // 0x29713c: 0x460c6300  add.s       $f12, $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x297138u, 0x297140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297140u;
label_297140:
    // 0x297140: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x297140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_297144:
    // 0x297144: 0xc0874fa  jal         func_21D3E8
label_297148:
    if (ctx->pc == 0x297148u) {
        ctx->pc = 0x297148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297144u;
        // 0x297148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29714Cu;
        goto label_29714c;
    }
    ctx->pc = 0x297144u;
    SET_GPR_U32(ctx, 31, 0x29714Cu);
    ctx->pc = 0x297148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297144u;
    // 0x297148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x297144u, 0x29714Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29714Cu;
label_29714c:
    // 0x29714c: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x29714cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_297150:
    // 0x297150: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_297154:
    if (ctx->pc == 0x297154u) {
        ctx->pc = 0x297154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297150u;
        // 0x297154: 0x3902b  sltu        $s2, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x297158u;
        goto label_297158;
    }
    ctx->pc = 0x297150u;
    {
        const bool branch_taken_0x297150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x297154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297150u;
        // 0x297154: 0x3902b  sltu        $s2, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297150) {
            ctx->pc = 0x297180u;
            goto label_297180;
        }
    }
    ctx->pc = 0x297158u;
label_297158:
    // 0x297158: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x297158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_29715c:
    // 0x29715c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29715cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_297160:
    // 0x297160: 0xc088e88  jal         func_223A20
label_297164:
    if (ctx->pc == 0x297164u) {
        ctx->pc = 0x297164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297160u;
        // 0x297164: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297168u;
        goto label_297168;
    }
    ctx->pc = 0x297160u;
    SET_GPR_U32(ctx, 31, 0x297168u);
    ctx->pc = 0x297164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297160u;
    // 0x297164: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x297160u, 0x297168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297168u;
label_297168:
    // 0x297168: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_29716c:
    if (ctx->pc == 0x29716Cu) {
        ctx->pc = 0x29716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297168u;
        // 0x29716c: 0x8ec30004  lw          $v1, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297170u;
        goto label_297170;
    }
    ctx->pc = 0x297168u;
    {
        const bool branch_taken_0x297168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297168) {
            ctx->pc = 0x29716Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297168u;
            // 0x29716c: 0x8ec30004  lw          $v1, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297184u;
            goto label_297184;
        }
    }
    ctx->pc = 0x297170u;
label_297170:
    // 0x297170: 0x92620014  lbu         $v0, 0x14($s3)
    ctx->pc = 0x297170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
label_297174:
    // 0x297174: 0x26030064  addiu       $v1, $s0, 0x64
    ctx->pc = 0x297174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_297178:
    // 0x297178: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x297178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29717c:
    // 0x29717c: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x29717cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_297180:
    // 0x297180: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x297180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_297184:
    // 0x297184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_297188:
    // 0x297188: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_29718c:
    if (ctx->pc == 0x29718Cu) {
        ctx->pc = 0x29718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297188u;
        // 0x29718c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297190u;
        goto label_297190;
    }
    ctx->pc = 0x297188u;
    {
        const bool branch_taken_0x297188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297188u;
        // 0x29718c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297188) {
            ctx->pc = 0x29719Cu;
            goto label_29719c;
        }
    }
    ctx->pc = 0x297190u;
label_297190:
    // 0x297190: 0x92a20001  lbu         $v0, 0x1($s5)
    ctx->pc = 0x297190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_297194:
    // 0x297194: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x297194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_297198:
    // 0x297198: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x297198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29719c:
    // 0x29719c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x29719cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2971a0:
    // 0x2971a0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2971a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2971a4:
    // 0x2971a4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2971a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2971a8:
    // 0x2971a8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2971a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2971ac:
    // 0x2971ac: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2971acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2971b0:
    // 0x2971b0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2971b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2971b4:
    // 0x2971b4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2971b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2971b8:
    // 0x2971b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2971b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2971bc:
    // 0x2971bc: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2971bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2971c0:
    // 0x2971c0: 0x3e00008  jr          $ra
label_2971c4:
    if (ctx->pc == 0x2971C4u) {
        ctx->pc = 0x2971C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2971C0u;
        // 0x2971c4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2971C8u;
        goto label_fallthrough_0x2971c0;
    }
    ctx->pc = 0x2971C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2971C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2971C0u;
        // 0x2971c4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2971C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2971c0:
    ctx->pc = 0x2971C8u;
}
