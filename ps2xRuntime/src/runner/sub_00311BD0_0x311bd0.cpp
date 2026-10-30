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

// Function: sub_00311BD0
// Address: 0x311bd0 - 0x311c78
void sub_00311BD0_0x311bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311BD0_0x311bd0");
#endif

    switch (ctx->pc) {
        case 0x311becu: goto label_311bec;
        case 0x311bfcu: goto label_311bfc;
        case 0x311c24u: goto label_311c24;
        case 0x311c34u: goto label_311c34;
        case 0x311c4cu: goto label_311c4c;
        case 0x311c60u: goto label_311c60;
        default: break;
    }

    ctx->pc = 0x311bd0u;

    // 0x311bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x311bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x311bd4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x311bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x311bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x311bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x311bdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x311bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311be0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x311be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x311be4: 0xc05959e  jal         func_165678
    ctx->pc = 0x311BE4u;
    SET_GPR_U32(ctx, 31, 0x311BECu);
    ctx->pc = 0x311BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311BE4u;
    // 0x311be8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x311BE4u, 0x311BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311BECu;
label_311bec:
    // 0x311bec: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x311BECu;
    {
        const bool branch_taken_0x311bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311BECu;
        // 0x311bf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311bec) {
            ctx->pc = 0x311C60u;
            goto label_311c60;
        }
    }
    ctx->pc = 0x311BF4u;
    // 0x311bf4: 0xc08750a  jal         func_21D428
    ctx->pc = 0x311BF4u;
    SET_GPR_U32(ctx, 31, 0x311BFCu);
    ctx->pc = 0x311BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311BF4u;
    // 0x311bf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x311BF4u, 0x311BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311BFCu;
label_311bfc:
    // 0x311bfc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x311bfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311c00: 0x8603003c  lh          $v1, 0x3C($s0)
    ctx->pc = 0x311c00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x311c04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x311c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x311c08: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x311C08u;
    {
        const bool branch_taken_0x311c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x311c08) {
            ctx->pc = 0x311C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311C08u;
            // 0x311c0c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311C1Cu;
            goto label_311c1c;
        }
    }
    ctx->pc = 0x311C10u;
    // 0x311c10: 0x92220270  lbu         $v0, 0x270($s1)
    ctx->pc = 0x311c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 624)));
    // 0x311c14: 0xa602003c  sh          $v0, 0x3C($s0)
    ctx->pc = 0x311c14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x311c18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x311c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_311c1c:
    // 0x311c1c: 0xc059856  jal         func_166158
    ctx->pc = 0x311C1Cu;
    SET_GPR_U32(ctx, 31, 0x311C24u);
    ctx->pc = 0x311C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311C1Cu;
    // 0x311c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x311C1Cu, 0x311C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311C24u;
label_311c24:
    // 0x311c24: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x311c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x311c28: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x311c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x311c2c: 0xc0a576c  jal         func_295DB0
    ctx->pc = 0x311C2Cu;
    SET_GPR_U32(ctx, 31, 0x311C34u);
    ctx->pc = 0x311C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311C2Cu;
    // 0x311c30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x311C2Cu, 0x311C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311C34u;
label_311c34:
    // 0x311c34: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x311c34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x311c38: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x311c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x311c3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x311c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311c40: 0x202280b  movn        $a1, $s0, $v0
    ctx->pc = 0x311c40u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    // 0x311c44: 0xc0a5776  jal         func_295DD8
    ctx->pc = 0x311C44u;
    SET_GPR_U32(ctx, 31, 0x311C4Cu);
    ctx->pc = 0x311C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311C44u;
    // 0x311c48: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DD8u, 0x311C44u, 0x311C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311C4Cu;
label_311c4c:
    // 0x311c4c: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x311c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x311c50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x311c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x311c54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x311c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311c58: 0xc0a5922  jal         func_296488
    ctx->pc = 0x311C58u;
    SET_GPR_U32(ctx, 31, 0x311C60u);
    ctx->pc = 0x311C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311C58u;
    // 0x311c5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296488u, 0x311C58u, 0x311C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311C60u;
label_311c60:
    // 0x311c60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x311c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x311c64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x311c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x311c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x311C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C6Cu;
        // 0x311c70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311C74u;
    // 0x311c74: 0x0  nop
    ctx->pc = 0x311c74u;
    // NOP
    ctx->pc = 0x311c78u;
}
