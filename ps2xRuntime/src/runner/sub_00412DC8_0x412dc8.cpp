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

// Function: sub_00412DC8
// Address: 0x412dc8 - 0x413018
void sub_00412DC8_0x412dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412DC8_0x412dc8");
#endif

    switch (ctx->pc) {
        case 0x412dc8u: goto label_412dc8;
        case 0x412dccu: goto label_412dcc;
        case 0x412dd0u: goto label_412dd0;
        case 0x412dd4u: goto label_412dd4;
        case 0x412dd8u: goto label_412dd8;
        case 0x412ddcu: goto label_412ddc;
        case 0x412de0u: goto label_412de0;
        case 0x412de4u: goto label_412de4;
        case 0x412de8u: goto label_412de8;
        case 0x412decu: goto label_412dec;
        case 0x412df0u: goto label_412df0;
        case 0x412df4u: goto label_412df4;
        case 0x412df8u: goto label_412df8;
        case 0x412dfcu: goto label_412dfc;
        case 0x412e00u: goto label_412e00;
        case 0x412e04u: goto label_412e04;
        case 0x412e08u: goto label_412e08;
        case 0x412e0cu: goto label_412e0c;
        case 0x412e10u: goto label_412e10;
        case 0x412e14u: goto label_412e14;
        case 0x412e18u: goto label_412e18;
        case 0x412e1cu: goto label_412e1c;
        case 0x412e20u: goto label_412e20;
        case 0x412e24u: goto label_412e24;
        case 0x412e28u: goto label_412e28;
        case 0x412e2cu: goto label_412e2c;
        case 0x412e30u: goto label_412e30;
        case 0x412e34u: goto label_412e34;
        case 0x412e38u: goto label_412e38;
        case 0x412e3cu: goto label_412e3c;
        case 0x412e40u: goto label_412e40;
        case 0x412e44u: goto label_412e44;
        case 0x412e48u: goto label_412e48;
        case 0x412e4cu: goto label_412e4c;
        case 0x412e50u: goto label_412e50;
        case 0x412e54u: goto label_412e54;
        case 0x412e58u: goto label_412e58;
        case 0x412e5cu: goto label_412e5c;
        case 0x412e60u: goto label_412e60;
        case 0x412e64u: goto label_412e64;
        case 0x412e68u: goto label_412e68;
        case 0x412e6cu: goto label_412e6c;
        case 0x412e70u: goto label_412e70;
        case 0x412e74u: goto label_412e74;
        case 0x412e78u: goto label_412e78;
        case 0x412e7cu: goto label_412e7c;
        case 0x412e80u: goto label_412e80;
        case 0x412e84u: goto label_412e84;
        case 0x412e88u: goto label_412e88;
        case 0x412e8cu: goto label_412e8c;
        case 0x412e90u: goto label_412e90;
        case 0x412e94u: goto label_412e94;
        case 0x412e98u: goto label_412e98;
        case 0x412e9cu: goto label_412e9c;
        case 0x412ea0u: goto label_412ea0;
        case 0x412ea4u: goto label_412ea4;
        case 0x412ea8u: goto label_412ea8;
        case 0x412eacu: goto label_412eac;
        case 0x412eb0u: goto label_412eb0;
        case 0x412eb4u: goto label_412eb4;
        case 0x412eb8u: goto label_412eb8;
        case 0x412ebcu: goto label_412ebc;
        case 0x412ec0u: goto label_412ec0;
        case 0x412ec4u: goto label_412ec4;
        case 0x412ec8u: goto label_412ec8;
        case 0x412eccu: goto label_412ecc;
        case 0x412ed0u: goto label_412ed0;
        case 0x412ed4u: goto label_412ed4;
        case 0x412ed8u: goto label_412ed8;
        case 0x412edcu: goto label_412edc;
        case 0x412ee0u: goto label_412ee0;
        case 0x412ee4u: goto label_412ee4;
        case 0x412ee8u: goto label_412ee8;
        case 0x412eecu: goto label_412eec;
        case 0x412ef0u: goto label_412ef0;
        case 0x412ef4u: goto label_412ef4;
        case 0x412ef8u: goto label_412ef8;
        case 0x412efcu: goto label_412efc;
        case 0x412f00u: goto label_412f00;
        case 0x412f04u: goto label_412f04;
        case 0x412f08u: goto label_412f08;
        case 0x412f0cu: goto label_412f0c;
        case 0x412f10u: goto label_412f10;
        case 0x412f14u: goto label_412f14;
        case 0x412f18u: goto label_412f18;
        case 0x412f1cu: goto label_412f1c;
        case 0x412f20u: goto label_412f20;
        case 0x412f24u: goto label_412f24;
        case 0x412f28u: goto label_412f28;
        case 0x412f2cu: goto label_412f2c;
        case 0x412f30u: goto label_412f30;
        case 0x412f34u: goto label_412f34;
        case 0x412f38u: goto label_412f38;
        case 0x412f3cu: goto label_412f3c;
        case 0x412f40u: goto label_412f40;
        case 0x412f44u: goto label_412f44;
        case 0x412f48u: goto label_412f48;
        case 0x412f4cu: goto label_412f4c;
        case 0x412f50u: goto label_412f50;
        case 0x412f54u: goto label_412f54;
        case 0x412f58u: goto label_412f58;
        case 0x412f5cu: goto label_412f5c;
        case 0x412f60u: goto label_412f60;
        case 0x412f64u: goto label_412f64;
        case 0x412f68u: goto label_412f68;
        case 0x412f6cu: goto label_412f6c;
        case 0x412f70u: goto label_412f70;
        case 0x412f74u: goto label_412f74;
        case 0x412f78u: goto label_412f78;
        case 0x412f7cu: goto label_412f7c;
        case 0x412f80u: goto label_412f80;
        case 0x412f84u: goto label_412f84;
        case 0x412f88u: goto label_412f88;
        case 0x412f8cu: goto label_412f8c;
        case 0x412f90u: goto label_412f90;
        case 0x412f94u: goto label_412f94;
        case 0x412f98u: goto label_412f98;
        case 0x412f9cu: goto label_412f9c;
        case 0x412fa0u: goto label_412fa0;
        case 0x412fa4u: goto label_412fa4;
        case 0x412fa8u: goto label_412fa8;
        case 0x412facu: goto label_412fac;
        case 0x412fb0u: goto label_412fb0;
        case 0x412fb4u: goto label_412fb4;
        case 0x412fb8u: goto label_412fb8;
        case 0x412fbcu: goto label_412fbc;
        case 0x412fc0u: goto label_412fc0;
        case 0x412fc4u: goto label_412fc4;
        case 0x412fc8u: goto label_412fc8;
        case 0x412fccu: goto label_412fcc;
        case 0x412fd0u: goto label_412fd0;
        case 0x412fd4u: goto label_412fd4;
        case 0x412fd8u: goto label_412fd8;
        case 0x412fdcu: goto label_412fdc;
        case 0x412fe0u: goto label_412fe0;
        case 0x412fe4u: goto label_412fe4;
        case 0x412fe8u: goto label_412fe8;
        case 0x412fecu: goto label_412fec;
        case 0x412ff0u: goto label_412ff0;
        case 0x412ff4u: goto label_412ff4;
        case 0x412ff8u: goto label_412ff8;
        case 0x412ffcu: goto label_412ffc;
        case 0x413000u: goto label_413000;
        case 0x413004u: goto label_413004;
        case 0x413008u: goto label_413008;
        case 0x41300cu: goto label_41300c;
        case 0x413010u: goto label_413010;
        case 0x413014u: goto label_413014;
        default: break;
    }

    ctx->pc = 0x412dc8u;

label_412dc8:
    // 0x412dc8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x412dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_412dcc:
    // 0x412dcc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x412dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_412dd0:
    // 0x412dd0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x412dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_412dd4:
    // 0x412dd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x412dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_412dd8:
    // 0x412dd8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x412dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_412ddc:
    // 0x412ddc: 0x2411026c  addiu       $s1, $zero, 0x26C
    ctx->pc = 0x412ddcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 620));
label_412de0:
    // 0x412de0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x412de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_412de4:
    // 0x412de4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x412de4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_412de8:
    // 0x412de8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x412de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_412dec:
    // 0x412dec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x412decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_412df0:
    // 0x412df0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x412df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_412df4:
    // 0x412df4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x412df4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_412df8:
    // 0x412df8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x412df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_412dfc:
    // 0x412dfc: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x412dfcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_412e00:
    // 0x412e00: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x412e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_412e04:
    // 0x412e04: 0x40f809  jalr        $v0
label_412e08:
    if (ctx->pc == 0x412E08u) {
        ctx->pc = 0x412E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E04u;
        // 0x412e08: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412E0Cu;
        goto label_412e0c;
    }
    ctx->pc = 0x412E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x412E0Cu);
        ctx->pc = 0x412E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E04u;
        // 0x412e08: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412E04u, 0x412E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412E0Cu;
label_412e0c:
    // 0x412e0c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x412e0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_412e10:
    // 0x412e10: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x412e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_412e14:
    // 0x412e14: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x412e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_412e18:
    // 0x412e18: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x412e18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_412e1c:
    // 0x412e1c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x412e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_412e20:
    // 0x412e20: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x412e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
label_412e24:
    // 0x412e24: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x412e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_412e28:
    // 0x412e28: 0xafb20054  sw          $s2, 0x54($sp)
    ctx->pc = 0x412e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 18));
label_412e2c:
    // 0x412e2c: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x412e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
label_412e30:
    // 0x412e30: 0xc0e403c  jal         func_3900F0
label_412e34:
    if (ctx->pc == 0x412E34u) {
        ctx->pc = 0x412E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E30u;
        // 0x412e34: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412E38u;
        goto label_412e38;
    }
    ctx->pc = 0x412E30u;
    SET_GPR_U32(ctx, 31, 0x412E38u);
    ctx->pc = 0x412E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412E30u;
    // 0x412e34: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900F0u, 0x412E30u, 0x412E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412E38u;
label_412e38:
    // 0x412e38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x412e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_412e3c:
    // 0x412e3c: 0x52000024  beql        $s0, $zero, . + 4 + (0x24 << 2)
label_412e40:
    if (ctx->pc == 0x412E40u) {
        ctx->pc = 0x412E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E3Cu;
        // 0x412e40: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412E44u;
        goto label_412e44;
    }
    ctx->pc = 0x412E3Cu;
    {
        const bool branch_taken_0x412e3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x412e3c) {
            ctx->pc = 0x412E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412E3Cu;
            // 0x412e40: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412ED0u;
            goto label_412ed0;
        }
    }
    ctx->pc = 0x412E44u;
label_412e44:
    // 0x412e44: 0x92020068  lbu         $v0, 0x68($s0)
    ctx->pc = 0x412e44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
label_412e48:
    // 0x412e48: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_412e4c:
    if (ctx->pc == 0x412E4Cu) {
        ctx->pc = 0x412E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E48u;
        // 0x412e4c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412E50u;
        goto label_412e50;
    }
    ctx->pc = 0x412E48u;
    {
        const bool branch_taken_0x412e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x412e48) {
            ctx->pc = 0x412E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412E48u;
            // 0x412e4c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412ED0u;
            goto label_412ed0;
        }
    }
    ctx->pc = 0x412E50u;
label_412e50:
    // 0x412e50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x412e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_412e54:
    // 0x412e54: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x412e54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_412e58:
    // 0x412e58: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x412e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_412e5c:
    // 0x412e5c: 0x40f809  jalr        $v0
label_412e60:
    if (ctx->pc == 0x412E60u) {
        ctx->pc = 0x412E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E5Cu;
        // 0x412e60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412E64u;
        goto label_412e64;
    }
    ctx->pc = 0x412E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x412E64u);
        ctx->pc = 0x412E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E5Cu;
        // 0x412e60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412E5Cu, 0x412E64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412E64u;
label_412e64:
    // 0x412e64: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_412e68:
    if (ctx->pc == 0x412E68u) {
        ctx->pc = 0x412E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E64u;
        // 0x412e68: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412E6Cu;
        goto label_412e6c;
    }
    ctx->pc = 0x412E64u;
    {
        const bool branch_taken_0x412e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x412e64) {
            ctx->pc = 0x412E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412E64u;
            // 0x412e68: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412ED0u;
            goto label_412ed0;
        }
    }
    ctx->pc = 0x412E6Cu;
label_412e6c:
    // 0x412e6c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x412e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_412e70:
    // 0x412e70: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x412e70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_412e74:
    // 0x412e74: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x412e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_412e78:
    // 0x412e78: 0x40f809  jalr        $v0
label_412e7c:
    if (ctx->pc == 0x412E7Cu) {
        ctx->pc = 0x412E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E78u;
        // 0x412e7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412E80u;
        goto label_412e80;
    }
    ctx->pc = 0x412E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x412E80u);
        ctx->pc = 0x412E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E78u;
        // 0x412e7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412E78u, 0x412E80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412E80u;
label_412e80:
    // 0x412e80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x412e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_412e84:
    // 0x412e84: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x412e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_412e88:
    // 0x412e88: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x412e88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_412e8c:
    // 0x412e8c: 0x8c66001c  lw          $a2, 0x1C($v1)
    ctx->pc = 0x412e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_412e90:
    // 0x412e90: 0xc0f809  jalr        $a2
label_412e94:
    if (ctx->pc == 0x412E94u) {
        ctx->pc = 0x412E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E90u;
        // 0x412e94: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412E98u;
        goto label_412e98;
    }
    ctx->pc = 0x412E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x412E98u);
        ctx->pc = 0x412E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E90u;
        // 0x412e94: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412E90u, 0x412E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412E98u;
label_412e98:
    // 0x412e98: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_412e9c:
    if (ctx->pc == 0x412E9Cu) {
        ctx->pc = 0x412E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412E98u;
        // 0x412e9c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412EA0u;
        goto label_412ea0;
    }
    ctx->pc = 0x412E98u;
    {
        const bool branch_taken_0x412e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x412e98) {
            ctx->pc = 0x412E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412E98u;
            // 0x412e9c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412ED0u;
            goto label_412ed0;
        }
    }
    ctx->pc = 0x412EA0u;
label_412ea0:
    // 0x412ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x412ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_412ea4:
    // 0x412ea4: 0xc104a86  jal         func_412A18
label_412ea8:
    if (ctx->pc == 0x412EA8u) {
        ctx->pc = 0x412EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412EA4u;
        // 0x412ea8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412EACu;
        goto label_412eac;
    }
    ctx->pc = 0x412EA4u;
    SET_GPR_U32(ctx, 31, 0x412EACu);
    ctx->pc = 0x412EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412EA4u;
    // 0x412ea8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412A18u, 0x412EA4u, 0x412EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412EACu;
label_412eac:
    // 0x412eac: 0x54540008  bnel        $v0, $s4, . + 4 + (0x8 << 2)
label_412eb0:
    if (ctx->pc == 0x412EB0u) {
        ctx->pc = 0x412EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412EACu;
        // 0x412eb0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412EB4u;
        goto label_412eb4;
    }
    ctx->pc = 0x412EACu;
    {
        const bool branch_taken_0x412eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x412eac) {
            ctx->pc = 0x412EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412EACu;
            // 0x412eb0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412ED0u;
            goto label_412ed0;
        }
    }
    ctx->pc = 0x412EB4u;
label_412eb4:
    // 0x412eb4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x412eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_412eb8:
    // 0x412eb8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x412eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_412ebc:
    // 0x412ebc: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x412ebcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_412ec0:
    // 0x412ec0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x412ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_412ec4:
    // 0x412ec4: 0x40f809  jalr        $v0
label_412ec8:
    if (ctx->pc == 0x412EC8u) {
        ctx->pc = 0x412EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412EC4u;
        // 0x412ec8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412ECCu;
        goto label_412ecc;
    }
    ctx->pc = 0x412EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x412ECCu);
        ctx->pc = 0x412EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412EC4u;
        // 0x412ec8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412EC4u, 0x412ECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412ECCu;
label_412ecc:
    // 0x412ecc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x412eccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_412ed0:
    // 0x412ed0: 0x2a2202ec  slti        $v0, $s1, 0x2EC
    ctx->pc = 0x412ed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)748) ? 1 : 0);
label_412ed4:
    // 0x412ed4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_412ed8:
    if (ctx->pc == 0x412ED8u) {
        ctx->pc = 0x412ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412ED4u;
        // 0x412ed8: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412EDCu;
        goto label_412edc;
    }
    ctx->pc = 0x412ED4u;
    {
        const bool branch_taken_0x412ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x412ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412ED4u;
        // 0x412ed8: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412ed4) {
            ctx->pc = 0x412E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412e30;
        }
    }
    ctx->pc = 0x412EDCu;
label_412edc:
    // 0x412edc: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x412edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_412ee0:
    // 0x412ee0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x412ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_412ee4:
    // 0x412ee4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x412ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_412ee8:
    // 0x412ee8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x412ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_412eec:
    // 0x412eec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x412eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_412ef0:
    // 0x412ef0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x412ef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_412ef4:
    // 0x412ef4: 0xc0a4dda  jal         func_293768
label_412ef8:
    if (ctx->pc == 0x412EF8u) {
        ctx->pc = 0x412EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412EF4u;
        // 0x412ef8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412EFCu;
        goto label_412efc;
    }
    ctx->pc = 0x412EF4u;
    SET_GPR_U32(ctx, 31, 0x412EFCu);
    ctx->pc = 0x412EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412EF4u;
    // 0x412ef8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293768u, 0x412EF4u, 0x412EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412EFCu;
label_412efc:
    // 0x412efc: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x412efcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_412f00:
    // 0x412f00: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x412f00u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_412f04:
    // 0x412f04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_412f08:
    if (ctx->pc == 0x412F08u) {
        ctx->pc = 0x412F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F04u;
        // 0x412f08: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412F0Cu;
        goto label_412f0c;
    }
    ctx->pc = 0x412F04u;
    {
        const bool branch_taken_0x412f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F04u;
        // 0x412f08: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412f04) {
            ctx->pc = 0x412F28u;
            goto label_412f28;
        }
    }
    ctx->pc = 0x412F0Cu;
label_412f0c:
    // 0x412f0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x412f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_412f10:
    // 0x412f10: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x412f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_412f14:
    // 0x412f14: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x412f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_412f18:
    // 0x412f18: 0xc13b652  jal         func_4ED948
label_412f1c:
    if (ctx->pc == 0x412F1Cu) {
        ctx->pc = 0x412F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F18u;
        // 0x412f1c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412F20u;
        goto label_412f20;
    }
    ctx->pc = 0x412F18u;
    SET_GPR_U32(ctx, 31, 0x412F20u);
    ctx->pc = 0x412F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412F18u;
    // 0x412f1c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED948u, 0x412F18u, 0x412F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412F20u;
label_412f20:
    // 0x412f20: 0x10000015  b           . + 4 + (0x15 << 2)
label_412f24:
    if (ctx->pc == 0x412F24u) {
        ctx->pc = 0x412F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F20u;
        // 0x412f24: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412F28u;
        goto label_412f28;
    }
    ctx->pc = 0x412F20u;
    {
        const bool branch_taken_0x412f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F20u;
        // 0x412f24: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412f20) {
            ctx->pc = 0x412F78u;
            goto label_412f78;
        }
    }
    ctx->pc = 0x412F28u;
label_412f28:
    // 0x412f28: 0xc087502  jal         func_21D408
label_412f2c:
    if (ctx->pc == 0x412F2Cu) {
        ctx->pc = 0x412F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F28u;
        // 0x412f2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412F30u;
        goto label_412f30;
    }
    ctx->pc = 0x412F28u;
    SET_GPR_U32(ctx, 31, 0x412F30u);
    ctx->pc = 0x412F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412F28u;
    // 0x412f2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x412F28u, 0x412F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412F30u;
label_412f30:
    // 0x412f30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x412f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_412f34:
    // 0x412f34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x412f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_412f38:
    // 0x412f38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x412f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_412f3c:
    // 0x412f3c: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
label_412f40:
    if (ctx->pc == 0x412F40u) {
        ctx->pc = 0x412F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F3Cu;
        // 0x412f40: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412F44u;
        goto label_412f44;
    }
    ctx->pc = 0x412F3Cu;
    {
        const bool branch_taken_0x412f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x412f3c) {
            ctx->pc = 0x412F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412F3Cu;
            // 0x412f40: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412F78u;
            goto label_412f78;
        }
    }
    ctx->pc = 0x412F44u;
label_412f44:
    // 0x412f44: 0xc05959e  jal         func_165678
label_412f48:
    if (ctx->pc == 0x412F48u) {
        ctx->pc = 0x412F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F44u;
        // 0x412f48: 0x8c84020c  lw          $a0, 0x20C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412F4Cu;
        goto label_412f4c;
    }
    ctx->pc = 0x412F44u;
    SET_GPR_U32(ctx, 31, 0x412F4Cu);
    ctx->pc = 0x412F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412F44u;
    // 0x412f48: 0x8c84020c  lw          $a0, 0x20C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x412F44u, 0x412F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412F4Cu;
label_412f4c:
    // 0x412f4c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_412f50:
    if (ctx->pc == 0x412F50u) {
        ctx->pc = 0x412F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F4Cu;
        // 0x412f50: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412F54u;
        goto label_412f54;
    }
    ctx->pc = 0x412F4Cu;
    {
        const bool branch_taken_0x412f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x412f4c) {
            ctx->pc = 0x412F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412F4Cu;
            // 0x412f50: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412F78u;
            goto label_412f78;
        }
    }
    ctx->pc = 0x412F54u;
label_412f54:
    // 0x412f54: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x412f54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_412f58:
    // 0x412f58: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x412f58u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_412f5c:
    // 0x412f5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_412f60:
    if (ctx->pc == 0x412F60u) {
        ctx->pc = 0x412F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F5Cu;
        // 0x412f60: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412F64u;
        goto label_412f64;
    }
    ctx->pc = 0x412F5Cu;
    {
        const bool branch_taken_0x412f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F5Cu;
        // 0x412f60: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412f5c) {
            ctx->pc = 0x412F74u;
            goto label_412f74;
        }
    }
    ctx->pc = 0x412F64u;
label_412f64:
    // 0x412f64: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x412f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_412f68:
    // 0x412f68: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x412f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_412f6c:
    // 0x412f6c: 0xc13ce7a  jal         func_4F39E8
label_412f70:
    if (ctx->pc == 0x412F70u) {
        ctx->pc = 0x412F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F6Cu;
        // 0x412f70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412F74u;
        goto label_412f74;
    }
    ctx->pc = 0x412F6Cu;
    SET_GPR_U32(ctx, 31, 0x412F74u);
    ctx->pc = 0x412F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412F6Cu;
    // 0x412f70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F39E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F39E8u, 0x412F6Cu, 0x412F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412F74u;
label_412f74:
    // 0x412f74: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x412f74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_412f78:
    // 0x412f78: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x412f78u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_412f7c:
    // 0x412f7c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_412f80:
    if (ctx->pc == 0x412F80u) {
        ctx->pc = 0x412F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F7Cu;
        // 0x412f80: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412F84u;
        goto label_412f84;
    }
    ctx->pc = 0x412F7Cu;
    {
        const bool branch_taken_0x412f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x412F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F7Cu;
        // 0x412f80: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412f7c) {
            ctx->pc = 0x412FFCu;
            goto label_412ffc;
        }
    }
    ctx->pc = 0x412F84u;
label_412f84:
    // 0x412f84: 0xc0a47b4  jal         func_291ED0
label_412f88:
    if (ctx->pc == 0x412F88u) {
        ctx->pc = 0x412F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F84u;
        // 0x412f88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412F8Cu;
        goto label_412f8c;
    }
    ctx->pc = 0x412F84u;
    SET_GPR_U32(ctx, 31, 0x412F8Cu);
    ctx->pc = 0x412F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412F84u;
    // 0x412f88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x412F84u, 0x412F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412F8Cu;
label_412f8c:
    // 0x412f8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x412f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_412f90:
    // 0x412f90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x412f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_412f94:
    // 0x412f94: 0x56020019  bnel        $s0, $v0, . + 4 + (0x19 << 2)
label_412f98:
    if (ctx->pc == 0x412F98u) {
        ctx->pc = 0x412F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412F94u;
        // 0x412f98: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412F9Cu;
        goto label_412f9c;
    }
    ctx->pc = 0x412F94u;
    {
        const bool branch_taken_0x412f94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x412f94) {
            ctx->pc = 0x412F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412F94u;
            // 0x412f98: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412FFCu;
            goto label_412ffc;
        }
    }
    ctx->pc = 0x412F9Cu;
label_412f9c:
    // 0x412f9c: 0xc0a4802  jal         func_292008
label_412fa0:
    if (ctx->pc == 0x412FA0u) {
        ctx->pc = 0x412FA4u;
        goto label_412fa4;
    }
    ctx->pc = 0x412F9Cu;
    SET_GPR_U32(ctx, 31, 0x412FA4u);
    ctx->pc = 0x292008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292008u, 0x412F9Cu, 0x412FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412FA4u;
label_412fa4:
    // 0x412fa4: 0x14500015  bne         $v0, $s0, . + 4 + (0x15 << 2)
label_412fa8:
    if (ctx->pc == 0x412FA8u) {
        ctx->pc = 0x412FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412FA4u;
        // 0x412fa8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412FACu;
        goto label_412fac;
    }
    ctx->pc = 0x412FA4u;
    {
        const bool branch_taken_0x412fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x412FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412FA4u;
        // 0x412fa8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412fa4) {
            ctx->pc = 0x412FFCu;
            goto label_412ffc;
        }
    }
    ctx->pc = 0x412FACu;
label_412fac:
    // 0x412fac: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x412facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_412fb0:
    // 0x412fb0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x412fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_412fb4:
    // 0x412fb4: 0xc0cd4ee  jal         func_3353B8
label_412fb8:
    if (ctx->pc == 0x412FB8u) {
        ctx->pc = 0x412FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412FB4u;
        // 0x412fb8: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412FBCu;
        goto label_412fbc;
    }
    ctx->pc = 0x412FB4u;
    SET_GPR_U32(ctx, 31, 0x412FBCu);
    ctx->pc = 0x412FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412FB4u;
    // 0x412fb8: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x412FB4u, 0x412FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412FBCu;
label_412fbc:
    // 0x412fbc: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x412fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_412fc0:
    // 0x412fc0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x412fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_412fc4:
    // 0x412fc4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x412fc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_412fc8:
    // 0x412fc8: 0x8c89bd30  lw          $t1, -0x42D0($a0)
    ctx->pc = 0x412fc8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
label_412fcc:
    // 0x412fcc: 0x2402008f  addiu       $v0, $zero, 0x8F
    ctx->pc = 0x412fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_412fd0:
    // 0x412fd0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x412fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_412fd4:
    // 0x412fd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x412fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_412fd8:
    // 0x412fd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x412fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_412fdc:
    // 0x412fdc: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x412fdcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_412fe0:
    // 0x412fe0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x412fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_412fe4:
    // 0x412fe4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x412fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_412fe8:
    // 0x412fe8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x412fe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_412fec:
    // 0x412fec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x412fecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_412ff0:
    // 0x412ff0: 0xc088178  jal         func_2205E0
label_412ff4:
    if (ctx->pc == 0x412FF4u) {
        ctx->pc = 0x412FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412FF0u;
        // 0x412ff4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412FF8u;
        goto label_412ff8;
    }
    ctx->pc = 0x412FF0u;
    SET_GPR_U32(ctx, 31, 0x412FF8u);
    ctx->pc = 0x412FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412FF0u;
    // 0x412ff4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x412FF0u, 0x412FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412FF8u;
label_412ff8:
    // 0x412ff8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x412ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_412ffc:
    // 0x412ffc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x412ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_413000:
    // 0x413000: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x413000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_413004:
    // 0x413004: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x413004u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_413008:
    // 0x413008: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x413008u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41300c:
    // 0x41300c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x41300cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_413010:
    // 0x413010: 0x3e00008  jr          $ra
label_413014:
    if (ctx->pc == 0x413014u) {
        ctx->pc = 0x413014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413010u;
        // 0x413014: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413018u;
        goto label_fallthrough_0x413010;
    }
    ctx->pc = 0x413010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413010u;
        // 0x413014: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x413010:
    ctx->pc = 0x413018u;
}
