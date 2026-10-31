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

// Function: sub_00223068
// Address: 0x223068 - 0x223188
void sub_00223068_0x223068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223068_0x223068");
#endif

    switch (ctx->pc) {
        case 0x223084u: goto label_223084;
        case 0x2230acu: goto label_2230ac;
        case 0x2230bcu: goto label_2230bc;
        case 0x22313cu: goto label_22313c;
        default: break;
    }

    ctx->pc = 0x223068u;

    // 0x223068: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x223068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22306c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22306cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x223070: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x223070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x223074: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x223074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x223078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22307c: 0xc088ade  jal         func_222B78
    ctx->pc = 0x22307Cu;
    SET_GPR_U32(ctx, 31, 0x223084u);
    ctx->pc = 0x223080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22307Cu;
    // 0x223080: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x22307Cu, 0x223084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223084u;
label_223084:
    // 0x223084: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x223084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223088: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x223088u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x22308c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22308cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x223090: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x223090u;
    {
        const bool branch_taken_0x223090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223090u;
        // 0x223094: 0x86500028  lh          $s0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223090) {
            ctx->pc = 0x223134u;
            goto label_223134;
        }
    }
    ctx->pc = 0x223098u;
    // 0x223098: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x223098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x22309c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x22309cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2230a0: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x2230a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x2230a4: 0xc10904c  jal         func_424130
    ctx->pc = 0x2230A4u;
    SET_GPR_U32(ctx, 31, 0x2230ACu);
    ctx->pc = 0x2230A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2230A4u;
    // 0x2230a8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x2230A4u, 0x2230ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2230ACu;
label_2230ac:
    // 0x2230ac: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2230ACu;
    {
        const bool branch_taken_0x2230ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2230ac) {
            ctx->pc = 0x223134u;
            goto label_223134;
        }
    }
    ctx->pc = 0x2230B4u;
    // 0x2230b4: 0xc08a218  jal         func_228860
    ctx->pc = 0x2230B4u;
    SET_GPR_U32(ctx, 31, 0x2230BCu);
    ctx->pc = 0x228860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228860u, 0x2230B4u, 0x2230BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2230BCu;
label_2230bc:
    // 0x2230bc: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x2230bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2230c0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2230C0u;
    {
        const bool branch_taken_0x2230c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2230C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2230C0u;
        // 0x2230c4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2230c0) {
            ctx->pc = 0x2230DCu;
            goto label_2230dc;
        }
    }
    ctx->pc = 0x2230C8u;
    // 0x2230c8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2230c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2230cc: 0x0  nop
    ctx->pc = 0x2230ccu;
    // NOP
    // 0x2230d0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2230d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2230d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2230D4u;
    {
        const bool branch_taken_0x2230d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2230d4) {
            ctx->pc = 0x2230F4u;
            goto label_2230f4;
        }
    }
    ctx->pc = 0x2230DCu;
label_2230dc:
    // 0x2230dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2230dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2230e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2230e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2230e4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2230e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2230e8: 0x0  nop
    ctx->pc = 0x2230e8u;
    // NOP
    // 0x2230ec: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2230ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2230f0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2230f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2230f4:
    // 0x2230f4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2230f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2230f8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2230f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2230fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2230fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223100: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x223100u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223104: 0x0  nop
    ctx->pc = 0x223104u;
    // NOP
    // 0x223108: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x223108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22310c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22310cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223110: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x223110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x223114: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x223114u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x223118: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x223118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22311c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x22311cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x223120: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x223120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x223124: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x223124u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x223128: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x223128u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x22312c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22312cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x223130: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x223130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_223134:
    // 0x223134: 0xc088bfe  jal         func_222FF8
    ctx->pc = 0x223134u;
    SET_GPR_U32(ctx, 31, 0x22313Cu);
    ctx->pc = 0x223138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223134u;
    // 0x223138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222FF8u, 0x223134u, 0x22313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22313Cu;
label_22313c:
    // 0x22313c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22313Cu;
    {
        const bool branch_taken_0x22313c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22313Cu;
        // 0x223140: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22313c) {
            ctx->pc = 0x223170u;
            goto label_223170;
        }
    }
    ctx->pc = 0x223144u;
    // 0x223144: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x223144u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223148: 0x0  nop
    ctx->pc = 0x223148u;
    // NOP
    // 0x22314c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22314cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x223150: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x223150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223154: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x223154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x223158: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x223158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22315c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22315cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x223160: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x223160u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x223164: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x223164u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x223168: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x223168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x22316c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22316cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223170:
    // 0x223170: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x223170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223174: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x223174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223178: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x223178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22317c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22317cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223180: 0x3e00008  jr          $ra
    ctx->pc = 0x223180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223180u;
        // 0x223184: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223188u;
}
