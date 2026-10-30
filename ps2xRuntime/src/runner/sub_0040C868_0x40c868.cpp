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

// Function: sub_0040C868
// Address: 0x40c868 - 0x40c908
void sub_0040C868_0x40c868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C868_0x40c868");
#endif

    switch (ctx->pc) {
        case 0x40c868u: goto label_40c868;
        case 0x40c86cu: goto label_40c86c;
        case 0x40c870u: goto label_40c870;
        case 0x40c874u: goto label_40c874;
        case 0x40c878u: goto label_40c878;
        case 0x40c87cu: goto label_40c87c;
        case 0x40c880u: goto label_40c880;
        case 0x40c884u: goto label_40c884;
        case 0x40c888u: goto label_40c888;
        case 0x40c88cu: goto label_40c88c;
        case 0x40c890u: goto label_40c890;
        case 0x40c894u: goto label_40c894;
        case 0x40c898u: goto label_40c898;
        case 0x40c89cu: goto label_40c89c;
        case 0x40c8a0u: goto label_40c8a0;
        case 0x40c8a4u: goto label_40c8a4;
        case 0x40c8a8u: goto label_40c8a8;
        case 0x40c8acu: goto label_40c8ac;
        case 0x40c8b0u: goto label_40c8b0;
        case 0x40c8b4u: goto label_40c8b4;
        case 0x40c8b8u: goto label_40c8b8;
        case 0x40c8bcu: goto label_40c8bc;
        case 0x40c8c0u: goto label_40c8c0;
        case 0x40c8c4u: goto label_40c8c4;
        case 0x40c8c8u: goto label_40c8c8;
        case 0x40c8ccu: goto label_40c8cc;
        case 0x40c8d0u: goto label_40c8d0;
        case 0x40c8d4u: goto label_40c8d4;
        case 0x40c8d8u: goto label_40c8d8;
        case 0x40c8dcu: goto label_40c8dc;
        case 0x40c8e0u: goto label_40c8e0;
        case 0x40c8e4u: goto label_40c8e4;
        case 0x40c8e8u: goto label_40c8e8;
        case 0x40c8ecu: goto label_40c8ec;
        case 0x40c8f0u: goto label_40c8f0;
        case 0x40c8f4u: goto label_40c8f4;
        case 0x40c8f8u: goto label_40c8f8;
        case 0x40c8fcu: goto label_40c8fc;
        case 0x40c900u: goto label_40c900;
        case 0x40c904u: goto label_40c904;
        default: break;
    }

    ctx->pc = 0x40c868u;

label_40c868:
    // 0x40c868: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x40c868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_40c86c:
    // 0x40c86c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x40c86cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_40c870:
    // 0x40c870: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x40c870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_40c874:
    // 0x40c874: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x40c874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_40c878:
    // 0x40c878: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x40c878u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_40c87c:
    // 0x40c87c: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x40c87cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
label_40c880:
    // 0x40c880: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x40c880u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_40c884:
    // 0x40c884: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x40c884u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_40c888:
    // 0x40c888: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40c888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_40c88c:
    // 0x40c88c: 0xc10b1c6  jal         func_42C718
label_40c890:
    if (ctx->pc == 0x40C890u) {
        ctx->pc = 0x40C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C88Cu;
        // 0x40c890: 0x46007586  mov.s       $f22, $f14 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C894u;
        goto label_40c894;
    }
    ctx->pc = 0x40C88Cu;
    SET_GPR_U32(ctx, 31, 0x40C894u);
    ctx->pc = 0x40C890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C88Cu;
    // 0x40c890: 0x46007586  mov.s       $f22, $f14 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x40C88Cu, 0x40C894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C894u;
label_40c894:
    // 0x40c894: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x40c894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_40c898:
    // 0x40c898: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x40c898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_40c89c:
    // 0x40c89c: 0x4614ab02  mul.s       $f12, $f21, $f20
    ctx->pc = 0x40c89cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_40c8a0:
    // 0x40c8a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x40c8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_40c8a4:
    // 0x40c8a4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x40c8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_40c8a8:
    // 0x40c8a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40c8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_40c8ac:
    // 0x40c8ac: 0xc10b1c6  jal         func_42C718
label_40c8b0:
    if (ctx->pc == 0x40C8B0u) {
        ctx->pc = 0x40C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C8ACu;
        // 0x40c8b0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C8B4u;
        goto label_40c8b4;
    }
    ctx->pc = 0x40C8ACu;
    SET_GPR_U32(ctx, 31, 0x40C8B4u);
    ctx->pc = 0x40C8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C8ACu;
    // 0x40c8b0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x40C8ACu, 0x40C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C8B4u;
label_40c8b4:
    // 0x40c8b4: 0x4614b302  mul.s       $f12, $f22, $f20
    ctx->pc = 0x40c8b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
label_40c8b8:
    // 0x40c8b8: 0xc10b1c6  jal         func_42C718
label_40c8bc:
    if (ctx->pc == 0x40C8BCu) {
        ctx->pc = 0x40C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C8B8u;
        // 0x40c8bc: 0xa3a20001  sb          $v0, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C8C0u;
        goto label_40c8c0;
    }
    ctx->pc = 0x40C8B8u;
    SET_GPR_U32(ctx, 31, 0x40C8C0u);
    ctx->pc = 0x40C8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C8B8u;
    // 0x40c8bc: 0xa3a20001  sb          $v0, 0x1($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x40C8B8u, 0x40C8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C8C0u;
label_40c8c0:
    // 0x40c8c0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x40c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_40c8c4:
    // 0x40c8c4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x40c8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_40c8c8:
    // 0x40c8c8: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x40c8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
label_40c8cc:
    // 0x40c8cc: 0xa3a30003  sb          $v1, 0x3($sp)
    ctx->pc = 0x40c8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
label_40c8d0:
    // 0x40c8d0: 0x8c86cdb4  lw          $a2, -0x324C($a0)
    ctx->pc = 0x40c8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954420)));
label_40c8d4:
    // 0x40c8d4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x40c8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_40c8d8:
    // 0x40c8d8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x40c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_40c8dc:
    // 0x40c8dc: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x40c8dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_40c8e0:
    // 0x40c8e0: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x40c8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_40c8e4:
    // 0x40c8e4: 0x60f809  jalr        $v1
label_40c8e8:
    if (ctx->pc == 0x40C8E8u) {
        ctx->pc = 0x40C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C8E4u;
        // 0x40c8e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C8ECu;
        goto label_40c8ec;
    }
    ctx->pc = 0x40C8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40C8ECu);
        ctx->pc = 0x40C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C8E4u;
        // 0x40c8e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C8E4u, 0x40C8ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40C8ECu;
label_40c8ec:
    // 0x40c8ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40c8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_40c8f0:
    // 0x40c8f0: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x40c8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_40c8f4:
    // 0x40c8f4: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x40c8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_40c8f8:
    // 0x40c8f8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x40c8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_40c8fc:
    // 0x40c8fc: 0x3e00008  jr          $ra
label_40c900:
    if (ctx->pc == 0x40C900u) {
        ctx->pc = 0x40C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C8FCu;
        // 0x40c900: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C904u;
        goto label_40c904;
    }
    ctx->pc = 0x40C8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C8FCu;
        // 0x40c900: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40C904u;
label_40c904:
    // 0x40c904: 0x0  nop
    ctx->pc = 0x40c904u;
    // NOP
    ctx->pc = 0x40c908u;
}
