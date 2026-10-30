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

// Function: sub_00448DD8
// Address: 0x448dd8 - 0x448f54
void sub_00448DD8_0x448dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00448DD8_0x448dd8");
#endif

    switch (ctx->pc) {
        case 0x448dd8u: goto label_448dd8;
        case 0x448ddcu: goto label_448ddc;
        case 0x448de0u: goto label_448de0;
        case 0x448de4u: goto label_448de4;
        case 0x448de8u: goto label_448de8;
        case 0x448decu: goto label_448dec;
        case 0x448df0u: goto label_448df0;
        case 0x448df4u: goto label_448df4;
        case 0x448df8u: goto label_448df8;
        case 0x448dfcu: goto label_448dfc;
        case 0x448e00u: goto label_448e00;
        case 0x448e04u: goto label_448e04;
        case 0x448e08u: goto label_448e08;
        case 0x448e0cu: goto label_448e0c;
        case 0x448e10u: goto label_448e10;
        case 0x448e14u: goto label_448e14;
        case 0x448e18u: goto label_448e18;
        case 0x448e1cu: goto label_448e1c;
        case 0x448e20u: goto label_448e20;
        case 0x448e24u: goto label_448e24;
        case 0x448e28u: goto label_448e28;
        case 0x448e2cu: goto label_448e2c;
        case 0x448e30u: goto label_448e30;
        case 0x448e34u: goto label_448e34;
        case 0x448e38u: goto label_448e38;
        case 0x448e3cu: goto label_448e3c;
        case 0x448e40u: goto label_448e40;
        case 0x448e44u: goto label_448e44;
        case 0x448e48u: goto label_448e48;
        case 0x448e4cu: goto label_448e4c;
        case 0x448e50u: goto label_448e50;
        case 0x448e54u: goto label_448e54;
        case 0x448e58u: goto label_448e58;
        case 0x448e5cu: goto label_448e5c;
        case 0x448e60u: goto label_448e60;
        case 0x448e64u: goto label_448e64;
        case 0x448e68u: goto label_448e68;
        case 0x448e6cu: goto label_448e6c;
        case 0x448e70u: goto label_448e70;
        case 0x448e74u: goto label_448e74;
        case 0x448e78u: goto label_448e78;
        case 0x448e7cu: goto label_448e7c;
        case 0x448e80u: goto label_448e80;
        case 0x448e84u: goto label_448e84;
        case 0x448e88u: goto label_448e88;
        case 0x448e8cu: goto label_448e8c;
        case 0x448e90u: goto label_448e90;
        case 0x448e94u: goto label_448e94;
        case 0x448e98u: goto label_448e98;
        case 0x448e9cu: goto label_448e9c;
        case 0x448ea0u: goto label_448ea0;
        case 0x448ea4u: goto label_448ea4;
        case 0x448ea8u: goto label_448ea8;
        case 0x448eacu: goto label_448eac;
        case 0x448eb0u: goto label_448eb0;
        case 0x448eb4u: goto label_448eb4;
        case 0x448eb8u: goto label_448eb8;
        case 0x448ebcu: goto label_448ebc;
        case 0x448ec0u: goto label_448ec0;
        case 0x448ec4u: goto label_448ec4;
        case 0x448ec8u: goto label_448ec8;
        case 0x448eccu: goto label_448ecc;
        case 0x448ed0u: goto label_448ed0;
        case 0x448ed4u: goto label_448ed4;
        case 0x448ed8u: goto label_448ed8;
        case 0x448edcu: goto label_448edc;
        case 0x448ee0u: goto label_448ee0;
        case 0x448ee4u: goto label_448ee4;
        case 0x448ee8u: goto label_448ee8;
        case 0x448eecu: goto label_448eec;
        case 0x448ef0u: goto label_448ef0;
        case 0x448ef4u: goto label_448ef4;
        case 0x448ef8u: goto label_448ef8;
        case 0x448efcu: goto label_448efc;
        case 0x448f00u: goto label_448f00;
        case 0x448f04u: goto label_448f04;
        case 0x448f08u: goto label_448f08;
        case 0x448f0cu: goto label_448f0c;
        case 0x448f10u: goto label_448f10;
        case 0x448f14u: goto label_448f14;
        case 0x448f18u: goto label_448f18;
        case 0x448f1cu: goto label_448f1c;
        case 0x448f20u: goto label_448f20;
        case 0x448f24u: goto label_448f24;
        case 0x448f28u: goto label_448f28;
        case 0x448f2cu: goto label_448f2c;
        case 0x448f30u: goto label_448f30;
        case 0x448f34u: goto label_448f34;
        case 0x448f38u: goto label_448f38;
        case 0x448f3cu: goto label_448f3c;
        case 0x448f40u: goto label_448f40;
        case 0x448f44u: goto label_448f44;
        case 0x448f48u: goto label_448f48;
        case 0x448f4cu: goto label_448f4c;
        case 0x448f50u: goto label_448f50;
        default: break;
    }

    ctx->pc = 0x448dd8u;

label_448dd8:
    // 0x448dd8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x448dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_448ddc:
    // 0x448ddc: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x448ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_448de0:
    // 0x448de0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x448de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_448de4:
    // 0x448de4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x448de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_448de8:
    // 0x448de8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x448de8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_448dec:
    // 0x448dec: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x448decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_448df0:
    // 0x448df0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x448df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_448df4:
    // 0x448df4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x448df4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_448df8:
    // 0x448df8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x448df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_448dfc:
    // 0x448dfc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x448dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_448e00:
    // 0x448e00: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x448e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_448e04:
    // 0x448e04: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x448e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_448e08:
    // 0x448e08: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x448e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_448e0c:
    // 0x448e0c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x448e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_448e10:
    // 0x448e10: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x448e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_448e14:
    // 0x448e14: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x448e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_448e18:
    // 0x448e18: 0x8c4306d8  lw          $v1, 0x6D8($v0)
    ctx->pc = 0x448e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1752)));
label_448e1c:
    // 0x448e1c: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_448e20:
    if (ctx->pc == 0x448E20u) {
        ctx->pc = 0x448E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448E1Cu;
        // 0x448e20: 0x268206cc  addiu       $v0, $s4, 0x6CC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1740));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448E24u;
        goto label_448e24;
    }
    ctx->pc = 0x448E1Cu;
    {
        const bool branch_taken_0x448e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x448E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448E1Cu;
        // 0x448e20: 0x268206cc  addiu       $v0, $s4, 0x6CC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1740));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448e1c) {
            ctx->pc = 0x448EBCu;
            goto label_448ebc;
        }
    }
    ctx->pc = 0x448E24u;
label_448e24:
    // 0x448e24: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x448e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_448e28:
    // 0x448e28: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x448e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_448e2c:
    // 0x448e2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x448e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_448e30:
    // 0x448e30: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
label_448e34:
    if (ctx->pc == 0x448E34u) {
        ctx->pc = 0x448E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448E30u;
        // 0x448e34: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448E38u;
        goto label_448e38;
    }
    ctx->pc = 0x448E30u;
    {
        const bool branch_taken_0x448e30 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x448E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448E30u;
        // 0x448e34: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448e30) {
            ctx->pc = 0x448ECCu;
            goto label_448ecc;
        }
    }
    ctx->pc = 0x448E38u;
label_448e38:
    // 0x448e38: 0x268306d0  addiu       $v1, $s4, 0x6D0
    ctx->pc = 0x448e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_448e3c:
    // 0x448e3c: 0x269705c8  addiu       $s7, $s4, 0x5C8
    ctx->pc = 0x448e3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1480));
label_448e40:
    // 0x448e40: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x448e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_448e44:
    // 0x448e44: 0x269605d8  addiu       $s6, $s4, 0x5D8
    ctx->pc = 0x448e44u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 1496));
label_448e48:
    // 0x448e48: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x448e48u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_448e4c:
    // 0x448e4c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x448e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_448e50:
    // 0x448e50: 0x24110140  addiu       $s1, $zero, 0x140
    ctx->pc = 0x448e50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_448e54:
    // 0x448e54: 0x2413001c  addiu       $s3, $zero, 0x1C
    ctx->pc = 0x448e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_448e58:
    // 0x448e58: 0x158080  sll         $s0, $s5, 2
    ctx->pc = 0x448e58u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_448e5c:
    // 0x448e5c: 0x518818  mult        $s1, $v0, $s1
    ctx->pc = 0x448e5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_448e60:
    // 0x448e60: 0x72b39818  mult1       $s3, $s5, $s3
    ctx->pc = 0x448e60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_448e64:
    // 0x448e64: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x448e64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_448e68:
    // 0x448e68: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x448e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_448e6c:
    // 0x448e6c: 0x263205a0  addiu       $s2, $s1, 0x5A0
    ctx->pc = 0x448e6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1440));
label_448e70:
    // 0x448e70: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x448e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_448e74:
    // 0x448e74: 0x2929021  addu        $s2, $s4, $s2
    ctx->pc = 0x448e74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_448e78:
    // 0x448e78: 0x26640048  addiu       $a0, $s3, 0x48
    ctx->pc = 0x448e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
label_448e7c:
    // 0x448e7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x448e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_448e80:
    // 0x448e80: 0x60f809  jalr        $v1
label_448e84:
    if (ctx->pc == 0x448E84u) {
        ctx->pc = 0x448E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448E80u;
        // 0x448e84: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448E88u;
        goto label_448e88;
    }
    ctx->pc = 0x448E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x448E88u);
        ctx->pc = 0x448E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448E80u;
        // 0x448e84: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x448E80u, 0x448E88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x448E88u;
label_448e88:
    // 0x448e88: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x448e88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_448e8c:
    // 0x448e8c: 0x267300b8  addiu       $s3, $s3, 0xB8
    ctx->pc = 0x448e8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 184));
label_448e90:
    // 0x448e90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x448e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_448e94:
    // 0x448e94: 0x40f809  jalr        $v0
label_448e98:
    if (ctx->pc == 0x448E98u) {
        ctx->pc = 0x448E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448E94u;
        // 0x448e98: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448E9Cu;
        goto label_448e9c;
    }
    ctx->pc = 0x448E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x448E9Cu);
        ctx->pc = 0x448E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448E94u;
        // 0x448e98: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x448E94u, 0x448E9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x448E9Cu;
label_448e9c:
    // 0x448e9c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x448e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_448ea0:
    // 0x448ea0: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x448ea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_448ea4:
    // 0x448ea4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x448ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_448ea8:
    // 0x448ea8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x448ea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_448eac:
    // 0x448eac: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_448eb0:
    if (ctx->pc == 0x448EB0u) {
        ctx->pc = 0x448EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448EACu;
        // 0x448eb0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448EB4u;
        goto label_448eb4;
    }
    ctx->pc = 0x448EACu;
    {
        const bool branch_taken_0x448eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x448EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448EACu;
        // 0x448eb0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448eac) {
            ctx->pc = 0x448E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_448e50;
        }
    }
    ctx->pc = 0x448EB4u;
label_448eb4:
    // 0x448eb4: 0x10000009  b           . + 4 + (0x9 << 2)
label_448eb8:
    if (ctx->pc == 0x448EB8u) {
        ctx->pc = 0x448EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448EB4u;
        // 0x448eb8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448EBCu;
        goto label_448ebc;
    }
    ctx->pc = 0x448EB4u;
    {
        const bool branch_taken_0x448eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448EB4u;
        // 0x448eb8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448eb4) {
            ctx->pc = 0x448EDCu;
            goto label_448edc;
        }
    }
    ctx->pc = 0x448EBCu;
label_448ebc:
    // 0x448ebc: 0x268206d0  addiu       $v0, $s4, 0x6D0
    ctx->pc = 0x448ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_448ec0:
    // 0x448ec0: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x448ec0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_448ec4:
    // 0x448ec4: 0x10000004  b           . + 4 + (0x4 << 2)
label_448ec8:
    if (ctx->pc == 0x448EC8u) {
        ctx->pc = 0x448EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448EC4u;
        // 0x448ec8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448ECCu;
        goto label_448ecc;
    }
    ctx->pc = 0x448EC4u;
    {
        const bool branch_taken_0x448ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448EC4u;
        // 0x448ec8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448ec4) {
            ctx->pc = 0x448ED8u;
            goto label_448ed8;
        }
    }
    ctx->pc = 0x448ECCu;
label_448ecc:
    // 0x448ecc: 0x268306d0  addiu       $v1, $s4, 0x6D0
    ctx->pc = 0x448eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_448ed0:
    // 0x448ed0: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x448ed0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_448ed4:
    // 0x448ed4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x448ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_448ed8:
    // 0x448ed8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x448ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_448edc:
    // 0x448edc: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x448edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_448ee0:
    // 0x448ee0: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x448ee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_448ee4:
    // 0x448ee4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x448ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_448ee8:
    // 0x448ee8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x448ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_448eec:
    // 0x448eec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x448eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_448ef0:
    // 0x448ef0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_448ef4:
    if (ctx->pc == 0x448EF4u) {
        ctx->pc = 0x448EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448EF0u;
        // 0x448ef4: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448EF8u;
        goto label_448ef8;
    }
    ctx->pc = 0x448EF0u;
    {
        const bool branch_taken_0x448ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448EF0u;
        // 0x448ef4: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448ef0) {
            ctx->pc = 0x448F10u;
            goto label_448f10;
        }
    }
    ctx->pc = 0x448EF8u;
label_448ef8:
    // 0x448ef8: 0x8c4306dc  lw          $v1, 0x6DC($v0)
    ctx->pc = 0x448ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1756)));
label_448efc:
    // 0x448efc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_448f00:
    if (ctx->pc == 0x448F00u) {
        ctx->pc = 0x448F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448EFCu;
        // 0x448f00: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448F04u;
        goto label_448f04;
    }
    ctx->pc = 0x448EFCu;
    {
        const bool branch_taken_0x448efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x448F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448EFCu;
        // 0x448f00: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448efc) {
            ctx->pc = 0x448F10u;
            goto label_448f10;
        }
    }
    ctx->pc = 0x448F04u;
label_448f04:
    // 0x448f04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x448f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_448f08:
    // 0x448f08: 0xc111f76  jal         func_447DD8
label_448f0c:
    if (ctx->pc == 0x448F0Cu) {
        ctx->pc = 0x448F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448F08u;
        // 0x448f0c: 0x24a5e238  addiu       $a1, $a1, -0x1DC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448F10u;
        goto label_448f10;
    }
    ctx->pc = 0x448F08u;
    SET_GPR_U32(ctx, 31, 0x448F10u);
    ctx->pc = 0x448F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448F08u;
    // 0x448f0c: 0x24a5e238  addiu       $a1, $a1, -0x1DC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447DD8u, 0x448F08u, 0x448F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448F10u;
label_448f10:
    // 0x448f10: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x448f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_448f14:
    // 0x448f14: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x448f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_448f18:
    // 0x448f18: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x448f18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_448f1c:
    // 0x448f1c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x448f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_448f20:
    // 0x448f20: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x448f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_448f24:
    // 0x448f24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x448f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_448f28:
    // 0x448f28: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_448f2c:
    if (ctx->pc == 0x448F2Cu) {
        ctx->pc = 0x448F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448F28u;
        // 0x448f2c: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448F30u;
        goto label_448f30;
    }
    ctx->pc = 0x448F28u;
    {
        const bool branch_taken_0x448f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448F28u;
        // 0x448f2c: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448f28) {
            ctx->pc = 0x448F70u;
            return;
        }
    }
    ctx->pc = 0x448F30u;
label_448f30:
    // 0x448f30: 0x3c51021  addu        $v0, $fp, $a1
    ctx->pc = 0x448f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_448f34:
    // 0x448f34: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x448f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_448f38:
    // 0x448f38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x448f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_448f3c:
    // 0x448f3c: 0x8c6505a4  lw          $a1, 0x5A4($v1)
    ctx->pc = 0x448f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1444)));
label_448f40:
    // 0x448f40: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x448f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_448f44:
    // 0x448f44: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x448f44u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_448f48:
    // 0x448f48: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x448f48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_448f4c:
    // 0x448f4c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x448f4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_448f50:
    // 0x448f50: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x448f50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->pc = 0x448f54u;
}
