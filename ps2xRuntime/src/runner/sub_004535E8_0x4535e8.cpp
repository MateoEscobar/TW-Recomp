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

// Function: sub_004535E8
// Address: 0x4535e8 - 0x4537e8
void sub_004535E8_0x4535e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004535E8_0x4535e8");
#endif

    switch (ctx->pc) {
        case 0x453668u: goto label_453668;
        case 0x4536c0u: goto label_4536c0;
        case 0x45373cu: goto label_45373c;
        default: break;
    }

    ctx->pc = 0x4535e8u;

    // 0x4535e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4535e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4535ec: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4535ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4535f0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4535f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x4535f4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4535f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x4535f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4535f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4535fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4535fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453600: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x453600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x453604: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x453604u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453608: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x453608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x45360c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x45360cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453610: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x453610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x453614: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x453614u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x453618: 0x8c43ad18  lw          $v1, -0x52E8($v0)
    ctx->pc = 0x453618u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x70AD18u));
    // 0x45361c: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x45361cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x453620: 0x24700020  addiu       $s0, $v1, 0x20
    ctx->pc = 0x453620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x453624: 0x8f828910  lw          $v0, -0x76F0($gp)
    ctx->pc = 0x453624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
    // 0x453628: 0x8cc30054  lw          $v1, 0x54($a2)
    ctx->pc = 0x453628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x45362c: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x45362cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x453630: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x453630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x453634: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x453634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x453638: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x453638u;
    {
        const bool branch_taken_0x453638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x45363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453638u;
        // 0x45363c: 0x8cc20054  lw          $v0, 0x54($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453638) {
            ctx->pc = 0x453658u;
            goto label_453658;
        }
    }
    ctx->pc = 0x453640u;
    // 0x453640: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x453640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x453644: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x453644u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x453648: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x453648u;
    {
        const bool branch_taken_0x453648 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x45364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453648u;
        // 0x45364c: 0x8f848910  lw          $a0, -0x76F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453648) {
            ctx->pc = 0x45365Cu;
            goto label_45365c;
        }
    }
    ctx->pc = 0x453650u;
    // 0x453650: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x453650u;
    {
        const bool branch_taken_0x453650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x453654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453650u;
        // 0x453654: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453650) {
            ctx->pc = 0x45366Cu;
            goto label_45366c;
        }
    }
    ctx->pc = 0x453658u;
label_453658:
    // 0x453658: 0x8f848910  lw          $a0, -0x76F0($gp)
    ctx->pc = 0x453658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
label_45365c:
    // 0x45365c: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x45365cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x453660: 0xc11d5b0  jal         func_4756C0
    ctx->pc = 0x453660u;
    SET_GPR_U32(ctx, 31, 0x453668u);
    ctx->pc = 0x453664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453660u;
    // 0x453664: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4756C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4756C0u, 0x453660u, 0x453668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453668u;
label_453668:
    // 0x453668: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x453668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45366c:
    // 0x45366c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x45366cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x453670: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x453670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x453674: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x453674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x453678: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x453678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x45367c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x45367cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x453680: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x453680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x453684: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x453684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x453688: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x453688u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x45368c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x45368cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x453690: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x453690u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x453694: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x453694u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x453698: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x453698u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x45369c: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x45369cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4536a0: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x4536a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x4536a4: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x4536a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x4536a8: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x4536a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x4536ac: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x4536acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4536b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4536b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4536b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4536b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4536b8: 0xc11a45e  jal         func_469178
    ctx->pc = 0x4536B8u;
    SET_GPR_U32(ctx, 31, 0x4536C0u);
    ctx->pc = 0x4536BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4536B8u;
    // 0x4536bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469178u, 0x4536B8u, 0x4536C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4536C0u;
label_4536c0:
    // 0x4536c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4536c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4536c4: 0x8f838a24  lw          $v1, -0x75DC($gp)
    ctx->pc = 0x4536c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937124)));
    // 0x4536c8: 0x8e82ad18  lw          $v0, -0x52E8($s4)
    ctx->pc = 0x4536c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946072)));
    // 0x4536cc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4536ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4536d0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x4536d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4536d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4536d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4536d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4536d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4536dc: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x4536dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4536e0: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x4536e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x4536e4: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x4536e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4536e8: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x4536e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4536ec: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4536ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4536f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4536f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4536f4: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x4536f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4536f8: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x4536f8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x4536fc: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x4536fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x453700: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x453700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x453704: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x453704u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x453708: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x453708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45370c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x45370cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x453710: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x453710u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x453714: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x453714u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x453718: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x453718u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x45371c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x45371cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x453720: 0x0  nop
    ctx->pc = 0x453720u;
    // NOP
    // 0x453724: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x453724u;
    {
        const bool branch_taken_0x453724 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x453728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453724u;
        // 0x453728: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453724) {
            ctx->pc = 0x453738u;
            goto label_453738;
        }
    }
    ctx->pc = 0x45372Cu;
    // 0x45372c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x45372Cu;
    {
        const bool branch_taken_0x45372c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x453730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45372Cu;
        // 0x453730: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45372c) {
            ctx->pc = 0x453794u;
            goto label_453794;
        }
    }
    ctx->pc = 0x453734u;
    // 0x453734: 0x0  nop
    ctx->pc = 0x453734u;
    // NOP
label_453738:
    // 0x453738: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x453738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_45373c:
    // 0x45373c: 0x10c50015  beq         $a2, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x45373Cu;
    {
        const bool branch_taken_0x45373c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x453740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45373Cu;
        // 0x453740: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45373c) {
            ctx->pc = 0x453794u;
            goto label_453794;
        }
    }
    ctx->pc = 0x453744u;
    // 0x453744: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x453744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x453748: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x453748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x45374c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x45374cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x453750: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x453750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x453754: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x453754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x453758: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x453758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x45375c: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x45375cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x453760: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x453760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x453764: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x453764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x453768: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x453768u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x45376c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x45376cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x453770: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x453770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x453774: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x453774u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x453778: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x453778u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x45377c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x45377cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x453780: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x453780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x453784: 0x0  nop
    ctx->pc = 0x453784u;
    // NOP
    // 0x453788: 0x4502ffec  bc1fl       . + 4 + (-0x14 << 2)
    ctx->pc = 0x453788u;
    {
        const bool branch_taken_0x453788 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x453788) {
            ctx->pc = 0x45378Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x453788u;
            // 0x45378c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x45373Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45373c;
        }
    }
    ctx->pc = 0x453790u;
    // 0x453790: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x453790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
label_453794:
    // 0x453794: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x453794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x453798: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x453798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45379c: 0xa2220029  sb          $v0, 0x29($s1)
    ctx->pc = 0x45379cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x4537a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4537a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4537a4: 0x93828780  lbu         $v0, -0x7880($gp)
    ctx->pc = 0x4537a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x4537a8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4537A8u;
    {
        const bool branch_taken_0x4537a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4537ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4537A8u;
        // 0x4537ac: 0xa2220028  sb          $v0, 0x28($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4537a8) {
            ctx->pc = 0x4537B8u;
            goto label_4537b8;
        }
    }
    ctx->pc = 0x4537B0u;
    // 0x4537b0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4537b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4537b4: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x4537b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
label_4537b8:
    // 0x4537b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4537b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4537bc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4537bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4537c0: 0xa223002a  sb          $v1, 0x2A($s1)
    ctx->pc = 0x4537c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x4537c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4537c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4537c8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4537c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4537cc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4537ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4537d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4537d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4537d4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4537d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4537d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4537d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4537dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4537DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4537E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4537DCu;
        // 0x4537e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4537DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4537E4u;
    // 0x4537e4: 0x0  nop
    ctx->pc = 0x4537e4u;
    // NOP
    ctx->pc = 0x4537e8u;
}
