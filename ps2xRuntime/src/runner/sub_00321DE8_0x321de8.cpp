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

// Function: sub_00321DE8
// Address: 0x321de8 - 0x322040
void sub_00321DE8_0x321de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321DE8_0x321de8");
#endif

    switch (ctx->pc) {
        case 0x321de8u: goto label_321de8;
        case 0x321decu: goto label_321dec;
        case 0x321df0u: goto label_321df0;
        case 0x321df4u: goto label_321df4;
        case 0x321df8u: goto label_321df8;
        case 0x321dfcu: goto label_321dfc;
        case 0x321e00u: goto label_321e00;
        case 0x321e04u: goto label_321e04;
        case 0x321e08u: goto label_321e08;
        case 0x321e0cu: goto label_321e0c;
        case 0x321e10u: goto label_321e10;
        case 0x321e14u: goto label_321e14;
        case 0x321e18u: goto label_321e18;
        case 0x321e1cu: goto label_321e1c;
        case 0x321e20u: goto label_321e20;
        case 0x321e24u: goto label_321e24;
        case 0x321e28u: goto label_321e28;
        case 0x321e2cu: goto label_321e2c;
        case 0x321e30u: goto label_321e30;
        case 0x321e34u: goto label_321e34;
        case 0x321e38u: goto label_321e38;
        case 0x321e3cu: goto label_321e3c;
        case 0x321e40u: goto label_321e40;
        case 0x321e44u: goto label_321e44;
        case 0x321e48u: goto label_321e48;
        case 0x321e4cu: goto label_321e4c;
        case 0x321e50u: goto label_321e50;
        case 0x321e54u: goto label_321e54;
        case 0x321e58u: goto label_321e58;
        case 0x321e5cu: goto label_321e5c;
        case 0x321e60u: goto label_321e60;
        case 0x321e64u: goto label_321e64;
        case 0x321e68u: goto label_321e68;
        case 0x321e6cu: goto label_321e6c;
        case 0x321e70u: goto label_321e70;
        case 0x321e74u: goto label_321e74;
        case 0x321e78u: goto label_321e78;
        case 0x321e7cu: goto label_321e7c;
        case 0x321e80u: goto label_321e80;
        case 0x321e84u: goto label_321e84;
        case 0x321e88u: goto label_321e88;
        case 0x321e8cu: goto label_321e8c;
        case 0x321e90u: goto label_321e90;
        case 0x321e94u: goto label_321e94;
        case 0x321e98u: goto label_321e98;
        case 0x321e9cu: goto label_321e9c;
        case 0x321ea0u: goto label_321ea0;
        case 0x321ea4u: goto label_321ea4;
        case 0x321ea8u: goto label_321ea8;
        case 0x321eacu: goto label_321eac;
        case 0x321eb0u: goto label_321eb0;
        case 0x321eb4u: goto label_321eb4;
        case 0x321eb8u: goto label_321eb8;
        case 0x321ebcu: goto label_321ebc;
        case 0x321ec0u: goto label_321ec0;
        case 0x321ec4u: goto label_321ec4;
        case 0x321ec8u: goto label_321ec8;
        case 0x321eccu: goto label_321ecc;
        case 0x321ed0u: goto label_321ed0;
        case 0x321ed4u: goto label_321ed4;
        case 0x321ed8u: goto label_321ed8;
        case 0x321edcu: goto label_321edc;
        case 0x321ee0u: goto label_321ee0;
        case 0x321ee4u: goto label_321ee4;
        case 0x321ee8u: goto label_321ee8;
        case 0x321eecu: goto label_321eec;
        case 0x321ef0u: goto label_321ef0;
        case 0x321ef4u: goto label_321ef4;
        case 0x321ef8u: goto label_321ef8;
        case 0x321efcu: goto label_321efc;
        case 0x321f00u: goto label_321f00;
        case 0x321f04u: goto label_321f04;
        case 0x321f08u: goto label_321f08;
        case 0x321f0cu: goto label_321f0c;
        case 0x321f10u: goto label_321f10;
        case 0x321f14u: goto label_321f14;
        case 0x321f18u: goto label_321f18;
        case 0x321f1cu: goto label_321f1c;
        case 0x321f20u: goto label_321f20;
        case 0x321f24u: goto label_321f24;
        case 0x321f28u: goto label_321f28;
        case 0x321f2cu: goto label_321f2c;
        case 0x321f30u: goto label_321f30;
        case 0x321f34u: goto label_321f34;
        case 0x321f38u: goto label_321f38;
        case 0x321f3cu: goto label_321f3c;
        case 0x321f40u: goto label_321f40;
        case 0x321f44u: goto label_321f44;
        case 0x321f48u: goto label_321f48;
        case 0x321f4cu: goto label_321f4c;
        case 0x321f50u: goto label_321f50;
        case 0x321f54u: goto label_321f54;
        case 0x321f58u: goto label_321f58;
        case 0x321f5cu: goto label_321f5c;
        case 0x321f60u: goto label_321f60;
        case 0x321f64u: goto label_321f64;
        case 0x321f68u: goto label_321f68;
        case 0x321f6cu: goto label_321f6c;
        case 0x321f70u: goto label_321f70;
        case 0x321f74u: goto label_321f74;
        case 0x321f78u: goto label_321f78;
        case 0x321f7cu: goto label_321f7c;
        case 0x321f80u: goto label_321f80;
        case 0x321f84u: goto label_321f84;
        case 0x321f88u: goto label_321f88;
        case 0x321f8cu: goto label_321f8c;
        case 0x321f90u: goto label_321f90;
        case 0x321f94u: goto label_321f94;
        case 0x321f98u: goto label_321f98;
        case 0x321f9cu: goto label_321f9c;
        case 0x321fa0u: goto label_321fa0;
        case 0x321fa4u: goto label_321fa4;
        case 0x321fa8u: goto label_321fa8;
        case 0x321facu: goto label_321fac;
        case 0x321fb0u: goto label_321fb0;
        case 0x321fb4u: goto label_321fb4;
        case 0x321fb8u: goto label_321fb8;
        case 0x321fbcu: goto label_321fbc;
        case 0x321fc0u: goto label_321fc0;
        case 0x321fc4u: goto label_321fc4;
        case 0x321fc8u: goto label_321fc8;
        case 0x321fccu: goto label_321fcc;
        case 0x321fd0u: goto label_321fd0;
        case 0x321fd4u: goto label_321fd4;
        case 0x321fd8u: goto label_321fd8;
        case 0x321fdcu: goto label_321fdc;
        case 0x321fe0u: goto label_321fe0;
        case 0x321fe4u: goto label_321fe4;
        case 0x321fe8u: goto label_321fe8;
        case 0x321fecu: goto label_321fec;
        case 0x321ff0u: goto label_321ff0;
        case 0x321ff4u: goto label_321ff4;
        case 0x321ff8u: goto label_321ff8;
        case 0x321ffcu: goto label_321ffc;
        case 0x322000u: goto label_322000;
        case 0x322004u: goto label_322004;
        case 0x322008u: goto label_322008;
        case 0x32200cu: goto label_32200c;
        case 0x322010u: goto label_322010;
        case 0x322014u: goto label_322014;
        case 0x322018u: goto label_322018;
        case 0x32201cu: goto label_32201c;
        case 0x322020u: goto label_322020;
        case 0x322024u: goto label_322024;
        case 0x322028u: goto label_322028;
        case 0x32202cu: goto label_32202c;
        case 0x322030u: goto label_322030;
        case 0x322034u: goto label_322034;
        case 0x322038u: goto label_322038;
        case 0x32203cu: goto label_32203c;
        default: break;
    }

    ctx->pc = 0x321de8u;

label_321de8:
    // 0x321de8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x321de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_321dec:
    // 0x321dec: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x321decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_321df0:
    // 0x321df0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x321df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_321df4:
    // 0x321df4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x321df4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_321df8:
    // 0x321df8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x321df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_321dfc:
    // 0x321dfc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x321dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_321e00:
    // 0x321e00: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x321e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_321e04:
    // 0x321e04: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x321e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_321e08:
    // 0x321e08: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x321e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_321e0c:
    // 0x321e0c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x321e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_321e10:
    // 0x321e10: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x321e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_321e14:
    // 0x321e14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x321e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_321e18:
    // 0x321e18: 0xc05959e  jal         func_165678
label_321e1c:
    if (ctx->pc == 0x321E1Cu) {
        ctx->pc = 0x321E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E18u;
        // 0x321e1c: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E20u;
        goto label_321e20;
    }
    ctx->pc = 0x321E18u;
    SET_GPR_U32(ctx, 31, 0x321E20u);
    ctx->pc = 0x321E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321E18u;
    // 0x321e1c: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x321E18u, 0x321E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321E20u;
label_321e20:
    // 0x321e20: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x321e20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321e24:
    // 0x321e24: 0x12e00079  beqz        $s7, . + 4 + (0x79 << 2)
label_321e28:
    if (ctx->pc == 0x321E28u) {
        ctx->pc = 0x321E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E24u;
        // 0x321e28: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E2Cu;
        goto label_321e2c;
    }
    ctx->pc = 0x321E24u;
    {
        const bool branch_taken_0x321e24 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x321E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E24u;
        // 0x321e28: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321e24) {
            ctx->pc = 0x32200Cu;
            goto label_32200c;
        }
    }
    ctx->pc = 0x321E2Cu;
label_321e2c:
    // 0x321e2c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x321e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_321e30:
    // 0x321e30: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x321e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_321e34:
    // 0x321e34: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x321e34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321e38:
    // 0x321e38: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
label_321e3c:
    if (ctx->pc == 0x321E3Cu) {
        ctx->pc = 0x321E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E38u;
        // 0x321e3c: 0x247e0048  addiu       $fp, $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E40u;
        goto label_321e40;
    }
    ctx->pc = 0x321E38u;
    {
        const bool branch_taken_0x321e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E38u;
        // 0x321e3c: 0x247e0048  addiu       $fp, $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321e38) {
            ctx->pc = 0x32200Cu;
            goto label_32200c;
        }
    }
    ctx->pc = 0x321E40u;
label_321e40:
    // 0x321e40: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x321e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_321e44:
    // 0x321e44: 0x0  nop
    ctx->pc = 0x321e44u;
    // NOP
label_321e48:
    // 0x321e48: 0xc137826  jal         func_4DE098
label_321e4c:
    if (ctx->pc == 0x321E4Cu) {
        ctx->pc = 0x321E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E48u;
        // 0x321e4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E50u;
        goto label_321e50;
    }
    ctx->pc = 0x321E48u;
    SET_GPR_U32(ctx, 31, 0x321E50u);
    ctx->pc = 0x321E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321E48u;
    // 0x321e4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x321E48u, 0x321E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321E50u;
label_321e50:
    // 0x321e50: 0x26740001  addiu       $s4, $s3, 0x1
    ctx->pc = 0x321e50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_321e54:
    // 0x321e54: 0xc0e409a  jal         func_390268
label_321e58:
    if (ctx->pc == 0x321E58u) {
        ctx->pc = 0x321E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E54u;
        // 0x321e58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E5Cu;
        goto label_321e5c;
    }
    ctx->pc = 0x321E54u;
    SET_GPR_U32(ctx, 31, 0x321E5Cu);
    ctx->pc = 0x321E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321E54u;
    // 0x321e58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x321E54u, 0x321E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321E5Cu;
label_321e5c:
    // 0x321e5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x321e5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321e60:
    // 0x321e60: 0x52400063  beql        $s2, $zero, . + 4 + (0x63 << 2)
label_321e64:
    if (ctx->pc == 0x321E64u) {
        ctx->pc = 0x321E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E60u;
        // 0x321e64: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E68u;
        goto label_321e68;
    }
    ctx->pc = 0x321E60u;
    {
        const bool branch_taken_0x321e60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x321e60) {
            ctx->pc = 0x321E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321E60u;
            // 0x321e64: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321FF0u;
            goto label_321ff0;
        }
    }
    ctx->pc = 0x321E68u;
label_321e68:
    // 0x321e68: 0x12570060  beq         $s2, $s7, . + 4 + (0x60 << 2)
label_321e6c:
    if (ctx->pc == 0x321E6Cu) {
        ctx->pc = 0x321E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E68u;
        // 0x321e6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E70u;
        goto label_321e70;
    }
    ctx->pc = 0x321E68u;
    {
        const bool branch_taken_0x321e68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 23));
        ctx->pc = 0x321E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E68u;
        // 0x321e6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321e68) {
            ctx->pc = 0x321FECu;
            goto label_321fec;
        }
    }
    ctx->pc = 0x321E70u;
label_321e70:
    // 0x321e70: 0xc08a096  jal         func_228258
label_321e74:
    if (ctx->pc == 0x321E74u) {
        ctx->pc = 0x321E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E70u;
        // 0x321e74: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E78u;
        goto label_321e78;
    }
    ctx->pc = 0x321E70u;
    SET_GPR_U32(ctx, 31, 0x321E78u);
    ctx->pc = 0x321E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321E70u;
    // 0x321e74: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x321E70u, 0x321E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321E78u;
label_321e78:
    // 0x321e78: 0x5050005d  beql        $v0, $s0, . + 4 + (0x5D << 2)
label_321e7c:
    if (ctx->pc == 0x321E7Cu) {
        ctx->pc = 0x321E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E78u;
        // 0x321e7c: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E80u;
        goto label_321e80;
    }
    ctx->pc = 0x321E78u;
    {
        const bool branch_taken_0x321e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x321e78) {
            ctx->pc = 0x321E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321E78u;
            // 0x321e7c: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321FF0u;
            goto label_321ff0;
        }
    }
    ctx->pc = 0x321E80u;
label_321e80:
    // 0x321e80: 0xc08a08a  jal         func_228228
label_321e84:
    if (ctx->pc == 0x321E84u) {
        ctx->pc = 0x321E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E80u;
        // 0x321e84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E88u;
        goto label_321e88;
    }
    ctx->pc = 0x321E80u;
    SET_GPR_U32(ctx, 31, 0x321E88u);
    ctx->pc = 0x321E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321E80u;
    // 0x321e84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x321E80u, 0x321E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321E88u;
label_321e88:
    // 0x321e88: 0x50500059  beql        $v0, $s0, . + 4 + (0x59 << 2)
label_321e8c:
    if (ctx->pc == 0x321E8Cu) {
        ctx->pc = 0x321E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E88u;
        // 0x321e8c: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E90u;
        goto label_321e90;
    }
    ctx->pc = 0x321E88u;
    {
        const bool branch_taken_0x321e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x321e88) {
            ctx->pc = 0x321E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321E88u;
            // 0x321e8c: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321FF0u;
            goto label_321ff0;
        }
    }
    ctx->pc = 0x321E90u;
label_321e90:
    // 0x321e90: 0xc087502  jal         func_21D408
label_321e94:
    if (ctx->pc == 0x321E94u) {
        ctx->pc = 0x321E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E90u;
        // 0x321e94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E98u;
        goto label_321e98;
    }
    ctx->pc = 0x321E90u;
    SET_GPR_U32(ctx, 31, 0x321E98u);
    ctx->pc = 0x321E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321E90u;
    // 0x321e94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x321E90u, 0x321E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321E98u;
label_321e98:
    // 0x321e98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x321e98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321e9c:
    // 0x321e9c: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x321e9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_321ea0:
    // 0x321ea0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_321ea4:
    if (ctx->pc == 0x321EA4u) {
        ctx->pc = 0x321EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EA0u;
        // 0x321ea4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321EA8u;
        goto label_321ea8;
    }
    ctx->pc = 0x321EA0u;
    {
        const bool branch_taken_0x321ea0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x321EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EA0u;
        // 0x321ea4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321ea0) {
            ctx->pc = 0x321EB4u;
            goto label_321eb4;
        }
    }
    ctx->pc = 0x321EA8u;
label_321ea8:
    // 0x321ea8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x321ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_321eac:
    // 0x321eac: 0x10000002  b           . + 4 + (0x2 << 2)
label_321eb0:
    if (ctx->pc == 0x321EB0u) {
        ctx->pc = 0x321EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EACu;
        // 0x321eb0: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321EB4u;
        goto label_321eb4;
    }
    ctx->pc = 0x321EACu;
    {
        const bool branch_taken_0x321eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EACu;
        // 0x321eb0: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321eac) {
            ctx->pc = 0x321EB8u;
            goto label_321eb8;
        }
    }
    ctx->pc = 0x321EB4u;
label_321eb4:
    // 0x321eb4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x321eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321eb8:
    // 0x321eb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x321eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321ebc:
    // 0x321ebc: 0xc0c0f9a  jal         func_303E68
label_321ec0:
    if (ctx->pc == 0x321EC0u) {
        ctx->pc = 0x321EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EBCu;
        // 0x321ec0: 0x26740001  addiu       $s4, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321EC4u;
        goto label_321ec4;
    }
    ctx->pc = 0x321EBCu;
    SET_GPR_U32(ctx, 31, 0x321EC4u);
    ctx->pc = 0x321EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321EBCu;
    // 0x321ec0: 0x26740001  addiu       $s4, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303E68u, 0x321EBCu, 0x321EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321EC4u;
label_321ec4:
    // 0x321ec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x321ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321ec8:
    // 0x321ec8: 0x10430048  beq         $v0, $v1, . + 4 + (0x48 << 2)
label_321ecc:
    if (ctx->pc == 0x321ECCu) {
        ctx->pc = 0x321ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EC8u;
        // 0x321ecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321ED0u;
        goto label_321ed0;
    }
    ctx->pc = 0x321EC8u;
    {
        const bool branch_taken_0x321ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x321ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EC8u;
        // 0x321ecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321ec8) {
            ctx->pc = 0x321FECu;
            goto label_321fec;
        }
    }
    ctx->pc = 0x321ED0u;
label_321ed0:
    // 0x321ed0: 0xc0a3658  jal         func_28D960
label_321ed4:
    if (ctx->pc == 0x321ED4u) {
        ctx->pc = 0x321ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321ED0u;
        // 0x321ed4: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321ED8u;
        goto label_321ed8;
    }
    ctx->pc = 0x321ED0u;
    SET_GPR_U32(ctx, 31, 0x321ED8u);
    ctx->pc = 0x321ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321ED0u;
    // 0x321ed4: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x321ED0u, 0x321ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321ED8u;
label_321ed8:
    // 0x321ed8: 0x4430045  bgezl       $v0, . + 4 + (0x45 << 2)
label_321edc:
    if (ctx->pc == 0x321EDCu) {
        ctx->pc = 0x321EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321ED8u;
        // 0x321edc: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321EE0u;
        goto label_321ee0;
    }
    ctx->pc = 0x321ED8u;
    {
        const bool branch_taken_0x321ed8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x321ed8) {
            ctx->pc = 0x321EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321ED8u;
            // 0x321edc: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321FF0u;
            goto label_321ff0;
        }
    }
    ctx->pc = 0x321EE0u;
label_321ee0:
    // 0x321ee0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_321ee4:
    if (ctx->pc == 0x321EE4u) {
        ctx->pc = 0x321EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EE0u;
        // 0x321ee4: 0x86450092  lh          $a1, 0x92($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321EE8u;
        goto label_321ee8;
    }
    ctx->pc = 0x321EE0u;
    {
        const bool branch_taken_0x321ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x321ee0) {
            ctx->pc = 0x321EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321EE0u;
            // 0x321ee4: 0x86450092  lh          $a1, 0x92($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321F0Cu;
            goto label_321f0c;
        }
    }
    ctx->pc = 0x321EE8u;
label_321ee8:
    // 0x321ee8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x321ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_321eec:
    // 0x321eec: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x321eecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_321ef0:
    // 0x321ef0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x321ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_321ef4:
    // 0x321ef4: 0x40f809  jalr        $v0
label_321ef8:
    if (ctx->pc == 0x321EF8u) {
        ctx->pc = 0x321EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EF4u;
        // 0x321ef8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321EFCu;
        goto label_321efc;
    }
    ctx->pc = 0x321EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321EFCu);
        ctx->pc = 0x321EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321EF4u;
        // 0x321ef8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321EF4u, 0x321EFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321EFCu;
label_321efc:
    // 0x321efc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x321efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_321f00:
    // 0x321f00: 0x5043003b  beql        $v0, $v1, . + 4 + (0x3B << 2)
label_321f04:
    if (ctx->pc == 0x321F04u) {
        ctx->pc = 0x321F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F00u;
        // 0x321f04: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F08u;
        goto label_321f08;
    }
    ctx->pc = 0x321F00u;
    {
        const bool branch_taken_0x321f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x321f00) {
            ctx->pc = 0x321F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321F00u;
            // 0x321f04: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321FF0u;
            goto label_321ff0;
        }
    }
    ctx->pc = 0x321F08u;
label_321f08:
    // 0x321f08: 0x86450092  lh          $a1, 0x92($s2)
    ctx->pc = 0x321f08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_321f0c:
    // 0x321f0c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x321f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_321f10:
    // 0x321f10: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x321f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_321f14:
    // 0x321f14: 0x26300164  addiu       $s0, $s1, 0x164
    ctx->pc = 0x321f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
label_321f18:
    // 0x321f18: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x321f18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_321f1c:
    // 0x321f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x321f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_321f20:
    // 0x321f20: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x321f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_321f24:
    // 0x321f24: 0xc13c108  jal         func_4F0420
label_321f28:
    if (ctx->pc == 0x321F28u) {
        ctx->pc = 0x321F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F24u;
        // 0x321f28: 0x26740001  addiu       $s4, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F2Cu;
        goto label_321f2c;
    }
    ctx->pc = 0x321F24u;
    SET_GPR_U32(ctx, 31, 0x321F2Cu);
    ctx->pc = 0x321F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321F24u;
    // 0x321f28: 0x26740001  addiu       $s4, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F0420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F0420u, 0x321F24u, 0x321F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321F2Cu;
label_321f2c:
    // 0x321f2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321f30:
    // 0x321f30: 0xc137826  jal         func_4DE098
label_321f34:
    if (ctx->pc == 0x321F34u) {
        ctx->pc = 0x321F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F30u;
        // 0x321f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F38u;
        goto label_321f38;
    }
    ctx->pc = 0x321F30u;
    SET_GPR_U32(ctx, 31, 0x321F38u);
    ctx->pc = 0x321F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321F30u;
    // 0x321f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x321F30u, 0x321F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321F38u;
label_321f38:
    // 0x321f38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x321f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_321f3c:
    // 0x321f3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x321f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_321f40:
    // 0x321f40: 0xc0e409a  jal         func_390268
label_321f44:
    if (ctx->pc == 0x321F44u) {
        ctx->pc = 0x321F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F40u;
        // 0x321f44: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F48u;
        goto label_321f48;
    }
    ctx->pc = 0x321F40u;
    SET_GPR_U32(ctx, 31, 0x321F48u);
    ctx->pc = 0x321F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321F40u;
    // 0x321f44: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x321F40u, 0x321F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321F48u;
label_321f48:
    // 0x321f48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x321f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321f4c:
    // 0x321f4c: 0xc0a34d6  jal         func_28D358
label_321f50:
    if (ctx->pc == 0x321F50u) {
        ctx->pc = 0x321F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F4Cu;
        // 0x321f50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F54u;
        goto label_321f54;
    }
    ctx->pc = 0x321F4Cu;
    SET_GPR_U32(ctx, 31, 0x321F54u);
    ctx->pc = 0x321F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321F4Cu;
    // 0x321f50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x321F4Cu, 0x321F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321F54u;
label_321f54:
    // 0x321f54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x321f54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321f58:
    // 0x321f58: 0x12400024  beqz        $s2, . + 4 + (0x24 << 2)
label_321f5c:
    if (ctx->pc == 0x321F5Cu) {
        ctx->pc = 0x321F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F58u;
        // 0x321f5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F60u;
        goto label_321f60;
    }
    ctx->pc = 0x321F58u;
    {
        const bool branch_taken_0x321f58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x321F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F58u;
        // 0x321f5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321f58) {
            ctx->pc = 0x321FECu;
            goto label_321fec;
        }
    }
    ctx->pc = 0x321F60u;
label_321f60:
    // 0x321f60: 0xc0a3658  jal         func_28D960
label_321f64:
    if (ctx->pc == 0x321F64u) {
        ctx->pc = 0x321F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F60u;
        // 0x321f64: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F68u;
        goto label_321f68;
    }
    ctx->pc = 0x321F60u;
    SET_GPR_U32(ctx, 31, 0x321F68u);
    ctx->pc = 0x321F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321F60u;
    // 0x321f64: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x321F60u, 0x321F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321F68u;
label_321f68:
    // 0x321f68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x321f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321f6c:
    // 0x321f6c: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
label_321f70:
    if (ctx->pc == 0x321F70u) {
        ctx->pc = 0x321F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F6Cu;
        // 0x321f70: 0x26b30001  addiu       $s3, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F74u;
        goto label_321f74;
    }
    ctx->pc = 0x321F6Cu;
    {
        const bool branch_taken_0x321f6c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x321F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F6Cu;
        // 0x321f70: 0x26b30001  addiu       $s3, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321f6c) {
            ctx->pc = 0x321FA0u;
            goto label_321fa0;
        }
    }
    ctx->pc = 0x321F74u;
label_321f74:
    // 0x321f74: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x321f74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_321f78:
    // 0x321f78: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x321f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_321f7c:
    // 0x321f7c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_321f80:
    if (ctx->pc == 0x321F80u) {
        ctx->pc = 0x321F84u;
        goto label_321f84;
    }
    ctx->pc = 0x321F7Cu;
    {
        const bool branch_taken_0x321f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x321f7c) {
            ctx->pc = 0x321FA0u;
            goto label_321fa0;
        }
    }
    ctx->pc = 0x321F84u;
label_321f84:
    // 0x321f84: 0x0  nop
    ctx->pc = 0x321f84u;
    // NOP
label_321f88:
    // 0x321f88: 0xc0a35f6  jal         func_28D7D8
label_321f8c:
    if (ctx->pc == 0x321F8Cu) {
        ctx->pc = 0x321F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F88u;
        // 0x321f8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321F90u;
        goto label_321f90;
    }
    ctx->pc = 0x321F88u;
    SET_GPR_U32(ctx, 31, 0x321F90u);
    ctx->pc = 0x321F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321F88u;
    // 0x321f8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x321F88u, 0x321F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321F90u;
label_321f90:
    // 0x321f90: 0x8223002c  lb          $v1, 0x2C($s1)
    ctx->pc = 0x321f90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_321f94:
    // 0x321f94: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x321f94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_321f98:
    // 0x321f98: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
label_321f9c:
    if (ctx->pc == 0x321F9Cu) {
        ctx->pc = 0x321FA0u;
        goto label_321fa0;
    }
    ctx->pc = 0x321F98u;
    {
        const bool branch_taken_0x321f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x321f98) {
            ctx->pc = 0x321F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321f88;
        }
    }
    ctx->pc = 0x321FA0u;
label_321fa0:
    // 0x321fa0: 0xc0a4e54  jal         func_293950
label_321fa4:
    if (ctx->pc == 0x321FA4u) {
        ctx->pc = 0x321FA8u;
        goto label_321fa8;
    }
    ctx->pc = 0x321FA0u;
    SET_GPR_U32(ctx, 31, 0x321FA8u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x321FA0u, 0x321FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321FA8u;
label_321fa8:
    // 0x321fa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x321fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321fac:
    // 0x321fac: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_321fb0:
    if (ctx->pc == 0x321FB0u) {
        ctx->pc = 0x321FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FACu;
        // 0x321fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321FB4u;
        goto label_321fb4;
    }
    ctx->pc = 0x321FACu;
    {
        const bool branch_taken_0x321fac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x321fac) {
            ctx->pc = 0x321FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321FACu;
            // 0x321fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321FE0u;
            goto label_321fe0;
        }
    }
    ctx->pc = 0x321FB4u;
label_321fb4:
    // 0x321fb4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x321fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_321fb8:
    // 0x321fb8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x321fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_321fbc:
    // 0x321fbc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x321fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_321fc0:
    // 0x321fc0: 0x40f809  jalr        $v0
label_321fc4:
    if (ctx->pc == 0x321FC4u) {
        ctx->pc = 0x321FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FC0u;
        // 0x321fc4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321FC8u;
        goto label_321fc8;
    }
    ctx->pc = 0x321FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321FC8u);
        ctx->pc = 0x321FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FC0u;
        // 0x321fc4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321FC0u, 0x321FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321FC8u;
label_321fc8:
    // 0x321fc8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x321fc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321fcc:
    // 0x321fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x321fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_321fd0:
    // 0x321fd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x321fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321fd4:
    // 0x321fd4: 0xc0abd6c  jal         func_2AF5B0
label_321fd8:
    if (ctx->pc == 0x321FD8u) {
        ctx->pc = 0x321FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FD4u;
        // 0x321fd8: 0x2407008f  addiu       $a3, $zero, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321FDCu;
        goto label_321fdc;
    }
    ctx->pc = 0x321FD4u;
    SET_GPR_U32(ctx, 31, 0x321FDCu);
    ctx->pc = 0x321FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321FD4u;
    // 0x321fd8: 0x2407008f  addiu       $a3, $zero, 0x8F (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF5B0u, 0x321FD4u, 0x321FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321FDCu;
label_321fdc:
    // 0x321fdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x321fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321fe0:
    // 0x321fe0: 0xc0a35d6  jal         func_28D758
label_321fe4:
    if (ctx->pc == 0x321FE4u) {
        ctx->pc = 0x321FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FE0u;
        // 0x321fe4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321FE8u;
        goto label_321fe8;
    }
    ctx->pc = 0x321FE0u;
    SET_GPR_U32(ctx, 31, 0x321FE8u);
    ctx->pc = 0x321FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321FE0u;
    // 0x321fe4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x321FE0u, 0x321FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321FE8u;
label_321fe8:
    // 0x321fe8: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x321fe8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_321fec:
    // 0x321fec: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x321fecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_321ff0:
    // 0x321ff0: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x321ff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_321ff4:
    // 0x321ff4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_321ff8:
    if (ctx->pc == 0x321FF8u) {
        ctx->pc = 0x321FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FF4u;
        // 0x321ff8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321FFCu;
        goto label_321ffc;
    }
    ctx->pc = 0x321FF4u;
    {
        const bool branch_taken_0x321ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321ff4) {
            ctx->pc = 0x321FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321FF4u;
            // 0x321ff8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322010u;
            goto label_322010;
        }
    }
    ctx->pc = 0x321FFCu;
label_321ffc:
    // 0x321ffc: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x321ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_322000:
    // 0x322000: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x322000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_322004:
    // 0x322004: 0x1440ff90  bnez        $v0, . + 4 + (-0x70 << 2)
label_322008:
    if (ctx->pc == 0x322008u) {
        ctx->pc = 0x322008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322004u;
        // 0x322008: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32200Cu;
        goto label_32200c;
    }
    ctx->pc = 0x322004u;
    {
        const bool branch_taken_0x322004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322004u;
        // 0x322008: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322004) {
            ctx->pc = 0x321E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321e48;
        }
    }
    ctx->pc = 0x32200Cu;
label_32200c:
    // 0x32200c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x32200cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_322010:
    // 0x322010: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x322010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_322014:
    // 0x322014: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x322014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_322018:
    // 0x322018: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x322018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_32201c:
    // 0x32201c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x32201cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_322020:
    // 0x322020: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x322020u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_322024:
    // 0x322024: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x322024u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_322028:
    // 0x322028: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x322028u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32202c:
    // 0x32202c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x32202cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_322030:
    // 0x322030: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x322030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_322034:
    // 0x322034: 0x3e00008  jr          $ra
label_322038:
    if (ctx->pc == 0x322038u) {
        ctx->pc = 0x322038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322034u;
        // 0x322038: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32203Cu;
        goto label_32203c;
    }
    ctx->pc = 0x322034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322034u;
        // 0x322038: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32203Cu;
label_32203c:
    // 0x32203c: 0x0  nop
    ctx->pc = 0x32203cu;
    // NOP
    ctx->pc = 0x322040u;
}
