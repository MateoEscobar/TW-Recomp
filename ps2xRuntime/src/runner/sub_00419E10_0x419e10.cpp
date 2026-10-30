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

// Function: sub_00419E10
// Address: 0x419e10 - 0x419ee0
void sub_00419E10_0x419e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419E10_0x419e10");
#endif

    switch (ctx->pc) {
        case 0x419e64u: goto label_419e64;
        case 0x419e9cu: goto label_419e9c;
        default: break;
    }

    ctx->pc = 0x419e10u;

    // 0x419e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x419e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x419e14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x419e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x419e18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x419e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x419e1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x419e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x419e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x419e24: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x419e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419e28: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x419e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419e2c: 0x822801b0  lb          $t0, 0x1B0($s1)
    ctx->pc = 0x419e2cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x419e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x419e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419e34: 0x820701b0  lb          $a3, 0x1B0($s0)
    ctx->pc = 0x419e34u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x419e38: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x419e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x419e3c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x419e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x419e40: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x419e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x419e44: 0x8c650228  lw          $a1, 0x228($v1)
    ctx->pc = 0x419e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 552)));
    // 0x419e48: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x419e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x419e4c: 0x8c460228  lw          $a2, 0x228($v0)
    ctx->pc = 0x419e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 552)));
    // 0x419e50: 0xac450228  sw          $a1, 0x228($v0)
    ctx->pc = 0x419e50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 5));
    // 0x419e54: 0xac660228  sw          $a2, 0x228($v1)
    ctx->pc = 0x419e54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 552), GPR_U32(ctx, 6));
    // 0x419e58: 0xa20801b0  sb          $t0, 0x1B0($s0)
    ctx->pc = 0x419e58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 432), (uint8_t)GPR_U32(ctx, 8));
    // 0x419e5c: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x419E5Cu;
    SET_GPR_U32(ctx, 31, 0x419E64u);
    ctx->pc = 0x419E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419E5Cu;
    // 0x419e60: 0xa22701b0  sb          $a3, 0x1B0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 432), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x419E5Cu, 0x419E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419E64u;
label_419e64:
    // 0x419e64: 0x80440019  lb          $a0, 0x19($v0)
    ctx->pc = 0x419e64u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x419e68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x419e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x419e6c: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x419E6Cu;
    {
        const bool branch_taken_0x419e6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x419E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419E6Cu;
        // 0x419e70: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419e6c) {
            ctx->pc = 0x419E88u;
            goto label_419e88;
        }
    }
    ctx->pc = 0x419E74u;
    // 0x419e74: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x419e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x419e78: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x419e78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x419e7c: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x419e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x419e80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x419E80u;
    {
        const bool branch_taken_0x419e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x419E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419E80u;
        // 0x419e84: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419e80) {
            ctx->pc = 0x419E8Cu;
            goto label_419e8c;
        }
    }
    ctx->pc = 0x419E88u;
label_419e88:
    // 0x419e88: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x419e88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_419e8c:
    // 0x419e8c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x419e8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x419e90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x419e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419e94: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x419E94u;
    SET_GPR_U32(ctx, 31, 0x419E9Cu);
    ctx->pc = 0x419E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419E94u;
    // 0x419e98: 0xa4620042  sh          $v0, 0x42($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 66), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x419E94u, 0x419E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419E9Cu;
label_419e9c:
    // 0x419e9c: 0x80440019  lb          $a0, 0x19($v0)
    ctx->pc = 0x419e9cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x419ea0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x419ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x419ea4: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x419EA4u;
    {
        const bool branch_taken_0x419ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x419EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419EA4u;
        // 0x419ea8: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419ea4) {
            ctx->pc = 0x419EC0u;
            goto label_419ec0;
        }
    }
    ctx->pc = 0x419EACu;
    // 0x419eac: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x419eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x419eb0: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x419eb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x419eb4: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x419eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x419eb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x419EB8u;
    {
        const bool branch_taken_0x419eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x419EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419EB8u;
        // 0x419ebc: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419eb8) {
            ctx->pc = 0x419EC4u;
            goto label_419ec4;
        }
    }
    ctx->pc = 0x419EC0u;
label_419ec0:
    // 0x419ec0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x419ec0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_419ec4:
    // 0x419ec4: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x419ec4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x419ec8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x419ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x419ecc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x419eccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x419ed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x419ed4: 0xa4620042  sh          $v0, 0x42($v1)
    ctx->pc = 0x419ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 66), (uint16_t)GPR_U32(ctx, 2));
    // 0x419ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x419ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419ED8u;
        // 0x419edc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419EE0u;
}
