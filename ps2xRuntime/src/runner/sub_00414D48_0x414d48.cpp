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

// Function: sub_00414D48
// Address: 0x414d48 - 0x414ed0
void sub_00414D48_0x414d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414D48_0x414d48");
#endif

    switch (ctx->pc) {
        case 0x414d48u: goto label_414d48;
        case 0x414d4cu: goto label_414d4c;
        case 0x414d50u: goto label_414d50;
        case 0x414d54u: goto label_414d54;
        case 0x414d58u: goto label_414d58;
        case 0x414d5cu: goto label_414d5c;
        case 0x414d60u: goto label_414d60;
        case 0x414d64u: goto label_414d64;
        case 0x414d68u: goto label_414d68;
        case 0x414d6cu: goto label_414d6c;
        case 0x414d70u: goto label_414d70;
        case 0x414d74u: goto label_414d74;
        case 0x414d78u: goto label_414d78;
        case 0x414d7cu: goto label_414d7c;
        case 0x414d80u: goto label_414d80;
        case 0x414d84u: goto label_414d84;
        case 0x414d88u: goto label_414d88;
        case 0x414d8cu: goto label_414d8c;
        case 0x414d90u: goto label_414d90;
        case 0x414d94u: goto label_414d94;
        case 0x414d98u: goto label_414d98;
        case 0x414d9cu: goto label_414d9c;
        case 0x414da0u: goto label_414da0;
        case 0x414da4u: goto label_414da4;
        case 0x414da8u: goto label_414da8;
        case 0x414dacu: goto label_414dac;
        case 0x414db0u: goto label_414db0;
        case 0x414db4u: goto label_414db4;
        case 0x414db8u: goto label_414db8;
        case 0x414dbcu: goto label_414dbc;
        case 0x414dc0u: goto label_414dc0;
        case 0x414dc4u: goto label_414dc4;
        case 0x414dc8u: goto label_414dc8;
        case 0x414dccu: goto label_414dcc;
        case 0x414dd0u: goto label_414dd0;
        case 0x414dd4u: goto label_414dd4;
        case 0x414dd8u: goto label_414dd8;
        case 0x414ddcu: goto label_414ddc;
        case 0x414de0u: goto label_414de0;
        case 0x414de4u: goto label_414de4;
        case 0x414de8u: goto label_414de8;
        case 0x414decu: goto label_414dec;
        case 0x414df0u: goto label_414df0;
        case 0x414df4u: goto label_414df4;
        case 0x414df8u: goto label_414df8;
        case 0x414dfcu: goto label_414dfc;
        case 0x414e00u: goto label_414e00;
        case 0x414e04u: goto label_414e04;
        case 0x414e08u: goto label_414e08;
        case 0x414e0cu: goto label_414e0c;
        case 0x414e10u: goto label_414e10;
        case 0x414e14u: goto label_414e14;
        case 0x414e18u: goto label_414e18;
        case 0x414e1cu: goto label_414e1c;
        case 0x414e20u: goto label_414e20;
        case 0x414e24u: goto label_414e24;
        case 0x414e28u: goto label_414e28;
        case 0x414e2cu: goto label_414e2c;
        case 0x414e30u: goto label_414e30;
        case 0x414e34u: goto label_414e34;
        case 0x414e38u: goto label_414e38;
        case 0x414e3cu: goto label_414e3c;
        case 0x414e40u: goto label_414e40;
        case 0x414e44u: goto label_414e44;
        case 0x414e48u: goto label_414e48;
        case 0x414e4cu: goto label_414e4c;
        case 0x414e50u: goto label_414e50;
        case 0x414e54u: goto label_414e54;
        case 0x414e58u: goto label_414e58;
        case 0x414e5cu: goto label_414e5c;
        case 0x414e60u: goto label_414e60;
        case 0x414e64u: goto label_414e64;
        case 0x414e68u: goto label_414e68;
        case 0x414e6cu: goto label_414e6c;
        case 0x414e70u: goto label_414e70;
        case 0x414e74u: goto label_414e74;
        case 0x414e78u: goto label_414e78;
        case 0x414e7cu: goto label_414e7c;
        case 0x414e80u: goto label_414e80;
        case 0x414e84u: goto label_414e84;
        case 0x414e88u: goto label_414e88;
        case 0x414e8cu: goto label_414e8c;
        case 0x414e90u: goto label_414e90;
        case 0x414e94u: goto label_414e94;
        case 0x414e98u: goto label_414e98;
        case 0x414e9cu: goto label_414e9c;
        case 0x414ea0u: goto label_414ea0;
        case 0x414ea4u: goto label_414ea4;
        case 0x414ea8u: goto label_414ea8;
        case 0x414eacu: goto label_414eac;
        case 0x414eb0u: goto label_414eb0;
        case 0x414eb4u: goto label_414eb4;
        case 0x414eb8u: goto label_414eb8;
        case 0x414ebcu: goto label_414ebc;
        case 0x414ec0u: goto label_414ec0;
        case 0x414ec4u: goto label_414ec4;
        case 0x414ec8u: goto label_414ec8;
        case 0x414eccu: goto label_414ecc;
        default: break;
    }

    ctx->pc = 0x414d48u;

label_414d48:
    // 0x414d48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x414d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_414d4c:
    // 0x414d4c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x414d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_414d50:
    // 0x414d50: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x414d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_414d54:
    // 0x414d54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x414d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_414d58:
    // 0x414d58: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x414d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_414d5c:
    // 0x414d5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x414d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_414d60:
    // 0x414d60: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x414d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_414d64:
    // 0x414d64: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x414d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_414d68:
    // 0x414d68: 0x1a000050  blez        $s0, . + 4 + (0x50 << 2)
label_414d6c:
    if (ctx->pc == 0x414D6Cu) {
        ctx->pc = 0x414D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414D68u;
        // 0x414d6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414D70u;
        goto label_414d70;
    }
    ctx->pc = 0x414D68u;
    {
        const bool branch_taken_0x414d68 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x414D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414D68u;
        // 0x414d6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414d68) {
            ctx->pc = 0x414EACu;
            goto label_414eac;
        }
    }
    ctx->pc = 0x414D70u;
label_414d70:
    // 0x414d70: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x414d70u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_414d74:
    // 0x414d74: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x414d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_414d78:
    // 0x414d78: 0x8e8a27e4  lw          $t2, 0x27E4($s4)
    ctx->pc = 0x414d78u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_414d7c:
    // 0x414d7c: 0x24554834  addiu       $s5, $v0, 0x4834
    ctx->pc = 0x414d7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 18484));
label_414d80:
    // 0x414d80: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x414d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_414d84:
    // 0x414d84: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x414d84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_414d88:
    // 0x414d88: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x414d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_414d8c:
    // 0x414d8c: 0x24a591f0  addiu       $a1, $a1, -0x6E10
    ctx->pc = 0x414d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939120));
label_414d90:
    // 0x414d90: 0x25089210  addiu       $t0, $t0, -0x6DF0
    ctx->pc = 0x414d90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939152));
label_414d94:
    // 0x414d94: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x414d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_414d98:
    // 0x414d98: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x414d98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_414d9c:
    // 0x414d9c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x414d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_414da0:
    // 0x414da0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x414da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_414da4:
    // 0x414da4: 0x2409000f  addiu       $t1, $zero, 0xF
    ctx->pc = 0x414da4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_414da8:
    // 0x414da8: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x414da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_414dac:
    // 0x414dac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x414dacu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414db0:
    // 0x414db0: 0x40f809  jalr        $v0
label_414db4:
    if (ctx->pc == 0x414DB4u) {
        ctx->pc = 0x414DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414DB0u;
        // 0x414db4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414DB8u;
        goto label_414db8;
    }
    ctx->pc = 0x414DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414DB8u);
        ctx->pc = 0x414DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414DB0u;
        // 0x414db4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414DB0u, 0x414DB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414DB8u;
label_414db8:
    // 0x414db8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x414db8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414dbc:
    // 0x414dbc: 0x1240003a  beqz        $s2, . + 4 + (0x3A << 2)
label_414dc0:
    if (ctx->pc == 0x414DC0u) {
        ctx->pc = 0x414DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414DBCu;
        // 0x414dc0: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414DC4u;
        goto label_414dc4;
    }
    ctx->pc = 0x414DBCu;
    {
        const bool branch_taken_0x414dbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x414DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414DBCu;
        // 0x414dc0: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414dbc) {
            ctx->pc = 0x414EA8u;
            goto label_414ea8;
        }
    }
    ctx->pc = 0x414DC4u;
label_414dc4:
    // 0x414dc4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x414dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_414dc8:
    // 0x414dc8: 0xae50000c  sw          $s0, 0xC($s2)
    ctx->pc = 0x414dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
label_414dcc:
    // 0x414dcc: 0x24425d28  addiu       $v0, $v0, 0x5D28
    ctx->pc = 0x414dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23848));
label_414dd0:
    // 0x414dd0: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x414dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_414dd4:
    // 0x414dd4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x414dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_414dd8:
    // 0x414dd8: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x414dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_414ddc:
    // 0x414ddc: 0x8e8927e4  lw          $t1, 0x27E4($s4)
    ctx->pc = 0x414ddcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_414de0:
    // 0x414de0: 0x2060018  mult        $zero, $s0, $a2
    ctx->pc = 0x414de0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_414de4:
    // 0x414de4: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x414de4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_414de8:
    // 0x414de8: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x414de8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
label_414dec:
    // 0x414dec: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x414decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_414df0:
    // 0x414df0: 0x261091b8  addiu       $s0, $s0, -0x6E48
    ctx->pc = 0x414df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939064));
label_414df4:
    // 0x414df4: 0x263191c0  addiu       $s1, $s1, -0x6E40
    ctx->pc = 0x414df4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939072));
label_414df8:
    // 0x414df8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x414df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_414dfc:
    // 0x414dfc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x414dfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_414e00:
    // 0x414e00: 0x3012  mflo        $a2
    ctx->pc = 0x414e00u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_414e04:
    // 0x414e04: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x414e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_414e08:
    // 0x414e08: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x414e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_414e0c:
    // 0x414e0c: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x414e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_414e10:
    // 0x414e10: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x414e10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_414e14:
    // 0x414e14: 0x2409001b  addiu       $t1, $zero, 0x1B
    ctx->pc = 0x414e14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_414e18:
    // 0x414e18: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x414e18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414e1c:
    // 0x414e1c: 0x40f809  jalr        $v0
label_414e20:
    if (ctx->pc == 0x414E20u) {
        ctx->pc = 0x414E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414E1Cu;
        // 0x414e20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414E24u;
        goto label_414e24;
    }
    ctx->pc = 0x414E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414E24u);
        ctx->pc = 0x414E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414E1Cu;
        // 0x414e20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414E1Cu, 0x414E24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414E24u;
label_414e24:
    // 0x414e24: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x414e24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_414e28:
    // 0x414e28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x414e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_414e2c:
    // 0x414e2c: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x414e2cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_414e30:
    // 0x414e30: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x414e30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_414e34:
    // 0x414e34: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x414e34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_414e38:
    // 0x414e38: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x414e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_414e3c:
    // 0x414e3c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x414e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_414e40:
    // 0x414e40: 0x2409001c  addiu       $t1, $zero, 0x1C
    ctx->pc = 0x414e40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_414e44:
    // 0x414e44: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x414e44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_414e48:
    // 0x414e48: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x414e48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414e4c:
    // 0x414e4c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x414e4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_414e50:
    // 0x414e50: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x414e50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414e54:
    // 0x414e54: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x414e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_414e58:
    // 0x414e58: 0x40f809  jalr        $v0
label_414e5c:
    if (ctx->pc == 0x414E5Cu) {
        ctx->pc = 0x414E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414E58u;
        // 0x414e5c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414E60u;
        goto label_414e60;
    }
    ctx->pc = 0x414E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414E60u);
        ctx->pc = 0x414E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414E58u;
        // 0x414e5c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414E58u, 0x414E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414E60u;
label_414e60:
    // 0x414e60: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x414e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_414e64:
    // 0x414e64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x414e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414e68:
    // 0x414e68: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_414e6c:
    if (ctx->pc == 0x414E6Cu) {
        ctx->pc = 0x414E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414E68u;
        // 0x414e6c: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414E70u;
        goto label_414e70;
    }
    ctx->pc = 0x414E68u;
    {
        const bool branch_taken_0x414e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x414E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414E68u;
        // 0x414e6c: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414e68) {
            ctx->pc = 0x414EA4u;
            goto label_414ea4;
        }
    }
    ctx->pc = 0x414E70u;
label_414e70:
    // 0x414e70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x414e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414e74:
    // 0x414e74: 0x0  nop
    ctx->pc = 0x414e74u;
    // NOP
label_414e78:
    // 0x414e78: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x414e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_414e7c:
    // 0x414e7c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x414e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_414e80:
    // 0x414e80: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x414e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_414e84:
    // 0x414e84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x414e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_414e88:
    // 0x414e88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x414e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_414e8c:
    // 0x414e8c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x414e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_414e90:
    // 0x414e90: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x414e90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_414e94:
    // 0x414e94: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x414e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_414e98:
    // 0x414e98: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x414e98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_414e9c:
    // 0x414e9c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_414ea0:
    if (ctx->pc == 0x414EA0u) {
        ctx->pc = 0x414EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414E9Cu;
        // 0x414ea0: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414EA4u;
        goto label_414ea4;
    }
    ctx->pc = 0x414E9Cu;
    {
        const bool branch_taken_0x414e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x414EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414E9Cu;
        // 0x414ea0: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414e9c) {
            ctx->pc = 0x414E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_414e78;
        }
    }
    ctx->pc = 0x414EA4u;
label_414ea4:
    // 0x414ea4: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x414ea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_414ea8:
    // 0x414ea8: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x414ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
label_414eac:
    // 0x414eac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x414eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_414eb0:
    // 0x414eb0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x414eb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_414eb4:
    // 0x414eb4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x414eb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_414eb8:
    // 0x414eb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x414eb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_414ebc:
    // 0x414ebc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x414ebcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_414ec0:
    // 0x414ec0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x414ec0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_414ec4:
    // 0x414ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x414ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_414ec8:
    // 0x414ec8: 0x3e00008  jr          $ra
label_414ecc:
    if (ctx->pc == 0x414ECCu) {
        ctx->pc = 0x414ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414EC8u;
        // 0x414ecc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414ED0u;
        goto label_fallthrough_0x414ec8;
    }
    ctx->pc = 0x414EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414EC8u;
        // 0x414ecc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x414ec8:
    ctx->pc = 0x414ED0u;
}
