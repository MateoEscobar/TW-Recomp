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

// Function: sub_003356A0
// Address: 0x3356a0 - 0x3357a8
void sub_003356A0_0x3356a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003356A0_0x3356a0");
#endif

    ctx->pc = 0x3356a0u;

    // 0x3356a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3356a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3356a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3356a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3356a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3356a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3356ac: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x3356acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3356b0: 0x0  nop
    ctx->pc = 0x3356b0u;
    // NOP
    // 0x3356b4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3356B4u;
    {
        const bool branch_taken_0x3356b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3356B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3356B4u;
        // 0x3356b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3356b4) {
            ctx->pc = 0x3356C0u;
            goto label_3356c0;
        }
    }
    ctx->pc = 0x3356BCu;
    // 0x3356bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3356bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3356c0:
    // 0x3356c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3356c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3356c4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3356c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3356c8: 0x46006305  abs.s       $f12, $f12
    ctx->pc = 0x3356c8u;
    ctx->f[12] = FPU_ABS_S(ctx->f[12]);
    // 0x3356cc: 0x460c2034  c.lt.s      $f4, $f12
    ctx->pc = 0x3356ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3356d0: 0x0  nop
    ctx->pc = 0x3356d0u;
    // NOP
    // 0x3356d4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3356D4u;
    {
        const bool branch_taken_0x3356d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3356D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3356D4u;
        // 0x3356d8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3356d4) {
            ctx->pc = 0x3356ECu;
            goto label_3356ec;
        }
    }
    ctx->pc = 0x3356DCu;
    // 0x3356dc: 0x0  nop
    ctx->pc = 0x3356dcu;
    // NOP
    // 0x3356e0: 0x0  nop
    ctx->pc = 0x3356e0u;
    // NOP
    // 0x3356e4: 0x460c2303  div.s       $f12, $f4, $f12
    ctx->pc = 0x3356e4u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[4], ctx->f[12]); }
    // 0x3356e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3356e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3356ec:
    // 0x3356ec: 0xc440b908  lwc1        $f0, -0x46F8($v0)
    ctx->pc = 0x3356ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3356f0: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x3356f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3356f4: 0x0  nop
    ctx->pc = 0x3356f4u;
    // NOP
    // 0x3356f8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x3356F8u;
    {
        const bool branch_taken_0x3356f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3356FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3356F8u;
        // 0x3356fc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3356f8) {
            ctx->pc = 0x335718u;
            goto label_335718;
        }
    }
    ctx->pc = 0x335700u;
    // 0x335700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x335700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335704: 0xc441b904  lwc1        $f1, -0x46FC($v0)
    ctx->pc = 0x335704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x335708: 0x460c0802  mul.s       $f0, $f1, $f12
    ctx->pc = 0x335708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x33570c: 0x46016041  sub.s       $f1, $f12, $f1
    ctx->pc = 0x33570cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x335710: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x335710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x335714: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x335714u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_335718:
    // 0x335718: 0x460c6042  mul.s       $f1, $f12, $f12
    ctx->pc = 0x335718u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x33571c: 0x3c013e84  lui         $at, 0x3E84
    ctx->pc = 0x33571cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16004 << 16));
    // 0x335720: 0x342115a6  ori         $at, $at, 0x15A6
    ctx->pc = 0x335720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5542);
    // 0x335724: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x335724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335728: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x335728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x33572c: 0x3421fff0  ori         $at, $at, 0xFFF0
    ctx->pc = 0x33572cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65520);
    // 0x335730: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x335730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x335734: 0x3c013f17  lui         $at, 0x3F17
    ctx->pc = 0x335734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16151 << 16));
    // 0x335738: 0x3421592e  ori         $at, $at, 0x592E
    ctx->pc = 0x335738u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22830);
    // 0x33573c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x33573cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x335740: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x335740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x335744: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x335744u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x335748: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x335748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x33574c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x33574cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x335750: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x335750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x335754: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x335754u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x335758: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x335758u;
    {
        const bool branch_taken_0x335758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x335758) {
            ctx->pc = 0x335774u;
            goto label_335774;
        }
    }
    ctx->pc = 0x335760u;
    // 0x335760: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x335760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x335764: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x335764u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x335768: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x335768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33576c: 0x0  nop
    ctx->pc = 0x33576cu;
    // NOP
    // 0x335770: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x335770u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_335774:
    // 0x335774: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x335774u;
    {
        const bool branch_taken_0x335774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x335774) {
            ctx->pc = 0x335790u;
            goto label_335790;
        }
    }
    ctx->pc = 0x33577Cu;
    // 0x33577c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x33577cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x335780: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x335780u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x335784: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x335784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335788: 0x0  nop
    ctx->pc = 0x335788u;
    // NOP
    // 0x33578c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x33578cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_335790:
    // 0x335790: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x335790u;
    {
        const bool branch_taken_0x335790 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x335794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335790u;
        // 0x335794: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x335790) {
            ctx->pc = 0x3357A0u;
            goto label_3357a0;
        }
    }
    ctx->pc = 0x335798u;
    // 0x335798: 0x3e00008  jr          $ra
    ctx->pc = 0x335798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335798u;
        // 0x33579c: 0x46000807  neg.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3357A0u;
label_3357a0:
    // 0x3357a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3357A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3357A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3357A8u;
}
