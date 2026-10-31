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

// Function: sub_00101558
// Address: 0x101558 - 0x101658
void sub_00101558_0x101558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101558_0x101558");
#endif

    switch (ctx->pc) {
        case 0x101578u: goto label_101578;
        case 0x10158cu: goto label_10158c;
        case 0x10160cu: goto label_10160c;
        case 0x101620u: goto label_101620;
        default: break;
    }

    ctx->pc = 0x101558u;

    // 0x101558: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10155c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10155cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x101560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x101560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101564: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x101564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x101568: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x101568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10156c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10156cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101570: 0xc0886fc  jal         func_221BF0
    ctx->pc = 0x101570u;
    SET_GPR_U32(ctx, 31, 0x101578u);
    ctx->pc = 0x101574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101570u;
    // 0x101574: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221BF0u, 0x101570u, 0x101578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101578u;
label_101578:
    // 0x101578: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x101578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10157c: 0x16000021  bnez        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x10157Cu;
    {
        const bool branch_taken_0x10157c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x101580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10157Cu;
        // 0x101580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10157c) {
            ctx->pc = 0x101604u;
            goto label_101604;
        }
    }
    ctx->pc = 0x101584u;
    // 0x101584: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x101584u;
    {
        const bool branch_taken_0x101584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101584u;
        // 0x101588: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101584) {
            ctx->pc = 0x101644u;
            goto label_101644;
        }
    }
    ctx->pc = 0x10158Cu;
label_10158c:
    // 0x10158c: 0x84830008  lh          $v1, 0x8($a0)
    ctx->pc = 0x10158cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x101590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101594: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x101594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x101598: 0x34212008  ori         $at, $at, 0x2008
    ctx->pc = 0x101598u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8200);
    // 0x10159c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10159cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1015a0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1015a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1015a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1015a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1015a8: 0x0  nop
    ctx->pc = 0x1015a8u;
    // NOP
    // 0x1015ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1015acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1015b0: 0x3c013a00  lui         $at, 0x3A00
    ctx->pc = 0x1015b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14848 << 16));
    // 0x1015b4: 0x34211002  ori         $at, $at, 0x1002
    ctx->pc = 0x1015b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4098);
    // 0x1015b8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1015b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1015bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1015bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1015c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1015c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1015c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1015c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1015c8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1015c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1015cc: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x1015ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1015d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1015d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1015d4: 0x0  nop
    ctx->pc = 0x1015d4u;
    // NOP
    // 0x1015d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1015d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1015dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1015dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1015e0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1015e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1015e4: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x1015e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1015e8: 0xe622000c  swc1        $f2, 0xC($s1)
    ctx->pc = 0x1015e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1015ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1015ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1015f0: 0x0  nop
    ctx->pc = 0x1015f0u;
    // NOP
    // 0x1015f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1015f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1015f8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1015f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1015fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1015FCu;
    {
        const bool branch_taken_0x1015fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015FCu;
        // 0x101600: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1015fc) {
            ctx->pc = 0x101640u;
            goto label_101640;
        }
    }
    ctx->pc = 0x101604u;
label_101604:
    // 0x101604: 0xc040494  jal         func_101250
    ctx->pc = 0x101604u;
    SET_GPR_U32(ctx, 31, 0x10160Cu);
    ctx->pc = 0x101608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101604u;
    // 0x101608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101250u, 0x101604u, 0x10160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10160Cu;
label_10160c:
    // 0x10160c: 0x9605001a  lhu         $a1, 0x1A($s0)
    ctx->pc = 0x10160cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x101610: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101614: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x101614u;
    {
        const bool branch_taken_0x101614 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x101618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101614u;
        // 0x101618: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101614) {
            ctx->pc = 0x10163Cu;
            goto label_10163c;
        }
    }
    ctx->pc = 0x10161Cu;
    // 0x10161c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x10161cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_101620:
    // 0x101620: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x101620u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x101624: 0x1046ffd9  beq         $v0, $a2, . + 4 + (-0x27 << 2)
    ctx->pc = 0x101624u;
    {
        const bool branch_taken_0x101624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x101628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101624u;
        // 0x101628: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101624) {
            ctx->pc = 0x10158Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10158c;
        }
    }
    ctx->pc = 0x10162Cu;
    // 0x10162c: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x10162cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x101630: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x101630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x101634: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x101634u;
    {
        const bool branch_taken_0x101634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101634u;
        // 0x101638: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101634) {
            ctx->pc = 0x101620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101620;
        }
    }
    ctx->pc = 0x10163Cu;
label_10163c:
    // 0x10163c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10163cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101640:
    // 0x101640: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x101640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_101644:
    // 0x101644: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10164c: 0x3e00008  jr          $ra
    ctx->pc = 0x10164Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10164Cu;
        // 0x101650: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10164Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101654u;
    // 0x101654: 0x0  nop
    ctx->pc = 0x101654u;
    // NOP
    ctx->pc = 0x101658u;
}
