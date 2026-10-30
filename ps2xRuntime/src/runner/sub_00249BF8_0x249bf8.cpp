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

// Function: sub_00249BF8
// Address: 0x249bf8 - 0x249c9c
void sub_00249BF8_0x249bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249BF8_0x249bf8");
#endif

    switch (ctx->pc) {
        case 0x249bf8u: goto label_249bf8;
        case 0x249bfcu: goto label_249bfc;
        case 0x249c00u: goto label_249c00;
        case 0x249c04u: goto label_249c04;
        case 0x249c08u: goto label_249c08;
        case 0x249c0cu: goto label_249c0c;
        case 0x249c10u: goto label_249c10;
        case 0x249c14u: goto label_249c14;
        case 0x249c18u: goto label_249c18;
        case 0x249c1cu: goto label_249c1c;
        case 0x249c20u: goto label_249c20;
        case 0x249c24u: goto label_249c24;
        case 0x249c28u: goto label_249c28;
        case 0x249c2cu: goto label_249c2c;
        case 0x249c30u: goto label_249c30;
        case 0x249c34u: goto label_249c34;
        case 0x249c38u: goto label_249c38;
        case 0x249c3cu: goto label_249c3c;
        case 0x249c40u: goto label_249c40;
        case 0x249c44u: goto label_249c44;
        case 0x249c48u: goto label_249c48;
        case 0x249c4cu: goto label_249c4c;
        case 0x249c50u: goto label_249c50;
        case 0x249c54u: goto label_249c54;
        case 0x249c58u: goto label_249c58;
        case 0x249c5cu: goto label_249c5c;
        case 0x249c60u: goto label_249c60;
        case 0x249c64u: goto label_249c64;
        case 0x249c68u: goto label_249c68;
        case 0x249c6cu: goto label_249c6c;
        case 0x249c70u: goto label_249c70;
        case 0x249c74u: goto label_249c74;
        case 0x249c78u: goto label_249c78;
        case 0x249c7cu: goto label_249c7c;
        case 0x249c80u: goto label_249c80;
        case 0x249c84u: goto label_249c84;
        case 0x249c88u: goto label_249c88;
        case 0x249c8cu: goto label_249c8c;
        case 0x249c90u: goto label_249c90;
        case 0x249c94u: goto label_249c94;
        case 0x249c98u: goto label_249c98;
        default: break;
    }

    ctx->pc = 0x249bf8u;

label_249bf8:
    // 0x249bf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x249bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_249bfc:
    // 0x249bfc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x249bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_249c00:
    // 0x249c00: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x249c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_249c04:
    // 0x249c04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x249c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_249c08:
    // 0x249c08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x249c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_249c0c:
    // 0x249c0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_249c10:
    // 0x249c10: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_249c14:
    if (ctx->pc == 0x249C14u) {
        ctx->pc = 0x249C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C10u;
        // 0x249c14: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249C18u;
        goto label_249c18;
    }
    ctx->pc = 0x249C10u;
    {
        const bool branch_taken_0x249c10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x249C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C10u;
        // 0x249c14: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c10) {
            ctx->pc = 0x249C30u;
            goto label_249c30;
        }
    }
    ctx->pc = 0x249C18u;
label_249c18:
    // 0x249c18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x249c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_249c1c:
    // 0x249c1c: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x249c1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_249c20:
    // 0x249c20: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x249c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_249c24:
    // 0x249c24: 0x40f809  jalr        $v0
label_249c28:
    if (ctx->pc == 0x249C28u) {
        ctx->pc = 0x249C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C24u;
        // 0x249c28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249C2Cu;
        goto label_249c2c;
    }
    ctx->pc = 0x249C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x249C2Cu);
        ctx->pc = 0x249C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C24u;
        // 0x249c28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249C24u, 0x249C2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x249C2Cu;
label_249c2c:
    // 0x249c2c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x249c2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249c30:
    // 0x249c30: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x249c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_249c34:
    // 0x249c34: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_249c38:
    if (ctx->pc == 0x249C38u) {
        ctx->pc = 0x249C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C34u;
        // 0x249c38: 0x2c620011  sltiu       $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249C3Cu;
        goto label_249c3c;
    }
    ctx->pc = 0x249C34u;
    {
        const bool branch_taken_0x249c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x249C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C34u;
        // 0x249c38: 0x2c620011  sltiu       $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c34) {
            ctx->pc = 0x249C64u;
            goto label_249c64;
        }
    }
    ctx->pc = 0x249C3Cu;
label_249c3c:
    // 0x249c3c: 0x8e050214  lw          $a1, 0x214($s0)
    ctx->pc = 0x249c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_249c40:
    // 0x249c40: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_249c44:
    if (ctx->pc == 0x249C44u) {
        ctx->pc = 0x249C48u;
        goto label_249c48;
    }
    ctx->pc = 0x249C40u;
    {
        const bool branch_taken_0x249c40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x249c40) {
            ctx->pc = 0x249C64u;
            goto label_249c64;
        }
    }
    ctx->pc = 0x249C48u;
label_249c48:
    // 0x249c48: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x249c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_249c4c:
    // 0x249c4c: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x249c4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_249c50:
    // 0x249c50: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x249c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_249c54:
    // 0x249c54: 0x40f809  jalr        $v0
label_249c58:
    if (ctx->pc == 0x249C58u) {
        ctx->pc = 0x249C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C54u;
        // 0x249c58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249C5Cu;
        goto label_249c5c;
    }
    ctx->pc = 0x249C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x249C5Cu);
        ctx->pc = 0x249C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C54u;
        // 0x249c58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249C54u, 0x249C5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x249C5Cu;
label_249c5c:
    // 0x249c5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x249c5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249c60:
    // 0x249c60: 0x2c620011  sltiu       $v0, $v1, 0x11
    ctx->pc = 0x249c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_249c64:
    // 0x249c64: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_249c68:
    if (ctx->pc == 0x249C68u) {
        ctx->pc = 0x249C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C64u;
        // 0x249c68: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249C6Cu;
        goto label_249c6c;
    }
    ctx->pc = 0x249C64u;
    {
        const bool branch_taken_0x249c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C64u;
        // 0x249c68: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c64) {
            ctx->pc = 0x249C9Cu;
            return;
        }
    }
    ctx->pc = 0x249C6Cu;
label_249c6c:
    // 0x249c6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x249c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_249c70:
    // 0x249c70: 0x2442ce40  addiu       $v0, $v0, -0x31C0
    ctx->pc = 0x249c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954560));
label_249c74:
    // 0x249c74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x249c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_249c78:
    // 0x249c78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x249c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_249c7c:
    // 0x249c7c: 0x800008  jr          $a0
label_249c80:
    if (ctx->pc == 0x249C80u) {
        ctx->pc = 0x249C84u;
        goto label_249c84;
    }
    ctx->pc = 0x249C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x249C84u: goto label_249c84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249C7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x249C84u;
label_249c84:
    // 0x249c84: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x249c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_249c88:
    // 0x249c88: 0x2446cdc8  addiu       $a2, $v0, -0x3238
    ctx->pc = 0x249c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954440));
label_249c8c:
    // 0x249c8c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x249c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_249c90:
    // 0x249c90: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x249c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_249c94:
    // 0x249c94: 0xb22301c3  sdl         $v1, 0x1C3($s1)
    ctx->pc = 0x249c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_249c98:
    // 0x249c98: 0xb62301bc  sdr         $v1, 0x1BC($s1)
    ctx->pc = 0x249c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->pc = 0x249c9cu;
}
