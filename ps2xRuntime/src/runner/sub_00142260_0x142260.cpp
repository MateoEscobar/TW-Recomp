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

// Function: sub_00142260
// Address: 0x142260 - 0x1422e0
void sub_00142260_0x142260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142260_0x142260");
#endif

    switch (ctx->pc) {
        case 0x142274u: goto label_142274;
        case 0x1422c4u: goto label_1422c4;
        case 0x1422ccu: goto label_1422cc;
        default: break;
    }

    ctx->pc = 0x142260u;

    // 0x142260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142264: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x142264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x142268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14226c: 0xc04821a  jal         func_120868
    ctx->pc = 0x14226Cu;
    SET_GPR_U32(ctx, 31, 0x142274u);
    ctx->pc = 0x142270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14226Cu;
    // 0x142270: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120868u, 0x14226Cu, 0x142274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142274u;
label_142274:
    // 0x142274: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x142274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x142278: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x142278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14227c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x14227cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x142280: 0x24427350  addiu       $v0, $v0, 0x7350
    ctx->pc = 0x142280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29520));
    // 0x142284: 0xae0002e0  sw          $zero, 0x2E0($s0)
    ctx->pc = 0x142284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
    // 0x142288: 0xae0002e4  sw          $zero, 0x2E4($s0)
    ctx->pc = 0x142288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 0));
    // 0x14228c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x14228cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x142290: 0xae0002e8  sw          $zero, 0x2E8($s0)
    ctx->pc = 0x142290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 0));
    // 0x142294: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x142294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x142298: 0xae00032c  sw          $zero, 0x32C($s0)
    ctx->pc = 0x142298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 0));
    // 0x14229c: 0x24a59300  addiu       $a1, $a1, -0x6D00
    ctx->pc = 0x14229cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939392));
    // 0x1422a0: 0xae000334  sw          $zero, 0x334($s0)
    ctx->pc = 0x1422a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
    // 0x1422a4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1422a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1422a8: 0xae000338  sw          $zero, 0x338($s0)
    ctx->pc = 0x1422a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
    // 0x1422ac: 0xae00033c  sw          $zero, 0x33C($s0)
    ctx->pc = 0x1422acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 0));
    // 0x1422b0: 0xae000340  sw          $zero, 0x340($s0)
    ctx->pc = 0x1422b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
    // 0x1422b4: 0xa200003f  sb          $zero, 0x3F($s0)
    ctx->pc = 0x1422b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x1422b8: 0xe6000330  swc1        $f0, 0x330($s0)
    ctx->pc = 0x1422b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 816), bits); }
    // 0x1422bc: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1422BCu;
    SET_GPR_U32(ctx, 31, 0x1422C4u);
    ctx->pc = 0x1422C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1422BCu;
    // 0x1422c0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1422BCu, 0x1422C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1422C4u;
label_1422c4:
    // 0x1422c4: 0xc0508c2  jal         func_142308
    ctx->pc = 0x1422C4u;
    SET_GPR_U32(ctx, 31, 0x1422CCu);
    ctx->pc = 0x1422C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1422C4u;
    // 0x1422c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142308u, 0x1422C4u, 0x1422CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1422CCu;
label_1422cc:
    // 0x1422cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1422ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1422d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1422d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1422d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1422d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1422d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1422D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1422DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1422D8u;
        // 0x1422dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1422D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1422E0u;
}
