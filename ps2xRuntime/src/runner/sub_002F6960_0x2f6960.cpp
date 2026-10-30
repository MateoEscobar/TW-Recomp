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

// Function: sub_002F6960
// Address: 0x2f6960 - 0x2f69d8
void sub_002F6960_0x2f6960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6960_0x2f6960");
#endif

    ctx->pc = 0x2f6960u;

    // 0x2f6960: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f6960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f6964: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f6964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f6968: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f6968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f696c: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2f696cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
    // 0x2f6970: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2f6970u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
    // 0x2f6974: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f6974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6978: 0xac43021c  sw          $v1, 0x21C($v0)
    ctx->pc = 0x2f6978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 3));
    // 0x2f697c: 0x3c0bfffd  lui         $t3, 0xFFFD
    ctx->pc = 0x2f697cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65533 << 16));
    // 0x2f6980: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x2f6980u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x2f6984: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2f6984u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f6988: 0x240aff7f  addiu       $t2, $zero, -0x81
    ctx->pc = 0x2f6988u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x2f698c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f698cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f6990: 0x3c09bfff  lui         $t1, 0xBFFF
    ctx->pc = 0x2f6990u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)49151 << 16));
    // 0x2f6994: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x2f6994u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x2f6998: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x2f6998u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
    // 0x2f699c: 0x35290001  ori         $t1, $t1, 0x1
    ctx->pc = 0x2f699cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x2f69a0: 0x2405fdff  addiu       $a1, $zero, -0x201
    ctx->pc = 0x2f69a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x2f69a4: 0x2406feff  addiu       $a2, $zero, -0x101
    ctx->pc = 0x2f69a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x2f69a8: 0xa0480265  sb          $t0, 0x265($v0)
    ctx->pc = 0x2f69a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 8));
    // 0x2f69ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f69acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f69b0: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2f69b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
    // 0x2f69b4: 0xdce200e0  ld          $v0, 0xE0($a3)
    ctx->pc = 0x2f69b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 224)));
    // 0x2f69b8: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x2f69b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x2f69bc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x2f69bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x2f69c0: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2f69c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2f69c4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2f69c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2f69c8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2f69c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2f69cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F69CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F69D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F69CCu;
        // 0x2f69d0: 0xfce200e0  sd          $v0, 0xE0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F69CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F69D4u;
    // 0x2f69d4: 0x0  nop
    ctx->pc = 0x2f69d4u;
    // NOP
    ctx->pc = 0x2f69d8u;
}
