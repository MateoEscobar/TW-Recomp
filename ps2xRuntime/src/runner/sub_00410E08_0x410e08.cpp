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

// Function: sub_00410E08
// Address: 0x410e08 - 0x411010
void sub_00410E08_0x410e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00410E08_0x410e08");
#endif

    switch (ctx->pc) {
        case 0x410e08u: goto label_410e08;
        case 0x410e0cu: goto label_410e0c;
        case 0x410e10u: goto label_410e10;
        case 0x410e14u: goto label_410e14;
        case 0x410e18u: goto label_410e18;
        case 0x410e1cu: goto label_410e1c;
        case 0x410e20u: goto label_410e20;
        case 0x410e24u: goto label_410e24;
        case 0x410e28u: goto label_410e28;
        case 0x410e2cu: goto label_410e2c;
        case 0x410e30u: goto label_410e30;
        case 0x410e34u: goto label_410e34;
        case 0x410e38u: goto label_410e38;
        case 0x410e3cu: goto label_410e3c;
        case 0x410e40u: goto label_410e40;
        case 0x410e44u: goto label_410e44;
        case 0x410e48u: goto label_410e48;
        case 0x410e4cu: goto label_410e4c;
        case 0x410e50u: goto label_410e50;
        case 0x410e54u: goto label_410e54;
        case 0x410e58u: goto label_410e58;
        case 0x410e5cu: goto label_410e5c;
        case 0x410e60u: goto label_410e60;
        case 0x410e64u: goto label_410e64;
        case 0x410e68u: goto label_410e68;
        case 0x410e6cu: goto label_410e6c;
        case 0x410e70u: goto label_410e70;
        case 0x410e74u: goto label_410e74;
        case 0x410e78u: goto label_410e78;
        case 0x410e7cu: goto label_410e7c;
        case 0x410e80u: goto label_410e80;
        case 0x410e84u: goto label_410e84;
        case 0x410e88u: goto label_410e88;
        case 0x410e8cu: goto label_410e8c;
        case 0x410e90u: goto label_410e90;
        case 0x410e94u: goto label_410e94;
        case 0x410e98u: goto label_410e98;
        case 0x410e9cu: goto label_410e9c;
        case 0x410ea0u: goto label_410ea0;
        case 0x410ea4u: goto label_410ea4;
        case 0x410ea8u: goto label_410ea8;
        case 0x410eacu: goto label_410eac;
        case 0x410eb0u: goto label_410eb0;
        case 0x410eb4u: goto label_410eb4;
        case 0x410eb8u: goto label_410eb8;
        case 0x410ebcu: goto label_410ebc;
        case 0x410ec0u: goto label_410ec0;
        case 0x410ec4u: goto label_410ec4;
        case 0x410ec8u: goto label_410ec8;
        case 0x410eccu: goto label_410ecc;
        case 0x410ed0u: goto label_410ed0;
        case 0x410ed4u: goto label_410ed4;
        case 0x410ed8u: goto label_410ed8;
        case 0x410edcu: goto label_410edc;
        case 0x410ee0u: goto label_410ee0;
        case 0x410ee4u: goto label_410ee4;
        case 0x410ee8u: goto label_410ee8;
        case 0x410eecu: goto label_410eec;
        case 0x410ef0u: goto label_410ef0;
        case 0x410ef4u: goto label_410ef4;
        case 0x410ef8u: goto label_410ef8;
        case 0x410efcu: goto label_410efc;
        case 0x410f00u: goto label_410f00;
        case 0x410f04u: goto label_410f04;
        case 0x410f08u: goto label_410f08;
        case 0x410f0cu: goto label_410f0c;
        case 0x410f10u: goto label_410f10;
        case 0x410f14u: goto label_410f14;
        case 0x410f18u: goto label_410f18;
        case 0x410f1cu: goto label_410f1c;
        case 0x410f20u: goto label_410f20;
        case 0x410f24u: goto label_410f24;
        case 0x410f28u: goto label_410f28;
        case 0x410f2cu: goto label_410f2c;
        case 0x410f30u: goto label_410f30;
        case 0x410f34u: goto label_410f34;
        case 0x410f38u: goto label_410f38;
        case 0x410f3cu: goto label_410f3c;
        case 0x410f40u: goto label_410f40;
        case 0x410f44u: goto label_410f44;
        case 0x410f48u: goto label_410f48;
        case 0x410f4cu: goto label_410f4c;
        case 0x410f50u: goto label_410f50;
        case 0x410f54u: goto label_410f54;
        case 0x410f58u: goto label_410f58;
        case 0x410f5cu: goto label_410f5c;
        case 0x410f60u: goto label_410f60;
        case 0x410f64u: goto label_410f64;
        case 0x410f68u: goto label_410f68;
        case 0x410f6cu: goto label_410f6c;
        case 0x410f70u: goto label_410f70;
        case 0x410f74u: goto label_410f74;
        case 0x410f78u: goto label_410f78;
        case 0x410f7cu: goto label_410f7c;
        case 0x410f80u: goto label_410f80;
        case 0x410f84u: goto label_410f84;
        case 0x410f88u: goto label_410f88;
        case 0x410f8cu: goto label_410f8c;
        case 0x410f90u: goto label_410f90;
        case 0x410f94u: goto label_410f94;
        case 0x410f98u: goto label_410f98;
        case 0x410f9cu: goto label_410f9c;
        case 0x410fa0u: goto label_410fa0;
        case 0x410fa4u: goto label_410fa4;
        case 0x410fa8u: goto label_410fa8;
        case 0x410facu: goto label_410fac;
        case 0x410fb0u: goto label_410fb0;
        case 0x410fb4u: goto label_410fb4;
        case 0x410fb8u: goto label_410fb8;
        case 0x410fbcu: goto label_410fbc;
        case 0x410fc0u: goto label_410fc0;
        case 0x410fc4u: goto label_410fc4;
        case 0x410fc8u: goto label_410fc8;
        case 0x410fccu: goto label_410fcc;
        case 0x410fd0u: goto label_410fd0;
        case 0x410fd4u: goto label_410fd4;
        case 0x410fd8u: goto label_410fd8;
        case 0x410fdcu: goto label_410fdc;
        case 0x410fe0u: goto label_410fe0;
        case 0x410fe4u: goto label_410fe4;
        case 0x410fe8u: goto label_410fe8;
        case 0x410fecu: goto label_410fec;
        case 0x410ff0u: goto label_410ff0;
        case 0x410ff4u: goto label_410ff4;
        case 0x410ff8u: goto label_410ff8;
        case 0x410ffcu: goto label_410ffc;
        case 0x411000u: goto label_411000;
        case 0x411004u: goto label_411004;
        case 0x411008u: goto label_411008;
        case 0x41100cu: goto label_41100c;
        default: break;
    }

    ctx->pc = 0x410e08u;

label_410e08:
    // 0x410e08: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x410e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_410e0c:
    // 0x410e0c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x410e0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_410e10:
    // 0x410e10: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x410e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
label_410e14:
    // 0x410e14: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x410e14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_410e18:
    // 0x410e18: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x410e18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_410e1c:
    // 0x410e1c: 0x24c68e00  addiu       $a2, $a2, -0x7200
    ctx->pc = 0x410e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938112));
label_410e20:
    // 0x410e20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x410e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_410e24:
    // 0x410e24: 0x240500fe  addiu       $a1, $zero, 0xFE
    ctx->pc = 0x410e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_410e28:
    // 0x410e28: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x410e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
label_410e2c:
    // 0x410e2c: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x410e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
label_410e30:
    // 0x410e30: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x410e30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_410e34:
    // 0x410e34: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x410e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
label_410e38:
    // 0x410e38: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x410e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
label_410e3c:
    // 0x410e3c: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x410e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
label_410e40:
    // 0x410e40: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x410e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
label_410e44:
    // 0x410e44: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x410e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
label_410e48:
    // 0x410e48: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x410e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_410e4c:
    // 0x410e4c: 0xc10ca04  jal         func_432810
label_410e50:
    if (ctx->pc == 0x410E50u) {
        ctx->pc = 0x410E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410E4Cu;
        // 0x410e50: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410E54u;
        goto label_410e54;
    }
    ctx->pc = 0x410E4Cu;
    SET_GPR_U32(ctx, 31, 0x410E54u);
    ctx->pc = 0x410E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410E4Cu;
    // 0x410e50: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x410E4Cu, 0x410E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410E54u;
label_410e54:
    // 0x410e54: 0xae60216c  sw          $zero, 0x216C($s3)
    ctx->pc = 0x410e54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8556), GPR_U32(ctx, 0));
label_410e58:
    // 0x410e58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x410e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_410e5c:
    // 0x410e5c: 0xae602170  sw          $zero, 0x2170($s3)
    ctx->pc = 0x410e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8560), GPR_U32(ctx, 0));
label_410e60:
    // 0x410e60: 0x8e02b788  lw          $v0, -0x4878($s0)
    ctx->pc = 0x410e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948744)));
label_410e64:
    // 0x410e64: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x410e64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_410e68:
    // 0x410e68: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x410e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_410e6c:
    // 0x410e6c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x410e6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_410e70:
    // 0x410e70: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x410e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_410e74:
    // 0x410e74: 0x40f809  jalr        $v0
label_410e78:
    if (ctx->pc == 0x410E78u) {
        ctx->pc = 0x410E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410E74u;
        // 0x410e78: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410E7Cu;
        goto label_410e7c;
    }
    ctx->pc = 0x410E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x410E7Cu);
        ctx->pc = 0x410E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410E74u;
        // 0x410e78: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410E74u, 0x410E7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410E7Cu;
label_410e7c:
    // 0x410e7c: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_410e80:
    if (ctx->pc == 0x410E80u) {
        ctx->pc = 0x410E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410E7Cu;
        // 0x410e80: 0x8ec2b788  lw          $v0, -0x4878($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410E84u;
        goto label_410e84;
    }
    ctx->pc = 0x410E7Cu;
    {
        const bool branch_taken_0x410e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x410E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410E7Cu;
        // 0x410e80: 0x8ec2b788  lw          $v0, -0x4878($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410e7c) {
            ctx->pc = 0x410FDCu;
            goto label_410fdc;
        }
    }
    ctx->pc = 0x410E84u;
label_410e84:
    // 0x410e84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x410e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_410e88:
    // 0x410e88: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x410e88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410e8c:
    // 0x410e8c: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x410e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_410e90:
    // 0x410e90: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x410e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_410e94:
    // 0x410e94: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x410e94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_410e98:
    // 0x410e98: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x410e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_410e9c:
    // 0x410e9c: 0x40f809  jalr        $v0
label_410ea0:
    if (ctx->pc == 0x410EA0u) {
        ctx->pc = 0x410EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410E9Cu;
        // 0x410ea0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410EA4u;
        goto label_410ea4;
    }
    ctx->pc = 0x410E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x410EA4u);
        ctx->pc = 0x410EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410E9Cu;
        // 0x410ea0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410E9Cu, 0x410EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410EA4u;
label_410ea4:
    // 0x410ea4: 0x8ec4b788  lw          $a0, -0x4878($s6)
    ctx->pc = 0x410ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948744)));
label_410ea8:
    // 0x410ea8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x410ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_410eac:
    // 0x410eac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x410eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410eb0:
    // 0x410eb0: 0x8c870090  lw          $a3, 0x90($a0)
    ctx->pc = 0x410eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_410eb4:
    // 0x410eb4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x410eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_410eb8:
    // 0x410eb8: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x410eb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_410ebc:
    // 0x410ebc: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x410ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_410ec0:
    // 0x410ec0: 0x40f809  jalr        $v0
label_410ec4:
    if (ctx->pc == 0x410EC4u) {
        ctx->pc = 0x410EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410EC0u;
        // 0x410ec4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410EC8u;
        goto label_410ec8;
    }
    ctx->pc = 0x410EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x410EC8u);
        ctx->pc = 0x410EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410EC0u;
        // 0x410ec4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410EC0u, 0x410EC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410EC8u;
label_410ec8:
    // 0x410ec8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x410ec8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_410ecc:
    // 0x410ecc: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x410eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_410ed0:
    // 0x410ed0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x410ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_410ed4:
    // 0x410ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x410ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_410ed8:
    // 0x410ed8: 0x8c435340  lw          $v1, 0x5340($v0)
    ctx->pc = 0x410ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
label_410edc:
    // 0x410edc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x410edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_410ee0:
    // 0x410ee0: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x410ee0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_410ee4:
    // 0x410ee4: 0x8c670040  lw          $a3, 0x40($v1)
    ctx->pc = 0x410ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_410ee8:
    // 0x410ee8: 0xc055130  jal         func_1544C0
label_410eec:
    if (ctx->pc == 0x410EECu) {
        ctx->pc = 0x410EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410EE8u;
        // 0x410eec: 0x8c66003c  lw          $a2, 0x3C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410EF0u;
        goto label_410ef0;
    }
    ctx->pc = 0x410EE8u;
    SET_GPR_U32(ctx, 31, 0x410EF0u);
    ctx->pc = 0x410EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410EE8u;
    // 0x410eec: 0x8c66003c  lw          $a2, 0x3C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1544C0u, 0x410EE8u, 0x410EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410EF0u;
label_410ef0:
    // 0x410ef0: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x410ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_410ef4:
    // 0x410ef4: 0x2665216c  addiu       $a1, $s3, 0x216C
    ctx->pc = 0x410ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8556));
label_410ef8:
    // 0x410ef8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x410ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_410efc:
    // 0x410efc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x410efcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_410f00:
    // 0x410f00: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x410f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_410f04:
    // 0x410f04: 0x40f809  jalr        $v0
label_410f08:
    if (ctx->pc == 0x410F08u) {
        ctx->pc = 0x410F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410F04u;
        // 0x410f08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410F0Cu;
        goto label_410f0c;
    }
    ctx->pc = 0x410F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x410F0Cu);
        ctx->pc = 0x410F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410F04u;
        // 0x410f08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410F04u, 0x410F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410F0Cu;
label_410f0c:
    // 0x410f0c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x410f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_410f10:
    // 0x410f10: 0x26652170  addiu       $a1, $s3, 0x2170
    ctx->pc = 0x410f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8560));
label_410f14:
    // 0x410f14: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x410f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_410f18:
    // 0x410f18: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x410f18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_410f1c:
    // 0x410f1c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x410f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_410f20:
    // 0x410f20: 0x40f809  jalr        $v0
label_410f24:
    if (ctx->pc == 0x410F24u) {
        ctx->pc = 0x410F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410F20u;
        // 0x410f24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410F28u;
        goto label_410f28;
    }
    ctx->pc = 0x410F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x410F28u);
        ctx->pc = 0x410F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410F20u;
        // 0x410f24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410F20u, 0x410F28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410F28u;
label_410f28:
    // 0x410f28: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x410f28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_410f2c:
    // 0x410f2c: 0x26652164  addiu       $a1, $s3, 0x2164
    ctx->pc = 0x410f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8548));
label_410f30:
    // 0x410f30: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x410f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_410f34:
    // 0x410f34: 0x84e40050  lh          $a0, 0x50($a3)
    ctx->pc = 0x410f34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
label_410f38:
    // 0x410f38: 0x8ce30054  lw          $v1, 0x54($a3)
    ctx->pc = 0x410f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
label_410f3c:
    // 0x410f3c: 0x60f809  jalr        $v1
label_410f40:
    if (ctx->pc == 0x410F40u) {
        ctx->pc = 0x410F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410F3Cu;
        // 0x410f40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410F44u;
        goto label_410f44;
    }
    ctx->pc = 0x410F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x410F44u);
        ctx->pc = 0x410F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410F3Cu;
        // 0x410f40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410F3Cu, 0x410F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410F44u;
label_410f44:
    // 0x410f44: 0x8e622164  lw          $v0, 0x2164($s3)
    ctx->pc = 0x410f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8548)));
label_410f48:
    // 0x410f48: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
label_410f4c:
    if (ctx->pc == 0x410F4Cu) {
        ctx->pc = 0x410F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410F48u;
        // 0x410f4c: 0x26721230  addiu       $s2, $s3, 0x1230 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410F50u;
        goto label_410f50;
    }
    ctx->pc = 0x410F48u;
    {
        const bool branch_taken_0x410f48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x410F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410F48u;
        // 0x410f4c: 0x26721230  addiu       $s2, $s3, 0x1230 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410f48) {
            ctx->pc = 0x410FA8u;
            goto label_410fa8;
        }
    }
    ctx->pc = 0x410F50u;
label_410f50:
    // 0x410f50: 0x2671122c  addiu       $s1, $s3, 0x122C
    ctx->pc = 0x410f50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4652));
label_410f54:
    // 0x410f54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x410f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_410f58:
    // 0x410f58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x410f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_410f5c:
    // 0x410f5c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x410f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_410f60:
    // 0x410f60: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x410f60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_410f64:
    // 0x410f64: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x410f64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_410f68:
    // 0x410f68: 0x2631001c  addiu       $s1, $s1, 0x1C
    ctx->pc = 0x410f68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_410f6c:
    // 0x410f6c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x410f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_410f70:
    // 0x410f70: 0x40f809  jalr        $v0
label_410f74:
    if (ctx->pc == 0x410F74u) {
        ctx->pc = 0x410F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410F70u;
        // 0x410f74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410F78u;
        goto label_410f78;
    }
    ctx->pc = 0x410F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x410F78u);
        ctx->pc = 0x410F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410F70u;
        // 0x410f74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410F70u, 0x410F78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410F78u;
label_410f78:
    // 0x410f78: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x410f78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_410f7c:
    // 0x410f7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x410f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_410f80:
    // 0x410f80: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x410f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_410f84:
    // 0x410f84: 0x2652001c  addiu       $s2, $s2, 0x1C
    ctx->pc = 0x410f84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_410f88:
    // 0x410f88: 0x84e40050  lh          $a0, 0x50($a3)
    ctx->pc = 0x410f88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
label_410f8c:
    // 0x410f8c: 0x8ce30054  lw          $v1, 0x54($a3)
    ctx->pc = 0x410f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
label_410f90:
    // 0x410f90: 0x60f809  jalr        $v1
label_410f94:
    if (ctx->pc == 0x410F94u) {
        ctx->pc = 0x410F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410F90u;
        // 0x410f94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410F98u;
        goto label_410f98;
    }
    ctx->pc = 0x410F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x410F98u);
        ctx->pc = 0x410F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410F90u;
        // 0x410f94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410F90u, 0x410F98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410F98u;
label_410f98:
    // 0x410f98: 0x8e622164  lw          $v0, 0x2164($s3)
    ctx->pc = 0x410f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8548)));
label_410f9c:
    // 0x410f9c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x410f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_410fa0:
    // 0x410fa0: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_410fa4:
    if (ctx->pc == 0x410FA4u) {
        ctx->pc = 0x410FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410FA0u;
        // 0x410fa4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410FA8u;
        goto label_410fa8;
    }
    ctx->pc = 0x410FA0u;
    {
        const bool branch_taken_0x410fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x410fa0) {
            ctx->pc = 0x410FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x410FA0u;
            // 0x410fa4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_410f58;
        }
    }
    ctx->pc = 0x410FA8u;
label_410fa8:
    // 0x410fa8: 0xc0551c6  jal         func_154718
label_410fac:
    if (ctx->pc == 0x410FACu) {
        ctx->pc = 0x410FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410FA8u;
        // 0x410fac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410FB0u;
        goto label_410fb0;
    }
    ctx->pc = 0x410FA8u;
    SET_GPR_U32(ctx, 31, 0x410FB0u);
    ctx->pc = 0x410FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410FA8u;
    // 0x410fac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154718u, 0x410FA8u, 0x410FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410FB0u;
label_410fb0:
    // 0x410fb0: 0x8ec3b788  lw          $v1, -0x4878($s6)
    ctx->pc = 0x410fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948744)));
label_410fb4:
    // 0x410fb4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x410fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_410fb8:
    // 0x410fb8: 0x8c660090  lw          $a2, 0x90($v1)
    ctx->pc = 0x410fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_410fbc:
    // 0x410fbc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x410fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_410fc0:
    // 0x410fc0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x410fc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_410fc4:
    // 0x410fc4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x410fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_410fc8:
    // 0x410fc8: 0x60f809  jalr        $v1
label_410fcc:
    if (ctx->pc == 0x410FCCu) {
        ctx->pc = 0x410FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410FC8u;
        // 0x410fcc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410FD0u;
        goto label_410fd0;
    }
    ctx->pc = 0x410FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x410FD0u);
        ctx->pc = 0x410FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410FC8u;
        // 0x410fcc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410FC8u, 0x410FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410FD0u;
label_410fd0:
    // 0x410fd0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x410fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_410fd4:
    // 0x410fd4: 0xc055168  jal         func_1545A0
label_410fd8:
    if (ctx->pc == 0x410FD8u) {
        ctx->pc = 0x410FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410FD4u;
        // 0x410fd8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410FDCu;
        goto label_410fdc;
    }
    ctx->pc = 0x410FD4u;
    SET_GPR_U32(ctx, 31, 0x410FDCu);
    ctx->pc = 0x410FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410FD4u;
    // 0x410fd8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1545A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1545A0u, 0x410FD4u, 0x410FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410FDCu;
label_410fdc:
    // 0x410fdc: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x410fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_410fe0:
    // 0x410fe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x410fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_410fe4:
    // 0x410fe4: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x410fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_410fe8:
    // 0x410fe8: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x410fe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_410fec:
    // 0x410fec: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x410fecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_410ff0:
    // 0x410ff0: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x410ff0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_410ff4:
    // 0x410ff4: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x410ff4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_410ff8:
    // 0x410ff8: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x410ff8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_410ffc:
    // 0x410ffc: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x410ffcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_411000:
    // 0x411000: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x411000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_411004:
    // 0x411004: 0x3e00008  jr          $ra
label_411008:
    if (ctx->pc == 0x411008u) {
        ctx->pc = 0x411008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411004u;
        // 0x411008: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41100Cu;
        goto label_41100c;
    }
    ctx->pc = 0x411004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411004u;
        // 0x411008: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41100Cu;
label_41100c:
    // 0x41100c: 0x0  nop
    ctx->pc = 0x41100cu;
    // NOP
    ctx->pc = 0x411010u;
}
