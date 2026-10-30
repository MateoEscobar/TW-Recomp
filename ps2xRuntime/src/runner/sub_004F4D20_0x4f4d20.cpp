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

// Function: sub_004F4D20
// Address: 0x4f4d20 - 0x4f4e98
void sub_004F4D20_0x4f4d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4D20_0x4f4d20");
#endif

    switch (ctx->pc) {
        case 0x4f4d20u: goto label_4f4d20;
        case 0x4f4d24u: goto label_4f4d24;
        case 0x4f4d28u: goto label_4f4d28;
        case 0x4f4d2cu: goto label_4f4d2c;
        case 0x4f4d30u: goto label_4f4d30;
        case 0x4f4d34u: goto label_4f4d34;
        case 0x4f4d38u: goto label_4f4d38;
        case 0x4f4d3cu: goto label_4f4d3c;
        case 0x4f4d40u: goto label_4f4d40;
        case 0x4f4d44u: goto label_4f4d44;
        case 0x4f4d48u: goto label_4f4d48;
        case 0x4f4d4cu: goto label_4f4d4c;
        case 0x4f4d50u: goto label_4f4d50;
        case 0x4f4d54u: goto label_4f4d54;
        case 0x4f4d58u: goto label_4f4d58;
        case 0x4f4d5cu: goto label_4f4d5c;
        case 0x4f4d60u: goto label_4f4d60;
        case 0x4f4d64u: goto label_4f4d64;
        case 0x4f4d68u: goto label_4f4d68;
        case 0x4f4d6cu: goto label_4f4d6c;
        case 0x4f4d70u: goto label_4f4d70;
        case 0x4f4d74u: goto label_4f4d74;
        case 0x4f4d78u: goto label_4f4d78;
        case 0x4f4d7cu: goto label_4f4d7c;
        case 0x4f4d80u: goto label_4f4d80;
        case 0x4f4d84u: goto label_4f4d84;
        case 0x4f4d88u: goto label_4f4d88;
        case 0x4f4d8cu: goto label_4f4d8c;
        case 0x4f4d90u: goto label_4f4d90;
        case 0x4f4d94u: goto label_4f4d94;
        case 0x4f4d98u: goto label_4f4d98;
        case 0x4f4d9cu: goto label_4f4d9c;
        case 0x4f4da0u: goto label_4f4da0;
        case 0x4f4da4u: goto label_4f4da4;
        case 0x4f4da8u: goto label_4f4da8;
        case 0x4f4dacu: goto label_4f4dac;
        case 0x4f4db0u: goto label_4f4db0;
        case 0x4f4db4u: goto label_4f4db4;
        case 0x4f4db8u: goto label_4f4db8;
        case 0x4f4dbcu: goto label_4f4dbc;
        case 0x4f4dc0u: goto label_4f4dc0;
        case 0x4f4dc4u: goto label_4f4dc4;
        case 0x4f4dc8u: goto label_4f4dc8;
        case 0x4f4dccu: goto label_4f4dcc;
        case 0x4f4dd0u: goto label_4f4dd0;
        case 0x4f4dd4u: goto label_4f4dd4;
        case 0x4f4dd8u: goto label_4f4dd8;
        case 0x4f4ddcu: goto label_4f4ddc;
        case 0x4f4de0u: goto label_4f4de0;
        case 0x4f4de4u: goto label_4f4de4;
        case 0x4f4de8u: goto label_4f4de8;
        case 0x4f4decu: goto label_4f4dec;
        case 0x4f4df0u: goto label_4f4df0;
        case 0x4f4df4u: goto label_4f4df4;
        case 0x4f4df8u: goto label_4f4df8;
        case 0x4f4dfcu: goto label_4f4dfc;
        case 0x4f4e00u: goto label_4f4e00;
        case 0x4f4e04u: goto label_4f4e04;
        case 0x4f4e08u: goto label_4f4e08;
        case 0x4f4e0cu: goto label_4f4e0c;
        case 0x4f4e10u: goto label_4f4e10;
        case 0x4f4e14u: goto label_4f4e14;
        case 0x4f4e18u: goto label_4f4e18;
        case 0x4f4e1cu: goto label_4f4e1c;
        case 0x4f4e20u: goto label_4f4e20;
        case 0x4f4e24u: goto label_4f4e24;
        case 0x4f4e28u: goto label_4f4e28;
        case 0x4f4e2cu: goto label_4f4e2c;
        case 0x4f4e30u: goto label_4f4e30;
        case 0x4f4e34u: goto label_4f4e34;
        case 0x4f4e38u: goto label_4f4e38;
        case 0x4f4e3cu: goto label_4f4e3c;
        case 0x4f4e40u: goto label_4f4e40;
        case 0x4f4e44u: goto label_4f4e44;
        case 0x4f4e48u: goto label_4f4e48;
        case 0x4f4e4cu: goto label_4f4e4c;
        case 0x4f4e50u: goto label_4f4e50;
        case 0x4f4e54u: goto label_4f4e54;
        case 0x4f4e58u: goto label_4f4e58;
        case 0x4f4e5cu: goto label_4f4e5c;
        case 0x4f4e60u: goto label_4f4e60;
        case 0x4f4e64u: goto label_4f4e64;
        case 0x4f4e68u: goto label_4f4e68;
        case 0x4f4e6cu: goto label_4f4e6c;
        case 0x4f4e70u: goto label_4f4e70;
        case 0x4f4e74u: goto label_4f4e74;
        case 0x4f4e78u: goto label_4f4e78;
        case 0x4f4e7cu: goto label_4f4e7c;
        case 0x4f4e80u: goto label_4f4e80;
        case 0x4f4e84u: goto label_4f4e84;
        case 0x4f4e88u: goto label_4f4e88;
        case 0x4f4e8cu: goto label_4f4e8c;
        case 0x4f4e90u: goto label_4f4e90;
        case 0x4f4e94u: goto label_4f4e94;
        default: break;
    }

    ctx->pc = 0x4f4d20u;

label_4f4d20:
    // 0x4f4d20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4f4d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f4d24:
    // 0x4f4d24: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x4f4d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_4f4d28:
    // 0x4f4d28: 0xc2001b  divu        $zero, $a2, $v0
    ctx->pc = 0x4f4d28u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_4f4d2c:
    // 0x4f4d2c: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4f4d2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4f4d30:
    // 0x4f4d30: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4f4d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_4f4d34:
    // 0x4f4d34: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x4f4d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4f4d38:
    // 0x4f4d38: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4f4d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_4f4d3c:
    // 0x4f4d3c: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x4f4d3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4f4d40:
    // 0x4f4d40: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4f4d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_4f4d44:
    // 0x4f4d44: 0x27ad0004  addiu       $t5, $sp, 0x4
    ctx->pc = 0x4f4d44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_4f4d48:
    // 0x4f4d48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f4d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4f4d4c:
    // 0x4f4d4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4f4d4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f4d50:
    // 0x4f4d50: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4f4d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_4f4d54:
    // 0x4f4d54: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x4f4d54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_4f4d58:
    // 0x4f4d58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f4d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f4d5c:
    // 0x4f4d5c: 0x3c0a0059  lui         $t2, 0x59
    ctx->pc = 0x4f4d5cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)89 << 16));
label_4f4d60:
    // 0x4f4d60: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_4f4d64:
    if (ctx->pc == 0x4F4D64u) {
        ctx->pc = 0x4F4D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4D60u;
        // 0x4f4d64: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4D68u;
        goto label_4f4d68;
    }
    ctx->pc = 0x4F4D60u;
    {
        const bool branch_taken_0x4f4d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f4d60) {
            ctx->pc = 0x4F4D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F4D60u;
            // 0x4f4d64: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F4D68u;
            goto label_4f4d68;
        }
    }
    ctx->pc = 0x4F4D68u;
label_4f4d68:
    // 0x4f4d68: 0x25088a50  addiu       $t0, $t0, -0x75B0
    ctx->pc = 0x4f4d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937168));
label_4f4d6c:
    // 0x4f4d6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f4d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f4d70:
    // 0x4f4d70: 0x8c4eb9c0  lw          $t6, -0x4640($v0)
    ctx->pc = 0x4f4d70u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4f4d74:
    // 0x4f4d74: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4f4d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_4f4d78:
    // 0x4f4d78: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x4f4d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
label_4f4d7c:
    // 0x4f4d7c: 0x254a8a78  addiu       $t2, $t2, -0x7588
    ctx->pc = 0x4f4d7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294937208));
label_4f4d80:
    // 0x4f4d80: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4f4d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f4d84:
    // 0x4f4d84: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4f4d84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4f4d88:
    // 0x4f4d88: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4f4d88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f4d8c:
    // 0x4f4d8c: 0x3012  mflo        $a2
    ctx->pc = 0x4f4d8cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_4f4d90:
    // 0x4f4d90: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x4f4d90u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_4f4d94:
    // 0x4f4d94: 0x24658a48  addiu       $a1, $v1, -0x75B8
    ctx->pc = 0x4f4d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937160));
label_4f4d98:
    // 0x4f4d98: 0x8812  mflo        $s1
    ctx->pc = 0x4f4d98u;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_4f4d9c:
    // 0x4f4d9c: 0xa010  mfhi        $s4
    ctx->pc = 0x4f4d9cu;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_4f4da0:
    // 0x4f4da0: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x4f4da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
label_4f4da4:
    // 0x4f4da4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4f4da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_4f4da8:
    // 0x4f4da8: 0x182602b  sltu        $t4, $t4, $v0
    ctx->pc = 0x4f4da8u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4f4dac:
    // 0x4f4dac: 0x3ac680a  movz        $t5, $sp, $t4
    ctx->pc = 0x4f4dacu;
    if (GPR_U64(ctx, 12) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 29));
label_4f4db0:
    // 0x4f4db0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4f4db0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4f4db4:
    // 0x4f4db4: 0x8da60000  lw          $a2, 0x0($t5)
    ctx->pc = 0x4f4db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_4f4db8:
    // 0x4f4db8: 0xae460008  sw          $a2, 0x8($s2)
    ctx->pc = 0x4f4db8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 6));
label_4f4dbc:
    // 0x4f4dbc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4f4dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4f4dc0:
    // 0x4f4dc0: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x4f4dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_4f4dc4:
    // 0x4f4dc4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4f4dc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4f4dc8:
    // 0x4f4dc8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4f4dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4f4dcc:
    // 0x4f4dcc: 0x40f809  jalr        $v0
label_4f4dd0:
    if (ctx->pc == 0x4F4DD0u) {
        ctx->pc = 0x4F4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4DCCu;
        // 0x4f4dd0: 0x1c42021  addu        $a0, $t6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4DD4u;
        goto label_4f4dd4;
    }
    ctx->pc = 0x4F4DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F4DD4u);
        ctx->pc = 0x4F4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4DCCu;
        // 0x4f4dd0: 0x1c42021  addu        $a0, $t6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4DCCu, 0x4F4DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F4DD4u;
label_4f4dd4:
    // 0x4f4dd4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4f4dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4f4dd8:
    // 0x4f4dd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4f4dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f4ddc:
    // 0x4f4ddc: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x4f4ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_4f4de0:
    // 0x4f4de0: 0x119880  sll         $s3, $s1, 2
    ctx->pc = 0x4f4de0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_4f4de4:
    // 0x4f4de4: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x4f4de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4f4de8:
    // 0x4f4de8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f4de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f4dec:
    // 0x4f4dec: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x4f4decu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_4f4df0:
    // 0x4f4df0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f4df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f4df4:
    // 0x4f4df4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x4f4df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_4f4df8:
    // 0x4f4df8: 0x2139821  addu        $s3, $s0, $s3
    ctx->pc = 0x4f4df8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_4f4dfc:
    // 0x4f4dfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f4dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f4e00:
    // 0x4f4e00: 0xc13d318  jal         func_4F4C60
label_4f4e04:
    if (ctx->pc == 0x4F4E04u) {
        ctx->pc = 0x4F4E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4E00u;
        // 0x4f4e04: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4E08u;
        goto label_4f4e08;
    }
    ctx->pc = 0x4F4E00u;
    SET_GPR_U32(ctx, 31, 0x4F4E08u);
    ctx->pc = 0x4F4E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4E00u;
    // 0x4f4e04: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4C60u, 0x4F4E00u, 0x4F4E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4E08u;
label_4f4e08:
    // 0x4f4e08: 0x2643000c  addiu       $v1, $s2, 0xC
    ctx->pc = 0x4f4e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_4f4e0c:
    // 0x4f4e0c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4f4e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f4e10:
    // 0x4f4e10: 0xac70000c  sw          $s0, 0xC($v1)
    ctx->pc = 0x4f4e10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
label_4f4e14:
    // 0x4f4e14: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x4f4e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_4f4e18:
    // 0x4f4e18: 0x2665fffc  addiu       $a1, $s3, -0x4
    ctx->pc = 0x4f4e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_4f4e1c:
    // 0x4f4e1c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4f4e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f4e20:
    // 0x4f4e20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f4e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f4e24:
    // 0x4f4e24: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x4f4e24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f4e28:
    // 0x4f4e28: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x4f4e28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4f4e2c:
    // 0x4f4e2c: 0x14a080  sll         $s4, $s4, 2
    ctx->pc = 0x4f4e2cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_4f4e30:
    // 0x4f4e30: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x4f4e30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_4f4e34:
    // 0x4f4e34: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_4f4e38:
    if (ctx->pc == 0x4F4E38u) {
        ctx->pc = 0x4F4E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4E34u;
        // 0x4f4e38: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4E3Cu;
        goto label_4f4e3c;
    }
    ctx->pc = 0x4F4E34u;
    {
        const bool branch_taken_0x4f4e34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f4e34) {
            ctx->pc = 0x4F4E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F4E34u;
            // 0x4f4e38: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F4E3Cu;
            goto label_4f4e3c;
        }
    }
    ctx->pc = 0x4F4E3Cu;
label_4f4e3c:
    // 0x4f4e3c: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x4f4e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
label_4f4e40:
    // 0x4f4e40: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x4f4e40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_4f4e44:
    // 0x4f4e44: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x4f4e44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_4f4e48:
    // 0x4f4e48: 0x8e62fffc  lw          $v0, -0x4($s3)
    ctx->pc = 0x4f4e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967292)));
label_4f4e4c:
    // 0x4f4e4c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4f4e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4f4e50:
    // 0x4f4e50: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x4f4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
label_4f4e54:
    // 0x4f4e54: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4f4e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4f4e58:
    // 0x4f4e58: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x4f4e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4f4e5c:
    // 0x4f4e5c: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x4f4e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_4f4e60:
    // 0x4f4e60: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x4f4e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_4f4e64:
    // 0x4f4e64: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4f4e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4f4e68:
    // 0x4f4e68: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4f4e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_4f4e6c:
    // 0x4f4e6c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4f4e6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f4e70:
    // 0x4f4e70: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x4f4e70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_4f4e74:
    // 0x4f4e74: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4f4e74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f4e78:
    // 0x4f4e78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f4e78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f4e7c:
    // 0x4f4e7c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4f4e7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f4e80:
    // 0x4f4e80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f4e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f4e84:
    // 0x4f4e84: 0x3e00008  jr          $ra
label_4f4e88:
    if (ctx->pc == 0x4F4E88u) {
        ctx->pc = 0x4F4E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4E84u;
        // 0x4f4e88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4E8Cu;
        goto label_4f4e8c;
    }
    ctx->pc = 0x4F4E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4E84u;
        // 0x4f4e88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F4E8Cu;
label_4f4e8c:
    // 0x4f4e8c: 0x0  nop
    ctx->pc = 0x4f4e8cu;
    // NOP
label_4f4e90:
    // 0x4f4e90: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x4f4e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4f4e94:
    // 0x4f4e94: 0x0  nop
    ctx->pc = 0x4f4e94u;
    // NOP
    ctx->pc = 0x4f4e98u;
}
