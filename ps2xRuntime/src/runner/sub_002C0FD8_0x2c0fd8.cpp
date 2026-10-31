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

// Function: sub_002C0FD8
// Address: 0x2c0fd8 - 0x2c1050
void sub_002C0FD8_0x2c0fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0FD8_0x2c0fd8");
#endif

    switch (ctx->pc) {
        case 0x2c103cu: goto label_2c103c;
        default: break;
    }

    ctx->pc = 0x2c0fd8u;

    // 0x2c0fd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c0fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c0fdc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c0fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c0fe0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c0fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c0fe4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2c0fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2c0fe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c0fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c0fec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c0fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0ff0: 0x246309f0  addiu       $v1, $v1, 0x9F0
    ctx->pc = 0x2c0ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2544));
    // 0x2c0ff4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c0ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c0ff8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2c0ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2c0ffc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c0ffcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1000: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x2c1000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
    // 0x2c1004: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2c1004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2c1008: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2c1008u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2c100c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2c100cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2c1010: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2c1010u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2c1014: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2c1014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1018: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2c1018u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c101c: 0xaca0021c  sw          $zero, 0x21C($a1)
    ctx->pc = 0x2c101cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 540), GPR_U32(ctx, 0));
    // 0x2c1020: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c1020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c1024: 0xac400220  sw          $zero, 0x220($v0)
    ctx->pc = 0x2c1024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 0));
    // 0x2c1028: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c1028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c102c: 0xa060028d  sb          $zero, 0x28D($v1)
    ctx->pc = 0x2c102cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 653), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1030: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c1030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c1034: 0xc0a34ba  jal         func_28D2E8
    ctx->pc = 0x2C1034u;
    SET_GPR_U32(ctx, 31, 0x2C103Cu);
    ctx->pc = 0x2C1038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1034u;
    // 0x2c1038: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D2E8u, 0x2C1034u, 0x2C103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C103Cu;
label_2c103c:
    // 0x2c103c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c103cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c1040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1044: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c1044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1048: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1048u;
        // 0x2c104c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1050u;
}
