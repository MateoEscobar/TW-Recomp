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

// Function: sub_00113700
// Address: 0x113700 - 0x113780
void sub_00113700_0x113700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113700_0x113700");
#endif

    switch (ctx->pc) {
        case 0x113758u: goto label_113758;
        case 0x113768u: goto label_113768;
        default: break;
    }

    ctx->pc = 0x113700u;

    // 0x113700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x113700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x113704: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x113704u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113708: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x113708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11370c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11370cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113710: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x113710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x113714: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x113714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x113718: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x113718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11371c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x11371cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x113720: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x113720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x113724: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x113724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x113728: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x113728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    // 0x11372c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x11372cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x113730: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x113730u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x113734: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x113734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x113738: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x113738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11373c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x11373cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113740: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x113740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x113744: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x113744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x113748: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x113748u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11374c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x11374cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x113750: 0xc050fda  jal         func_143F68
    ctx->pc = 0x113750u;
    SET_GPR_U32(ctx, 31, 0x113758u);
    ctx->pc = 0x113754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113750u;
    // 0x113754: 0xae222c14  sw          $v0, 0x2C14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 11284), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x113750u, 0x113758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113758u;
label_113758:
    // 0x113758: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x113758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x11375c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11375cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113760: 0xc04406e  jal         func_1101B8
    ctx->pc = 0x113760u;
    SET_GPR_U32(ctx, 31, 0x113768u);
    ctx->pc = 0x113764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113760u;
    // 0x113764: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1101B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1101B8u, 0x113760u, 0x113768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113768u;
label_113768:
    // 0x113768: 0xae202c14  sw          $zero, 0x2C14($s1)
    ctx->pc = 0x113768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11284), GPR_U32(ctx, 0));
    // 0x11376c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11376cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113770: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x113770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113774: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x113774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113778: 0x3e00008  jr          $ra
    ctx->pc = 0x113778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113778u;
        // 0x11377c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113780u;
}
