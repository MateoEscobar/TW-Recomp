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

// Function: sub_002378A8
// Address: 0x2378a8 - 0x237958
void sub_002378A8_0x2378a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002378A8_0x2378a8");
#endif

    switch (ctx->pc) {
        case 0x2378c4u: goto label_2378c4;
        case 0x2378ccu: goto label_2378cc;
        default: break;
    }

    ctx->pc = 0x2378a8u;

    // 0x2378a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2378a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2378ac: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2378acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2378b0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2378b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2378b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2378b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2378b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2378b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2378bc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2378BCu;
    SET_GPR_U32(ctx, 31, 0x2378C4u);
    ctx->pc = 0x2378C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2378BCu;
    // 0x2378c0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2378BCu, 0x2378C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2378C4u;
label_2378c4:
    // 0x2378c4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2378C4u;
    SET_GPR_U32(ctx, 31, 0x2378CCu);
    ctx->pc = 0x2378C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2378C4u;
    // 0x2378c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2378C4u, 0x2378CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2378CCu;
label_2378cc:
    // 0x2378cc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2378CCu;
    {
        const bool branch_taken_0x2378cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2378D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378CCu;
        // 0x2378d0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378cc) {
            ctx->pc = 0x237948u;
            goto label_237948;
        }
    }
    ctx->pc = 0x2378D4u;
    // 0x2378d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2378d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2378d8: 0x0  nop
    ctx->pc = 0x2378d8u;
    // NOP
    // 0x2378dc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2378dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2378e0: 0x0  nop
    ctx->pc = 0x2378e0u;
    // NOP
    // 0x2378e4: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x2378E4u;
    {
        const bool branch_taken_0x2378e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2378E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378E4u;
        // 0x2378e8: 0x8c4300d4  lw          $v1, 0xD4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378e4) {
            ctx->pc = 0x23793Cu;
            goto label_23793c;
        }
    }
    ctx->pc = 0x2378ECu;
    // 0x2378ec: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2378ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2378f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2378f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2378f4: 0x0  nop
    ctx->pc = 0x2378f4u;
    // NOP
    // 0x2378f8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2378f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2378fc: 0x0  nop
    ctx->pc = 0x2378fcu;
    // NOP
    // 0x237900: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x237900u;
    {
        const bool branch_taken_0x237900 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x237900) {
            ctx->pc = 0x23793Cu;
            goto label_23793c;
        }
    }
    ctx->pc = 0x237908u;
    // 0x237908: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x237908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x23790c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x23790cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x237910: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x237910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x237914: 0x84620146  lh          $v0, 0x146($v1)
    ctx->pc = 0x237914u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 326)));
    // 0x237918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x237918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23791c: 0x0  nop
    ctx->pc = 0x23791cu;
    // NOP
    // 0x237920: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x237920u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x237924: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x237924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x237928: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x237928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x23792c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23792cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x237930: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x237930u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x237934: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x237934u;
    {
        const bool branch_taken_0x237934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237934u;
        // 0x237938: 0xa4620144  sh          $v0, 0x144($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 324), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237934) {
            ctx->pc = 0x237948u;
            goto label_237948;
        }
    }
    ctx->pc = 0x23793Cu;
label_23793c:
    // 0x23793c: 0x94620146  lhu         $v0, 0x146($v1)
    ctx->pc = 0x23793cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 326)));
    // 0x237940: 0xa4620144  sh          $v0, 0x144($v1)
    ctx->pc = 0x237940u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 324), (uint16_t)GPR_U32(ctx, 2));
    // 0x237944: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_237948:
    // 0x237948: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x237948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23794c: 0x3e00008  jr          $ra
    ctx->pc = 0x23794Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23794Cu;
        // 0x237950: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23794Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237954u;
    // 0x237954: 0x0  nop
    ctx->pc = 0x237954u;
    // NOP
    ctx->pc = 0x237958u;
}
