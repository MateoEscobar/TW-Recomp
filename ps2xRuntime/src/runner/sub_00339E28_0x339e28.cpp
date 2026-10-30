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

// Function: sub_00339E28
// Address: 0x339e28 - 0x33a050
void sub_00339E28_0x339e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339E28_0x339e28");
#endif

    switch (ctx->pc) {
        case 0x339e28u: goto label_339e28;
        case 0x339e2cu: goto label_339e2c;
        case 0x339e30u: goto label_339e30;
        case 0x339e34u: goto label_339e34;
        case 0x339e38u: goto label_339e38;
        case 0x339e3cu: goto label_339e3c;
        case 0x339e40u: goto label_339e40;
        case 0x339e44u: goto label_339e44;
        case 0x339e48u: goto label_339e48;
        case 0x339e4cu: goto label_339e4c;
        case 0x339e50u: goto label_339e50;
        case 0x339e54u: goto label_339e54;
        case 0x339e58u: goto label_339e58;
        case 0x339e5cu: goto label_339e5c;
        case 0x339e60u: goto label_339e60;
        case 0x339e64u: goto label_339e64;
        case 0x339e68u: goto label_339e68;
        case 0x339e6cu: goto label_339e6c;
        case 0x339e70u: goto label_339e70;
        case 0x339e74u: goto label_339e74;
        case 0x339e78u: goto label_339e78;
        case 0x339e7cu: goto label_339e7c;
        case 0x339e80u: goto label_339e80;
        case 0x339e84u: goto label_339e84;
        case 0x339e88u: goto label_339e88;
        case 0x339e8cu: goto label_339e8c;
        case 0x339e90u: goto label_339e90;
        case 0x339e94u: goto label_339e94;
        case 0x339e98u: goto label_339e98;
        case 0x339e9cu: goto label_339e9c;
        case 0x339ea0u: goto label_339ea0;
        case 0x339ea4u: goto label_339ea4;
        case 0x339ea8u: goto label_339ea8;
        case 0x339eacu: goto label_339eac;
        case 0x339eb0u: goto label_339eb0;
        case 0x339eb4u: goto label_339eb4;
        case 0x339eb8u: goto label_339eb8;
        case 0x339ebcu: goto label_339ebc;
        case 0x339ec0u: goto label_339ec0;
        case 0x339ec4u: goto label_339ec4;
        case 0x339ec8u: goto label_339ec8;
        case 0x339eccu: goto label_339ecc;
        case 0x339ed0u: goto label_339ed0;
        case 0x339ed4u: goto label_339ed4;
        case 0x339ed8u: goto label_339ed8;
        case 0x339edcu: goto label_339edc;
        case 0x339ee0u: goto label_339ee0;
        case 0x339ee4u: goto label_339ee4;
        case 0x339ee8u: goto label_339ee8;
        case 0x339eecu: goto label_339eec;
        case 0x339ef0u: goto label_339ef0;
        case 0x339ef4u: goto label_339ef4;
        case 0x339ef8u: goto label_339ef8;
        case 0x339efcu: goto label_339efc;
        case 0x339f00u: goto label_339f00;
        case 0x339f04u: goto label_339f04;
        case 0x339f08u: goto label_339f08;
        case 0x339f0cu: goto label_339f0c;
        case 0x339f10u: goto label_339f10;
        case 0x339f14u: goto label_339f14;
        case 0x339f18u: goto label_339f18;
        case 0x339f1cu: goto label_339f1c;
        case 0x339f20u: goto label_339f20;
        case 0x339f24u: goto label_339f24;
        case 0x339f28u: goto label_339f28;
        case 0x339f2cu: goto label_339f2c;
        case 0x339f30u: goto label_339f30;
        case 0x339f34u: goto label_339f34;
        case 0x339f38u: goto label_339f38;
        case 0x339f3cu: goto label_339f3c;
        case 0x339f40u: goto label_339f40;
        case 0x339f44u: goto label_339f44;
        case 0x339f48u: goto label_339f48;
        case 0x339f4cu: goto label_339f4c;
        case 0x339f50u: goto label_339f50;
        case 0x339f54u: goto label_339f54;
        case 0x339f58u: goto label_339f58;
        case 0x339f5cu: goto label_339f5c;
        case 0x339f60u: goto label_339f60;
        case 0x339f64u: goto label_339f64;
        case 0x339f68u: goto label_339f68;
        case 0x339f6cu: goto label_339f6c;
        case 0x339f70u: goto label_339f70;
        case 0x339f74u: goto label_339f74;
        case 0x339f78u: goto label_339f78;
        case 0x339f7cu: goto label_339f7c;
        case 0x339f80u: goto label_339f80;
        case 0x339f84u: goto label_339f84;
        case 0x339f88u: goto label_339f88;
        case 0x339f8cu: goto label_339f8c;
        case 0x339f90u: goto label_339f90;
        case 0x339f94u: goto label_339f94;
        case 0x339f98u: goto label_339f98;
        case 0x339f9cu: goto label_339f9c;
        case 0x339fa0u: goto label_339fa0;
        case 0x339fa4u: goto label_339fa4;
        case 0x339fa8u: goto label_339fa8;
        case 0x339facu: goto label_339fac;
        case 0x339fb0u: goto label_339fb0;
        case 0x339fb4u: goto label_339fb4;
        case 0x339fb8u: goto label_339fb8;
        case 0x339fbcu: goto label_339fbc;
        case 0x339fc0u: goto label_339fc0;
        case 0x339fc4u: goto label_339fc4;
        case 0x339fc8u: goto label_339fc8;
        case 0x339fccu: goto label_339fcc;
        case 0x339fd0u: goto label_339fd0;
        case 0x339fd4u: goto label_339fd4;
        case 0x339fd8u: goto label_339fd8;
        case 0x339fdcu: goto label_339fdc;
        case 0x339fe0u: goto label_339fe0;
        case 0x339fe4u: goto label_339fe4;
        case 0x339fe8u: goto label_339fe8;
        case 0x339fecu: goto label_339fec;
        case 0x339ff0u: goto label_339ff0;
        case 0x339ff4u: goto label_339ff4;
        case 0x339ff8u: goto label_339ff8;
        case 0x339ffcu: goto label_339ffc;
        case 0x33a000u: goto label_33a000;
        case 0x33a004u: goto label_33a004;
        case 0x33a008u: goto label_33a008;
        case 0x33a00cu: goto label_33a00c;
        case 0x33a010u: goto label_33a010;
        case 0x33a014u: goto label_33a014;
        case 0x33a018u: goto label_33a018;
        case 0x33a01cu: goto label_33a01c;
        case 0x33a020u: goto label_33a020;
        case 0x33a024u: goto label_33a024;
        case 0x33a028u: goto label_33a028;
        case 0x33a02cu: goto label_33a02c;
        case 0x33a030u: goto label_33a030;
        case 0x33a034u: goto label_33a034;
        case 0x33a038u: goto label_33a038;
        case 0x33a03cu: goto label_33a03c;
        case 0x33a040u: goto label_33a040;
        case 0x33a044u: goto label_33a044;
        case 0x33a048u: goto label_33a048;
        case 0x33a04cu: goto label_33a04c;
        default: break;
    }

    ctx->pc = 0x339e28u;

label_339e28:
    // 0x339e28: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x339e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_339e2c:
    // 0x339e2c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x339e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_339e30:
    // 0x339e30: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x339e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_339e34:
    // 0x339e34: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x339e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_339e38:
    // 0x339e38: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x339e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_339e3c:
    // 0x339e3c: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x339e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_339e40:
    // 0x339e40: 0x24a56e58  addiu       $a1, $a1, 0x6E58
    ctx->pc = 0x339e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28248));
label_339e44:
    // 0x339e44: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x339e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_339e48:
    // 0x339e48: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x339e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_339e4c:
    // 0x339e4c: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x339e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_339e50:
    // 0x339e50: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x339e50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_339e54:
    // 0x339e54: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x339e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_339e58:
    // 0x339e58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x339e58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_339e5c:
    // 0x339e5c: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x339e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_339e60:
    // 0x339e60: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x339e60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_339e64:
    // 0x339e64: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x339e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_339e68:
    // 0x339e68: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x339e68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_339e6c:
    // 0x339e6c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x339e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_339e70:
    // 0x339e70: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x339e70u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_339e74:
    // 0x339e74: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x339e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_339e78:
    // 0x339e78: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x339e78u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_339e7c:
    // 0x339e7c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x339e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_339e80:
    // 0x339e80: 0x3c080057  lui         $t0, 0x57
    ctx->pc = 0x339e80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)87 << 16));
label_339e84:
    // 0x339e84: 0x8c4327e4  lw          $v1, 0x27E4($v0)
    ctx->pc = 0x339e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_339e88:
    // 0x339e88: 0x25086e68  addiu       $t0, $t0, 0x6E68
    ctx->pc = 0x339e88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28264));
label_339e8c:
    // 0x339e8c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x339e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_339e90:
    // 0x339e90: 0x24090019  addiu       $t1, $zero, 0x19
    ctx->pc = 0x339e90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_339e94:
    // 0x339e94: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x339e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_339e98:
    // 0x339e98: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x339e98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339e9c:
    // 0x339e9c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x339e9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339ea0:
    // 0x339ea0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x339ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_339ea4:
    // 0x339ea4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x339ea4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_339ea8:
    // 0x339ea8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x339ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_339eac:
    // 0x339eac: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x339eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_339eb0:
    // 0x339eb0: 0x40f809  jalr        $v0
label_339eb4:
    if (ctx->pc == 0x339EB4u) {
        ctx->pc = 0x339EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339EB0u;
        // 0x339eb4: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339EB8u;
        goto label_339eb8;
    }
    ctx->pc = 0x339EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339EB8u);
        ctx->pc = 0x339EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339EB0u;
        // 0x339eb4: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339EB0u, 0x339EB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339EB8u;
label_339eb8:
    // 0x339eb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x339eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_339ebc:
    // 0x339ebc: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_339ec0:
    if (ctx->pc == 0x339EC0u) {
        ctx->pc = 0x339EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339EBCu;
        // 0x339ec0: 0xa200002b  sb          $zero, 0x2B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339EC4u;
        goto label_339ec4;
    }
    ctx->pc = 0x339EBCu;
    {
        const bool branch_taken_0x339ebc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x339ebc) {
            ctx->pc = 0x339EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339EBCu;
            // 0x339ec0: 0xa200002b  sb          $zero, 0x2B($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339ECCu;
            goto label_339ecc;
        }
    }
    ctx->pc = 0x339EC4u;
label_339ec4:
    // 0x339ec4: 0x10000055  b           . + 4 + (0x55 << 2)
label_339ec8:
    if (ctx->pc == 0x339EC8u) {
        ctx->pc = 0x339EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339EC4u;
        // 0x339ec8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339ECCu;
        goto label_339ecc;
    }
    ctx->pc = 0x339EC4u;
    {
        const bool branch_taken_0x339ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339EC4u;
        // 0x339ec8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339ec4) {
            ctx->pc = 0x33A01Cu;
            goto label_33a01c;
        }
    }
    ctx->pc = 0x339ECCu;
label_339ecc:
    // 0x339ecc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x339eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_339ed0:
    // 0x339ed0: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x339ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_339ed4:
    // 0x339ed4: 0xc10c4de  jal         func_431378
label_339ed8:
    if (ctx->pc == 0x339ED8u) {
        ctx->pc = 0x339ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339ED4u;
        // 0x339ed8: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339EDCu;
        goto label_339edc;
    }
    ctx->pc = 0x339ED4u;
    SET_GPR_U32(ctx, 31, 0x339EDCu);
    ctx->pc = 0x339ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339ED4u;
    // 0x339ed8: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x339ED4u, 0x339EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339EDCu;
label_339edc:
    // 0x339edc: 0x26730048  addiu       $s3, $s3, 0x48
    ctx->pc = 0x339edcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
label_339ee0:
    // 0x339ee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x339ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_339ee4:
    // 0x339ee4: 0xc10c3ac  jal         func_430EB0
label_339ee8:
    if (ctx->pc == 0x339EE8u) {
        ctx->pc = 0x339EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339EE4u;
        // 0x339ee8: 0x2614004c  addiu       $s4, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339EECu;
        goto label_339eec;
    }
    ctx->pc = 0x339EE4u;
    SET_GPR_U32(ctx, 31, 0x339EECu);
    ctx->pc = 0x339EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339EE4u;
    // 0x339ee8: 0x2614004c  addiu       $s4, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x339EE4u, 0x339EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339EECu;
label_339eec:
    // 0x339eec: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x339eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_339ef0:
    // 0x339ef0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x339ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_339ef4:
    // 0x339ef4: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
label_339ef8:
    if (ctx->pc == 0x339EF8u) {
        ctx->pc = 0x339EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339EF4u;
        // 0x339ef8: 0x27b20060  addiu       $s2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339EFCu;
        goto label_339efc;
    }
    ctx->pc = 0x339EF4u;
    {
        const bool branch_taken_0x339ef4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x339EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339EF4u;
        // 0x339ef8: 0x27b20060  addiu       $s2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339ef4) {
            ctx->pc = 0x339F3Cu;
            goto label_339f3c;
        }
    }
    ctx->pc = 0x339EFCu;
label_339efc:
    // 0x339efc: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x339efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_339f00:
    // 0x339f00: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x339f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_339f04:
    // 0x339f04: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x339f04u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_339f08:
    // 0x339f08: 0x10c3000c  beq         $a2, $v1, . + 4 + (0xC << 2)
label_339f0c:
    if (ctx->pc == 0x339F0Cu) {
        ctx->pc = 0x339F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F08u;
        // 0x339f0c: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339F10u;
        goto label_339f10;
    }
    ctx->pc = 0x339F08u;
    {
        const bool branch_taken_0x339f08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x339F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F08u;
        // 0x339f0c: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339f08) {
            ctx->pc = 0x339F3Cu;
            goto label_339f3c;
        }
    }
    ctx->pc = 0x339F10u;
label_339f10:
    // 0x339f10: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
label_339f14:
    if (ctx->pc == 0x339F14u) {
        ctx->pc = 0x339F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F10u;
        // 0x339f14: 0x2406005c  addiu       $a2, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339F18u;
        goto label_339f18;
    }
    ctx->pc = 0x339F10u;
    {
        const bool branch_taken_0x339f10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x339F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F10u;
        // 0x339f14: 0x2406005c  addiu       $a2, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339f10) {
            ctx->pc = 0x339F3Cu;
            goto label_339f3c;
        }
    }
    ctx->pc = 0x339F18u;
label_339f18:
    // 0x339f18: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x339f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_339f1c:
    // 0x339f1c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x339f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_339f20:
    // 0x339f20: 0x18a00006  blez        $a1, . + 4 + (0x6 << 2)
label_339f24:
    if (ctx->pc == 0x339F24u) {
        ctx->pc = 0x339F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F20u;
        // 0x339f24: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339F28u;
        goto label_339f28;
    }
    ctx->pc = 0x339F20u;
    {
        const bool branch_taken_0x339f20 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x339F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F20u;
        // 0x339f24: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339f20) {
            ctx->pc = 0x339F3Cu;
            goto label_339f3c;
        }
    }
    ctx->pc = 0x339F28u;
label_339f28:
    // 0x339f28: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x339f28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_339f2c:
    // 0x339f2c: 0x50460004  beql        $v0, $a2, . + 4 + (0x4 << 2)
label_339f30:
    if (ctx->pc == 0x339F30u) {
        ctx->pc = 0x339F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F2Cu;
        // 0x339f30: 0xa200004b  sb          $zero, 0x4B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339F34u;
        goto label_339f34;
    }
    ctx->pc = 0x339F2Cu;
    {
        const bool branch_taken_0x339f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x339f2c) {
            ctx->pc = 0x339F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339F2Cu;
            // 0x339f30: 0xa200004b  sb          $zero, 0x4B($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339F40u;
            goto label_339f40;
        }
    }
    ctx->pc = 0x339F34u;
label_339f34:
    // 0x339f34: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
label_339f38:
    if (ctx->pc == 0x339F38u) {
        ctx->pc = 0x339F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F34u;
        // 0x339f38: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339F3Cu;
        goto label_339f3c;
    }
    ctx->pc = 0x339F34u;
    {
        const bool branch_taken_0x339f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x339f34) {
            ctx->pc = 0x339F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339F34u;
            // 0x339f38: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339f20;
        }
    }
    ctx->pc = 0x339F3Cu;
label_339f3c:
    // 0x339f3c: 0xa200004b  sb          $zero, 0x4B($s0)
    ctx->pc = 0x339f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 0));
label_339f40:
    // 0x339f40: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x339f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_339f44:
    // 0x339f44: 0xc10c4de  jal         func_431378
label_339f48:
    if (ctx->pc == 0x339F48u) {
        ctx->pc = 0x339F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F44u;
        // 0x339f48: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339F4Cu;
        goto label_339f4c;
    }
    ctx->pc = 0x339F44u;
    SET_GPR_U32(ctx, 31, 0x339F4Cu);
    ctx->pc = 0x339F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339F44u;
    // 0x339f48: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x339F44u, 0x339F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339F4Cu;
label_339f4c:
    // 0x339f4c: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_339f50:
    if (ctx->pc == 0x339F50u) {
        ctx->pc = 0x339F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F4Cu;
        // 0x339f50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339F54u;
        goto label_339f54;
    }
    ctx->pc = 0x339F4Cu;
    {
        const bool branch_taken_0x339f4c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x339F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F4Cu;
        // 0x339f50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339f4c) {
            ctx->pc = 0x339F6Cu;
            goto label_339f6c;
        }
    }
    ctx->pc = 0x339F54u;
label_339f54:
    // 0x339f54: 0xa2000062  sb          $zero, 0x62($s0)
    ctx->pc = 0x339f54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 98), (uint8_t)GPR_U32(ctx, 0));
label_339f58:
    // 0x339f58: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x339f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_339f5c:
    // 0x339f5c: 0xc10c4de  jal         func_431378
label_339f60:
    if (ctx->pc == 0x339F60u) {
        ctx->pc = 0x339F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F5Cu;
        // 0x339f60: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339F64u;
        goto label_339f64;
    }
    ctx->pc = 0x339F5Cu;
    SET_GPR_U32(ctx, 31, 0x339F64u);
    ctx->pc = 0x339F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339F5Cu;
    // 0x339f60: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x339F5Cu, 0x339F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339F64u;
label_339f64:
    // 0x339f64: 0x10000006  b           . + 4 + (0x6 << 2)
label_339f68:
    if (ctx->pc == 0x339F68u) {
        ctx->pc = 0x339F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F64u;
        // 0x339f68: 0xa2000063  sb          $zero, 0x63($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 99), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339F6Cu;
        goto label_339f6c;
    }
    ctx->pc = 0x339F64u;
    {
        const bool branch_taken_0x339f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F64u;
        // 0x339f68: 0xa2000063  sb          $zero, 0x63($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 99), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339f64) {
            ctx->pc = 0x339F80u;
            goto label_339f80;
        }
    }
    ctx->pc = 0x339F6Cu;
label_339f6c:
    // 0x339f6c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x339f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_339f70:
    // 0x339f70: 0xa2000063  sb          $zero, 0x63($s0)
    ctx->pc = 0x339f70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 99), (uint8_t)GPR_U32(ctx, 0));
label_339f74:
    // 0x339f74: 0x24a56e98  addiu       $a1, $a1, 0x6E98
    ctx->pc = 0x339f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28312));
label_339f78:
    // 0x339f78: 0xc10c4de  jal         func_431378
label_339f7c:
    if (ctx->pc == 0x339F7Cu) {
        ctx->pc = 0x339F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F78u;
        // 0x339f7c: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339F80u;
        goto label_339f80;
    }
    ctx->pc = 0x339F78u;
    SET_GPR_U32(ctx, 31, 0x339F80u);
    ctx->pc = 0x339F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339F78u;
    // 0x339f7c: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x339F78u, 0x339F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339F80u;
label_339f80:
    // 0x339f80: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x339f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_339f84:
    // 0x339f84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x339f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_339f88:
    // 0x339f88: 0xa6160008  sh          $s6, 0x8($s0)
    ctx->pc = 0x339f88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 22));
label_339f8c:
    // 0x339f8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x339f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_339f90:
    // 0x339f90: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x339f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_339f94:
    // 0x339f94: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x339f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_339f98:
    // 0x339f98: 0xa217000a  sb          $s7, 0xA($s0)
    ctx->pc = 0x339f98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 23));
label_339f9c:
    // 0x339f9c: 0xae1e0004  sw          $fp, 0x4($s0)
    ctx->pc = 0x339f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 30));
label_339fa0:
    // 0x339fa0: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x339fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_339fa4:
    // 0x339fa4: 0xc13c1aa  jal         func_4F06A8
label_339fa8:
    if (ctx->pc == 0x339FA8u) {
        ctx->pc = 0x339FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339FA4u;
        // 0x339fa8: 0xa203000b  sb          $v1, 0xB($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339FACu;
        goto label_339fac;
    }
    ctx->pc = 0x339FA4u;
    SET_GPR_U32(ctx, 31, 0x339FACu);
    ctx->pc = 0x339FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339FA4u;
    // 0x339fa8: 0xa203000b  sb          $v1, 0xB($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F06A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F06A8u, 0x339FA4u, 0x339FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339FACu;
label_339fac:
    // 0x339fac: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x339facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_339fb0:
    // 0x339fb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x339fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339fb4:
    // 0x339fb4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x339fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_339fb8:
    // 0x339fb8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_339fbc:
    if (ctx->pc == 0x339FBCu) {
        ctx->pc = 0x339FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339FB8u;
        // 0x339fbc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339FC0u;
        goto label_339fc0;
    }
    ctx->pc = 0x339FB8u;
    {
        const bool branch_taken_0x339fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x339FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339FB8u;
        // 0x339fbc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339fb8) {
            ctx->pc = 0x339FD4u;
            goto label_339fd4;
        }
    }
    ctx->pc = 0x339FC0u;
label_339fc0:
    // 0x339fc0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x339fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_339fc4:
    // 0x339fc4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x339fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_339fc8:
    // 0x339fc8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x339fc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_339fcc:
    // 0x339fcc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_339fd0:
    if (ctx->pc == 0x339FD0u) {
        ctx->pc = 0x339FD4u;
        goto label_339fd4;
    }
    ctx->pc = 0x339FCCu;
    {
        const bool branch_taken_0x339fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339fcc) {
            ctx->pc = 0x339FD8u;
            goto label_339fd8;
        }
    }
    ctx->pc = 0x339FD4u;
label_339fd4:
    // 0x339fd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x339fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_339fd8:
    // 0x339fd8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_339fdc:
    if (ctx->pc == 0x339FDCu) {
        ctx->pc = 0x339FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339FD8u;
        // 0x339fdc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339FE0u;
        goto label_339fe0;
    }
    ctx->pc = 0x339FD8u;
    {
        const bool branch_taken_0x339fd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x339FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339FD8u;
        // 0x339fdc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339fd8) {
            ctx->pc = 0x33A010u;
            goto label_33a010;
        }
    }
    ctx->pc = 0x339FE0u;
label_339fe0:
    // 0x339fe0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x339fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_339fe4:
    // 0x339fe4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x339fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_339fe8:
    // 0x339fe8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x339fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_339fec:
    // 0x339fec: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x339fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_339ff0:
    // 0x339ff0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x339ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_339ff4:
    // 0x339ff4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x339ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_339ff8:
    // 0x339ff8: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x339ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_339ffc:
    // 0x339ffc: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x339ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_33a000:
    // 0x33a000: 0xc13c306  jal         func_4F0C18
label_33a004:
    if (ctx->pc == 0x33A004u) {
        ctx->pc = 0x33A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A000u;
        // 0x33a004: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A008u;
        goto label_33a008;
    }
    ctx->pc = 0x33A000u;
    SET_GPR_U32(ctx, 31, 0x33A008u);
    ctx->pc = 0x33A004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A000u;
    // 0x33a004: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F0C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F0C18u, 0x33A000u, 0x33A008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A008u;
label_33a008:
    // 0x33a008: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x33a008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_33a00c:
    // 0x33a00c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x33a00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_33a010:
    // 0x33a010: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x33a010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33a014:
    // 0x33a014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33a014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33a018:
    // 0x33a018: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x33a018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
label_33a01c:
    // 0x33a01c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x33a01cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_33a020:
    // 0x33a020: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x33a020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_33a024:
    // 0x33a024: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x33a024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_33a028:
    // 0x33a028: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x33a028u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_33a02c:
    // 0x33a02c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x33a02cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_33a030:
    // 0x33a030: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x33a030u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_33a034:
    // 0x33a034: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x33a034u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_33a038:
    // 0x33a038: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x33a038u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_33a03c:
    // 0x33a03c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x33a03cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_33a040:
    // 0x33a040: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x33a040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_33a044:
    // 0x33a044: 0x3e00008  jr          $ra
label_33a048:
    if (ctx->pc == 0x33A048u) {
        ctx->pc = 0x33A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A044u;
        // 0x33a048: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A04Cu;
        goto label_33a04c;
    }
    ctx->pc = 0x33A044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A044u;
        // 0x33a048: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A04Cu;
label_33a04c:
    // 0x33a04c: 0x0  nop
    ctx->pc = 0x33a04cu;
    // NOP
    ctx->pc = 0x33a050u;
}
