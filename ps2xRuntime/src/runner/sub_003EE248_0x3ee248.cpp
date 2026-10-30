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

// Function: sub_003EE248
// Address: 0x3ee248 - 0x3ee318
void sub_003EE248_0x3ee248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE248_0x3ee248");
#endif

    ctx->pc = 0x3ee248u;

    // 0x3ee248: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3ee248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3ee24c: 0x14a2002f  bne         $a1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3EE24Cu;
    {
        const bool branch_taken_0x3ee24c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EE250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE24Cu;
        // 0x3ee250: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee24c) {
            ctx->pc = 0x3EE30Cu;
            goto label_3ee30c;
        }
    }
    ctx->pc = 0x3EE254u;
    // 0x3ee254: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3EE254u;
    {
        const bool branch_taken_0x3ee254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE254u;
        // 0x3ee258: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee254) {
            ctx->pc = 0x3EE30Cu;
            goto label_3ee30c;
        }
    }
    ctx->pc = 0x3EE25Cu;
    // 0x3ee25c: 0x3c013d30  lui         $at, 0x3D30
    ctx->pc = 0x3ee25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15664 << 16));
    // 0x3ee260: 0x342120c5  ori         $at, $at, 0x20C5
    ctx->pc = 0x3ee260u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8389);
    // 0x3ee264: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ee264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ee268: 0x3c013d89  lui         $at, 0x3D89
    ctx->pc = 0x3ee268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15753 << 16));
    // 0x3ee26c: 0x3421374c  ori         $at, $at, 0x374C
    ctx->pc = 0x3ee26cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14156);
    // 0x3ee270: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ee270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ee274: 0x24633160  addiu       $v1, $v1, 0x3160
    ctx->pc = 0x3ee274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12640));
    // 0x3ee278: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ee278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3ee27c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3ee27cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ee280: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3ee280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3ee284: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3ee284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3ee288: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3ee288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3ee28c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x3ee28cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3ee290: 0x3c01bd91  lui         $at, 0xBD91
    ctx->pc = 0x3ee290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48529 << 16));
    // 0x3ee294: 0x34216873  ori         $at, $at, 0x6873
    ctx->pc = 0x3ee294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26739);
    // 0x3ee298: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3ee298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3ee29c: 0x3c01bccc  lui         $at, 0xBCCC
    ctx->pc = 0x3ee29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48332 << 16));
    // 0x3ee2a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ee2a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3ee2a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ee2a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ee2a8: 0x3c01bcdd  lui         $at, 0xBCDD
    ctx->pc = 0x3ee2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48349 << 16));
    // 0x3ee2ac: 0x34212f1b  ori         $at, $at, 0x2F1B
    ctx->pc = 0x3ee2acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12059);
    // 0x3ee2b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ee2b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ee2b4: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x3ee2b4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ee2b8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3ee2b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3ee2bc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3ee2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3ee2c0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3ee2c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3ee2c4: 0x3c013d79  lui         $at, 0x3D79
    ctx->pc = 0x3ee2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15737 << 16));
    // 0x3ee2c8: 0x3421db23  ori         $at, $at, 0xDB23
    ctx->pc = 0x3ee2c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56099);
    // 0x3ee2cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3ee2ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3ee2d0: 0x3c01bd03  lui         $at, 0xBD03
    ctx->pc = 0x3ee2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48387 << 16));
    // 0x3ee2d4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x3ee2d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x3ee2d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ee2d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ee2dc: 0x3c01bd23  lui         $at, 0xBD23
    ctx->pc = 0x3ee2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48419 << 16));
    // 0x3ee2e0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3ee2e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x3ee2e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ee2e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ee2e8: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3ee2e8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ee2ec: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3ee2ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3ee2f0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3ee2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3ee2f4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3ee2f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3ee2f8: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3ee2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3ee2fc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3ee2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3ee300: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3ee300u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ee304: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3ee304u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3ee308: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x3ee308u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
label_3ee30c:
    // 0x3ee30c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE30Cu;
        // 0x3ee310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE314u;
    // 0x3ee314: 0x0  nop
    ctx->pc = 0x3ee314u;
    // NOP
    ctx->pc = 0x3ee318u;
}
