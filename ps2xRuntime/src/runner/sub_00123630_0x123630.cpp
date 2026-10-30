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

// Function: sub_00123630
// Address: 0x123630 - 0x1236b8
void sub_00123630_0x123630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123630_0x123630");
#endif

    switch (ctx->pc) {
        case 0x123644u: goto label_123644;
        case 0x12369cu: goto label_12369c;
        default: break;
    }

    ctx->pc = 0x123630u;

    // 0x123630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123634: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x123634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x123638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12363c: 0xc04821a  jal         func_120868
    ctx->pc = 0x12363Cu;
    SET_GPR_U32(ctx, 31, 0x123644u);
    ctx->pc = 0x123640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12363Cu;
    // 0x123640: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120868u, 0x12363Cu, 0x123644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123644u;
label_123644:
    // 0x123644: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x123644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x123648: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x123648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12364c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x12364cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x123650: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x123650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x123654: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x123654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x123658: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x123658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12365c: 0x244257d0  addiu       $v0, $v0, 0x57D0
    ctx->pc = 0x12365cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22480));
    // 0x123660: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x123660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
    // 0x123664: 0xae0001e4  sw          $zero, 0x1E4($s0)
    ctx->pc = 0x123664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
    // 0x123668: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x123668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x12366c: 0xa60001fc  sh          $zero, 0x1FC($s0)
    ctx->pc = 0x12366cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 508), (uint16_t)GPR_U32(ctx, 0));
    // 0x123670: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x123670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x123674: 0xa200003f  sb          $zero, 0x3F($s0)
    ctx->pc = 0x123674u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x123678: 0x24a58908  addiu       $a1, $a1, -0x76F8
    ctx->pc = 0x123678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936840));
    // 0x12367c: 0xe60101e8  swc1        $f1, 0x1E8($s0)
    ctx->pc = 0x12367cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 488), bits); }
    // 0x123680: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x123680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x123684: 0xe60001f4  swc1        $f0, 0x1F4($s0)
    ctx->pc = 0x123684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 500), bits); }
    // 0x123688: 0xa60301fe  sh          $v1, 0x1FE($s0)
    ctx->pc = 0x123688u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 510), (uint16_t)GPR_U32(ctx, 3));
    // 0x12368c: 0xe60001ec  swc1        $f0, 0x1EC($s0)
    ctx->pc = 0x12368cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 492), bits); }
    // 0x123690: 0xe60001f0  swc1        $f0, 0x1F0($s0)
    ctx->pc = 0x123690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 496), bits); }
    // 0x123694: 0xc10c4de  jal         func_431378
    ctx->pc = 0x123694u;
    SET_GPR_U32(ctx, 31, 0x12369Cu);
    ctx->pc = 0x123698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123694u;
    // 0x123698: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x123694u, 0x12369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12369Cu;
label_12369c:
    // 0x12369c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12369cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1236a0: 0xae0001f8  sw          $zero, 0x1F8($s0)
    ctx->pc = 0x1236a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
    // 0x1236a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1236a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1236a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1236a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1236ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1236ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1236B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236ACu;
        // 0x1236b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1236ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1236B4u;
    // 0x1236b4: 0x0  nop
    ctx->pc = 0x1236b4u;
    // NOP
    ctx->pc = 0x1236b8u;
}
