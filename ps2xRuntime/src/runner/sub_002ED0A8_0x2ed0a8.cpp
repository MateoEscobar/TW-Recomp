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

// Function: sub_002ED0A8
// Address: 0x2ed0a8 - 0x2ed160
void sub_002ED0A8_0x2ed0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED0A8_0x2ed0a8");
#endif

    switch (ctx->pc) {
        case 0x2ed114u: goto label_2ed114;
        case 0x2ed11cu: goto label_2ed11c;
        case 0x2ed128u: goto label_2ed128;
        default: break;
    }

    ctx->pc = 0x2ed0a8u;

    // 0x2ed0a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ed0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ed0ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2ed0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2ed0b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ed0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ed0b4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ed0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ed0b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ed0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2ed0bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ed0bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed0c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ed0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ed0c4: 0x24632880  addiu       $v1, $v1, 0x2880
    ctx->pc = 0x2ed0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10368));
    // 0x2ed0c8: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x2ed0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed0cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ed0d0: 0xa2200005  sb          $zero, 0x5($s1)
    ctx->pc = 0x2ed0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed0d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ed0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed0d8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2ed0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2ed0dc: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x2ed0dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed0e0: 0xa220002b  sb          $zero, 0x2B($s1)
    ctx->pc = 0x2ed0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed0e4: 0xa220002c  sb          $zero, 0x2C($s1)
    ctx->pc = 0x2ed0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed0e8: 0xa220002d  sb          $zero, 0x2D($s1)
    ctx->pc = 0x2ed0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 45), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed0ec: 0xa220002e  sb          $zero, 0x2E($s1)
    ctx->pc = 0x2ed0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed0f0: 0xa220002f  sb          $zero, 0x2F($s1)
    ctx->pc = 0x2ed0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed0f4: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2ed0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x2ed0f8: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x2ed0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x2ed0fc: 0xa2280028  sb          $t0, 0x28($s1)
    ctx->pc = 0x2ed0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 8));
    // 0x2ed100: 0xa2290029  sb          $t1, 0x29($s1)
    ctx->pc = 0x2ed100u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 9));
    // 0x2ed104: 0xa227002a  sb          $a3, 0x2A($s1)
    ctx->pc = 0x2ed104u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 7));
    // 0x2ed108: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2ed108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x2ed10c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2ED10Cu;
    SET_GPR_U32(ctx, 31, 0x2ED114u);
    ctx->pc = 0x2ED110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED10Cu;
    // 0x2ed110: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2ED10Cu, 0x2ED114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED114u;
label_2ed114:
    // 0x2ed114: 0xc105e98  jal         func_417A60
    ctx->pc = 0x2ED114u;
    SET_GPR_U32(ctx, 31, 0x2ED11Cu);
    ctx->pc = 0x2ED118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED114u;
    // 0x2ed118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417A60u, 0x2ED114u, 0x2ED11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED11Cu;
label_2ed11c:
    // 0x2ed11c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2ed11cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2ed120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed124: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x2ed124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_2ed128:
    // 0x2ed128: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2ed128u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ed12c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ed12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ed130: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2ed130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2ed134: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x2ed134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2ed138: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x2ed138u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ed13c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2ED13Cu;
    {
        const bool branch_taken_0x2ed13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED13Cu;
        // 0x2ed140: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed13c) {
            ctx->pc = 0x2ED128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed128;
        }
    }
    ctx->pc = 0x2ED144u;
    // 0x2ed144: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ed144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed148: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ed148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ed14c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ed14cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed150: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ed150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed154: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED154u;
        // 0x2ed158: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED15Cu;
    // 0x2ed15c: 0x0  nop
    ctx->pc = 0x2ed15cu;
    // NOP
    ctx->pc = 0x2ed160u;
}
