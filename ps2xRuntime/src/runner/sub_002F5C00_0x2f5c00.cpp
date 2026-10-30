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

// Function: sub_002F5C00
// Address: 0x2f5c00 - 0x2f5c90
void sub_002F5C00_0x2f5c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5C00_0x2f5c00");
#endif

    switch (ctx->pc) {
        case 0x2f5c54u: goto label_2f5c54;
        case 0x2f5c6cu: goto label_2f5c6c;
        default: break;
    }

    ctx->pc = 0x2f5c00u;

    // 0x2f5c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f5c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f5c04: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2f5c04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5c08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f5c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f5c0c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f5c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2f5c10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f5c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f5c14: 0x24421220  addiu       $v0, $v0, 0x1220
    ctx->pc = 0x2f5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4640));
    // 0x2f5c18: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f5c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2f5c1c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f5c1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2f5c20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f5c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5c24: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2f5c24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
    // 0x2f5c28: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2f5c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f5c2c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2f5c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2f5c30: 0x24c67c38  addiu       $a2, $a2, 0x7C38
    ctx->pc = 0x2f5c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31800));
    // 0x2f5c34: 0xac620208  sw          $v0, 0x208($v1)
    ctx->pc = 0x2f5c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 520), GPR_U32(ctx, 2));
    // 0x2f5c38: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2f5c38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f5c3c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2f5c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f5c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5c44: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2f5c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
    // 0x2f5c48: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2f5c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f5c4c: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x2F5C4Cu;
    SET_GPR_U32(ctx, 31, 0x2F5C54u);
    ctx->pc = 0x2F5C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5C4Cu;
    // 0x2f5c50: 0xa0400265  sb          $zero, 0x265($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2F5C4Cu, 0x2F5C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5C54u;
label_2f5c54:
    // 0x2f5c54: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2f5c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x2f5c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5c5c: 0x24a57c48  addiu       $a1, $a1, 0x7C48
    ctx->pc = 0x2f5c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31816));
    // 0x2f5c60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f5c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5c64: 0xc0930a0  jal         func_24C280
    ctx->pc = 0x2F5C64u;
    SET_GPR_U32(ctx, 31, 0x2F5C6Cu);
    ctx->pc = 0x2F5C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5C64u;
    // 0x2f5c68: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C280u, 0x2F5C64u, 0x2F5C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5C6Cu;
label_2f5c6c:
    // 0x2f5c6c: 0xde0300e0  ld          $v1, 0xE0($s0)
    ctx->pc = 0x2f5c6cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2f5c70: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x2f5c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2f5c74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f5c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5c78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f5c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f5c7c: 0xfe0300e0  sd          $v1, 0xE0($s0)
    ctx->pc = 0x2f5c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 3));
    // 0x2f5c80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f5c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5c84: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C84u;
        // 0x2f5c88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5C8Cu;
    // 0x2f5c8c: 0x0  nop
    ctx->pc = 0x2f5c8cu;
    // NOP
    ctx->pc = 0x2f5c90u;
}
