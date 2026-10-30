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

// Function: sub_00143918
// Address: 0x143918 - 0x1439b0
void sub_00143918_0x143918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143918_0x143918");
#endif

    switch (ctx->pc) {
        case 0x14392cu: goto label_14392c;
        case 0x14399cu: goto label_14399c;
        default: break;
    }

    ctx->pc = 0x143918u;

    // 0x143918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14391c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14391cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x143920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x143924: 0xc04821a  jal         func_120868
    ctx->pc = 0x143924u;
    SET_GPR_U32(ctx, 31, 0x14392Cu);
    ctx->pc = 0x143928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143924u;
    // 0x143928: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120868u, 0x143924u, 0x14392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14392Cu;
label_14392c:
    // 0x14392c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x14392cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x143930: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x143930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x143934: 0x246378d0  addiu       $v1, $v1, 0x78D0
    ctx->pc = 0x143934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30928));
    // 0x143938: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x143938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14393c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x14393cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x143940: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x143940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x143944: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x143944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143948: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x143948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x14394c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14394cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x143950: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x143950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x143954: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x143954u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x143958: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x143958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x14395c: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x14395cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x143960: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x143960u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x143964: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x143964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x143968: 0x24a593f8  addiu       $a1, $a1, -0x6C08
    ctx->pc = 0x143968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939640));
    // 0x14396c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x14396cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x143970: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x143970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143974: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x143974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x143978: 0xa200003f  sb          $zero, 0x3F($s0)
    ctx->pc = 0x143978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x14397c: 0xae0301e0  sw          $v1, 0x1E0($s0)
    ctx->pc = 0x14397cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 3));
    // 0x143980: 0xe60201e8  swc1        $f2, 0x1E8($s0)
    ctx->pc = 0x143980u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 488), bits); }
    // 0x143984: 0xe60101ec  swc1        $f1, 0x1EC($s0)
    ctx->pc = 0x143984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 492), bits); }
    // 0x143988: 0xe60001f0  swc1        $f0, 0x1F0($s0)
    ctx->pc = 0x143988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 496), bits); }
    // 0x14398c: 0xe60301f4  swc1        $f3, 0x1F4($s0)
    ctx->pc = 0x14398cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 500), bits); }
    // 0x143990: 0xae0701f8  sw          $a3, 0x1F8($s0)
    ctx->pc = 0x143990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 7));
    // 0x143994: 0xc10c4de  jal         func_431378
    ctx->pc = 0x143994u;
    SET_GPR_U32(ctx, 31, 0x14399Cu);
    ctx->pc = 0x143998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143994u;
    // 0x143998: 0xe60301e4  swc1        $f3, 0x1E4($s0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 484), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x143994u, 0x14399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14399Cu;
label_14399c:
    // 0x14399c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14399cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1439a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1439a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1439a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1439a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1439a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1439A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1439ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1439A8u;
        // 0x1439ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1439A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1439B0u;
}
