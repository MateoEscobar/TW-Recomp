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

// Function: sub_001044A0
// Address: 0x1044a0 - 0x104570
void sub_001044A0_0x1044a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001044A0_0x1044a0");
#endif

    switch (ctx->pc) {
        case 0x1044e8u: goto label_1044e8;
        case 0x104500u: goto label_104500;
        case 0x10451cu: goto label_10451c;
        default: break;
    }

    ctx->pc = 0x1044a0u;

    // 0x1044a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1044a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1044a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1044a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1044a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1044a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1044ac: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x1044acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1044b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1044b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1044b4: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1044b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1044b8: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1044b8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1044bc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1044bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1044c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1044c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1044c4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1044c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1044c8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1044c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1044cc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1044ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1044d0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1044d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1044d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1044d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1044d8: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x1044d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1044dc: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x1044dcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x1044e0: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x1044E0u;
    SET_GPR_U32(ctx, 31, 0x1044E8u);
    ctx->pc = 0x1044E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1044E0u;
    // 0x1044e4: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x1044E0u, 0x1044E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1044E8u;
label_1044e8:
    // 0x1044e8: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x1044e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1044ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1044ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1044f0: 0x46166300  add.s       $f12, $f12, $f22
    ctx->pc = 0x1044f0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[22]);
    // 0x1044f4: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x1044f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x1044f8: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x1044F8u;
    SET_GPR_U32(ctx, 31, 0x104500u);
    ctx->pc = 0x1044FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1044F8u;
    // 0x1044fc: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x1044F8u, 0x104500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104500u;
label_104500:
    // 0x104500: 0x50802b  sltu        $s0, $v0, $s0
    ctx->pc = 0x104500u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x104504: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x104504u;
    {
        const bool branch_taken_0x104504 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x104508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104504u;
        // 0x104508: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104504) {
            ctx->pc = 0x104528u;
            goto label_104528;
        }
    }
    ctx->pc = 0x10450Cu;
    // 0x10450c: 0x9625001c  lhu         $a1, 0x1C($s1)
    ctx->pc = 0x10450cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x104510: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x104510u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x104514: 0xc041044  jal         func_104110
    ctx->pc = 0x104514u;
    SET_GPR_U32(ctx, 31, 0x10451Cu);
    ctx->pc = 0x104518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104514u;
    // 0x104518: 0x452823  subu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104110u, 0x104514u, 0x10451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10451Cu;
label_10451c:
    // 0x10451c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10451cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104520: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x104520u;
    {
        const bool branch_taken_0x104520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104520u;
        // 0x104524: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104520) {
            ctx->pc = 0x104550u;
            goto label_104550;
        }
    }
    ctx->pc = 0x104528u;
label_104528:
    // 0x104528: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x104528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10452c: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x10452cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104530: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x104530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104534: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x104534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x104538: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x104538u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x10453c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10453cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x104540: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x104540u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x104544: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x104544u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x104548: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x104548u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x10454c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10454cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_104550:
    // 0x104550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x104550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x104554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104558: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x104558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x10455c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x10455cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x104560: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x104560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x104564: 0x3e00008  jr          $ra
    ctx->pc = 0x104564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104564u;
        // 0x104568: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10456Cu;
    // 0x10456c: 0x0  nop
    ctx->pc = 0x10456cu;
    // NOP
    ctx->pc = 0x104570u;
}
