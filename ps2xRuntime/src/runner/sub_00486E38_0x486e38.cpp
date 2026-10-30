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

// Function: sub_00486E38
// Address: 0x486e38 - 0x487018
void sub_00486E38_0x486e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00486E38_0x486e38");
#endif

    switch (ctx->pc) {
        case 0x486e38u: goto label_486e38;
        case 0x486e3cu: goto label_486e3c;
        case 0x486e40u: goto label_486e40;
        case 0x486e44u: goto label_486e44;
        case 0x486e48u: goto label_486e48;
        case 0x486e4cu: goto label_486e4c;
        case 0x486e50u: goto label_486e50;
        case 0x486e54u: goto label_486e54;
        case 0x486e58u: goto label_486e58;
        case 0x486e5cu: goto label_486e5c;
        case 0x486e60u: goto label_486e60;
        case 0x486e64u: goto label_486e64;
        case 0x486e68u: goto label_486e68;
        case 0x486e6cu: goto label_486e6c;
        case 0x486e70u: goto label_486e70;
        case 0x486e74u: goto label_486e74;
        case 0x486e78u: goto label_486e78;
        case 0x486e7cu: goto label_486e7c;
        case 0x486e80u: goto label_486e80;
        case 0x486e84u: goto label_486e84;
        case 0x486e88u: goto label_486e88;
        case 0x486e8cu: goto label_486e8c;
        case 0x486e90u: goto label_486e90;
        case 0x486e94u: goto label_486e94;
        case 0x486e98u: goto label_486e98;
        case 0x486e9cu: goto label_486e9c;
        case 0x486ea0u: goto label_486ea0;
        case 0x486ea4u: goto label_486ea4;
        case 0x486ea8u: goto label_486ea8;
        case 0x486eacu: goto label_486eac;
        case 0x486eb0u: goto label_486eb0;
        case 0x486eb4u: goto label_486eb4;
        case 0x486eb8u: goto label_486eb8;
        case 0x486ebcu: goto label_486ebc;
        case 0x486ec0u: goto label_486ec0;
        case 0x486ec4u: goto label_486ec4;
        case 0x486ec8u: goto label_486ec8;
        case 0x486eccu: goto label_486ecc;
        case 0x486ed0u: goto label_486ed0;
        case 0x486ed4u: goto label_486ed4;
        case 0x486ed8u: goto label_486ed8;
        case 0x486edcu: goto label_486edc;
        case 0x486ee0u: goto label_486ee0;
        case 0x486ee4u: goto label_486ee4;
        case 0x486ee8u: goto label_486ee8;
        case 0x486eecu: goto label_486eec;
        case 0x486ef0u: goto label_486ef0;
        case 0x486ef4u: goto label_486ef4;
        case 0x486ef8u: goto label_486ef8;
        case 0x486efcu: goto label_486efc;
        case 0x486f00u: goto label_486f00;
        case 0x486f04u: goto label_486f04;
        case 0x486f08u: goto label_486f08;
        case 0x486f0cu: goto label_486f0c;
        case 0x486f10u: goto label_486f10;
        case 0x486f14u: goto label_486f14;
        case 0x486f18u: goto label_486f18;
        case 0x486f1cu: goto label_486f1c;
        case 0x486f20u: goto label_486f20;
        case 0x486f24u: goto label_486f24;
        case 0x486f28u: goto label_486f28;
        case 0x486f2cu: goto label_486f2c;
        case 0x486f30u: goto label_486f30;
        case 0x486f34u: goto label_486f34;
        case 0x486f38u: goto label_486f38;
        case 0x486f3cu: goto label_486f3c;
        case 0x486f40u: goto label_486f40;
        case 0x486f44u: goto label_486f44;
        case 0x486f48u: goto label_486f48;
        case 0x486f4cu: goto label_486f4c;
        case 0x486f50u: goto label_486f50;
        case 0x486f54u: goto label_486f54;
        case 0x486f58u: goto label_486f58;
        case 0x486f5cu: goto label_486f5c;
        case 0x486f60u: goto label_486f60;
        case 0x486f64u: goto label_486f64;
        case 0x486f68u: goto label_486f68;
        case 0x486f6cu: goto label_486f6c;
        case 0x486f70u: goto label_486f70;
        case 0x486f74u: goto label_486f74;
        case 0x486f78u: goto label_486f78;
        case 0x486f7cu: goto label_486f7c;
        case 0x486f80u: goto label_486f80;
        case 0x486f84u: goto label_486f84;
        case 0x486f88u: goto label_486f88;
        case 0x486f8cu: goto label_486f8c;
        case 0x486f90u: goto label_486f90;
        case 0x486f94u: goto label_486f94;
        case 0x486f98u: goto label_486f98;
        case 0x486f9cu: goto label_486f9c;
        case 0x486fa0u: goto label_486fa0;
        case 0x486fa4u: goto label_486fa4;
        case 0x486fa8u: goto label_486fa8;
        case 0x486facu: goto label_486fac;
        case 0x486fb0u: goto label_486fb0;
        case 0x486fb4u: goto label_486fb4;
        case 0x486fb8u: goto label_486fb8;
        case 0x486fbcu: goto label_486fbc;
        case 0x486fc0u: goto label_486fc0;
        case 0x486fc4u: goto label_486fc4;
        case 0x486fc8u: goto label_486fc8;
        case 0x486fccu: goto label_486fcc;
        case 0x486fd0u: goto label_486fd0;
        case 0x486fd4u: goto label_486fd4;
        case 0x486fd8u: goto label_486fd8;
        case 0x486fdcu: goto label_486fdc;
        case 0x486fe0u: goto label_486fe0;
        case 0x486fe4u: goto label_486fe4;
        case 0x486fe8u: goto label_486fe8;
        case 0x486fecu: goto label_486fec;
        case 0x486ff0u: goto label_486ff0;
        case 0x486ff4u: goto label_486ff4;
        case 0x486ff8u: goto label_486ff8;
        case 0x486ffcu: goto label_486ffc;
        case 0x487000u: goto label_487000;
        case 0x487004u: goto label_487004;
        case 0x487008u: goto label_487008;
        case 0x48700cu: goto label_48700c;
        case 0x487010u: goto label_487010;
        case 0x487014u: goto label_487014;
        default: break;
    }

    ctx->pc = 0x486e38u;

label_486e38:
    // 0x486e38: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x486e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_486e3c:
    // 0x486e3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x486e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_486e40:
    // 0x486e40: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x486e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_486e44:
    // 0x486e44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x486e44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_486e48:
    // 0x486e48: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x486e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_486e4c:
    // 0x486e4c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x486e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_486e50:
    // 0x486e50: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x486e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_486e54:
    // 0x486e54: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x486e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_486e58:
    // 0x486e58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x486e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_486e5c:
    // 0x486e5c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x486e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_486e60:
    // 0x486e60: 0x92760003  lbu         $s6, 0x3($s3)
    ctx->pc = 0x486e60u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_486e64:
    // 0x486e64: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x486e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_486e68:
    // 0x486e68: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_486e6c:
    if (ctx->pc == 0x486E6Cu) {
        ctx->pc = 0x486E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486E68u;
        // 0x486e6c: 0x32d50004  andi        $s5, $s6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x486E70u;
        goto label_486e70;
    }
    ctx->pc = 0x486E68u;
    {
        const bool branch_taken_0x486e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x486E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486E68u;
        // 0x486e6c: 0x32d50004  andi        $s5, $s6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x486e68) {
            ctx->pc = 0x486F54u;
            goto label_486f54;
        }
    }
    ctx->pc = 0x486E70u;
label_486e70:
    // 0x486e70: 0x52a0000a  beql        $s5, $zero, . + 4 + (0xA << 2)
label_486e74:
    if (ctx->pc == 0x486E74u) {
        ctx->pc = 0x486E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486E70u;
        // 0x486e74: 0x8e640090  lw          $a0, 0x90($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486E78u;
        goto label_486e78;
    }
    ctx->pc = 0x486E70u;
    {
        const bool branch_taken_0x486e70 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x486e70) {
            ctx->pc = 0x486E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x486E70u;
            // 0x486e74: 0x8e640090  lw          $a0, 0x90($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x486E9Cu;
            goto label_486e9c;
        }
    }
    ctx->pc = 0x486E78u;
label_486e78:
    // 0x486e78: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x486e78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_486e7c:
    // 0x486e7c: 0x7a630020  lq          $v1, 0x20($s3)
    ctx->pc = 0x486e7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_486e80:
    // 0x486e80: 0x7a640030  lq          $a0, 0x30($s3)
    ctx->pc = 0x486e80u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 48)));
label_486e84:
    // 0x486e84: 0x7a650040  lq          $a1, 0x40($s3)
    ctx->pc = 0x486e84u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 19), 64)));
label_486e88:
    // 0x486e88: 0x7e620050  sq          $v0, 0x50($s3)
    ctx->pc = 0x486e88u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 80), GPR_VEC(ctx, 2));
label_486e8c:
    // 0x486e8c: 0x7e630060  sq          $v1, 0x60($s3)
    ctx->pc = 0x486e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 96), GPR_VEC(ctx, 3));
label_486e90:
    // 0x486e90: 0x7e640070  sq          $a0, 0x70($s3)
    ctx->pc = 0x486e90u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 112), GPR_VEC(ctx, 4));
label_486e94:
    // 0x486e94: 0x7e650080  sq          $a1, 0x80($s3)
    ctx->pc = 0x486e94u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 128), GPR_VEC(ctx, 5));
label_486e98:
    // 0x486e98: 0x8e640090  lw          $a0, 0x90($s3)
    ctx->pc = 0x486e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_486e9c:
    // 0x486e9c: 0x26710090  addiu       $s1, $s3, 0x90
    ctx->pc = 0x486e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_486ea0:
    // 0x486ea0: 0x5091000a  beql        $a0, $s1, . + 4 + (0xA << 2)
label_486ea4:
    if (ctx->pc == 0x486EA4u) {
        ctx->pc = 0x486EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486EA0u;
        // 0x486ea4: 0x8e710098  lw          $s1, 0x98($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486EA8u;
        goto label_486ea8;
    }
    ctx->pc = 0x486EA0u;
    {
        const bool branch_taken_0x486ea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x486ea0) {
            ctx->pc = 0x486EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x486EA0u;
            // 0x486ea4: 0x8e710098  lw          $s1, 0x98($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x486ECCu;
            goto label_486ecc;
        }
    }
    ctx->pc = 0x486EA8u;
label_486ea8:
    // 0x486ea8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x486ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_486eac:
    // 0x486eac: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x486eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_486eb0:
    // 0x486eb0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x486eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_486eb4:
    // 0x486eb4: 0x40f809  jalr        $v0
label_486eb8:
    if (ctx->pc == 0x486EB8u) {
        ctx->pc = 0x486EBCu;
        goto label_486ebc;
    }
    ctx->pc = 0x486EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x486EBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486EB4u, 0x486EBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x486EBCu;
label_486ebc:
    // 0x486ebc: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x486ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_486ec0:
    // 0x486ec0: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
label_486ec4:
    if (ctx->pc == 0x486EC4u) {
        ctx->pc = 0x486EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486EC0u;
        // 0x486ec4: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486EC8u;
        goto label_486ec8;
    }
    ctx->pc = 0x486EC0u;
    {
        const bool branch_taken_0x486ec0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x486EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486EC0u;
        // 0x486ec4: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486ec0) {
            ctx->pc = 0x486EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_486eb0;
        }
    }
    ctx->pc = 0x486EC8u;
label_486ec8:
    // 0x486ec8: 0x8e710098  lw          $s1, 0x98($s3)
    ctx->pc = 0x486ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
label_486ecc:
    // 0x486ecc: 0x12200047  beqz        $s1, . + 4 + (0x47 << 2)
label_486ed0:
    if (ctx->pc == 0x486ED0u) {
        ctx->pc = 0x486ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486ECCu;
        // 0x486ed0: 0x32c200f0  andi        $v0, $s6, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        ctx->pc = 0x486ED4u;
        goto label_486ed4;
    }
    ctx->pc = 0x486ECCu;
    {
        const bool branch_taken_0x486ecc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x486ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486ECCu;
        // 0x486ed0: 0x32c200f0  andi        $v0, $s6, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x486ecc) {
            ctx->pc = 0x486FECu;
            goto label_486fec;
        }
    }
    ctx->pc = 0x486ED4u;
label_486ed4:
    // 0x486ed4: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x486ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_486ed8:
    // 0x486ed8: 0x2a2a025  or          $s4, $s5, $v0
    ctx->pc = 0x486ed8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
label_486edc:
    // 0x486edc: 0x32830004  andi        $v1, $s4, 0x4
    ctx->pc = 0x486edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
label_486ee0:
    // 0x486ee0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_486ee4:
    if (ctx->pc == 0x486EE4u) {
        ctx->pc = 0x486EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486EE0u;
        // 0x486ee4: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486EE8u;
        goto label_486ee8;
    }
    ctx->pc = 0x486EE0u;
    {
        const bool branch_taken_0x486ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x486EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486EE0u;
        // 0x486ee4: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486ee0) {
            ctx->pc = 0x486EF8u;
            goto label_486ef8;
        }
    }
    ctx->pc = 0x486EE8u;
label_486ee8:
    // 0x486ee8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x486ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_486eec:
    // 0x486eec: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x486eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_486ef0:
    // 0x486ef0: 0xc11f4a0  jal         func_47D280
label_486ef4:
    if (ctx->pc == 0x486EF4u) {
        ctx->pc = 0x486EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486EF0u;
        // 0x486ef4: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486EF8u;
        goto label_486ef8;
    }
    ctx->pc = 0x486EF0u;
    SET_GPR_U32(ctx, 31, 0x486EF8u);
    ctx->pc = 0x486EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x486EF0u;
    // 0x486ef4: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D280u, 0x486EF0u, 0x486EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486EF8u;
label_486ef8:
    // 0x486ef8: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x486ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_486efc:
    // 0x486efc: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x486efcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_486f00:
    // 0x486f00: 0x5092000a  beql        $a0, $s2, . + 4 + (0xA << 2)
label_486f04:
    if (ctx->pc == 0x486F04u) {
        ctx->pc = 0x486F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486F00u;
        // 0x486f04: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486F08u;
        goto label_486f08;
    }
    ctx->pc = 0x486F00u;
    {
        const bool branch_taken_0x486f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x486f00) {
            ctx->pc = 0x486F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x486F00u;
            // 0x486f04: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x486F2Cu;
            goto label_486f2c;
        }
    }
    ctx->pc = 0x486F08u;
label_486f08:
    // 0x486f08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x486f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_486f0c:
    // 0x486f0c: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x486f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_486f10:
    // 0x486f10: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x486f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_486f14:
    // 0x486f14: 0x40f809  jalr        $v0
label_486f18:
    if (ctx->pc == 0x486F18u) {
        ctx->pc = 0x486F1Cu;
        goto label_486f1c;
    }
    ctx->pc = 0x486F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x486F1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486F14u, 0x486F1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x486F1Cu;
label_486f1c:
    // 0x486f1c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x486f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_486f20:
    // 0x486f20: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
label_486f24:
    if (ctx->pc == 0x486F24u) {
        ctx->pc = 0x486F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486F20u;
        // 0x486f24: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486F28u;
        goto label_486f28;
    }
    ctx->pc = 0x486F20u;
    {
        const bool branch_taken_0x486f20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x486F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486F20u;
        // 0x486f24: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486f20) {
            ctx->pc = 0x486F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_486f10;
        }
    }
    ctx->pc = 0x486F28u;
label_486f28:
    // 0x486f28: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x486f28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_486f2c:
    // 0x486f2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x486f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_486f30:
    // 0x486f30: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x486f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_486f34:
    // 0x486f34: 0x304200f3  andi        $v0, $v0, 0xF3
    ctx->pc = 0x486f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)243);
label_486f38:
    // 0x486f38: 0xc121c52  jal         func_487148
label_486f3c:
    if (ctx->pc == 0x486F3Cu) {
        ctx->pc = 0x486F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486F38u;
        // 0x486f3c: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486F40u;
        goto label_486f40;
    }
    ctx->pc = 0x486F38u;
    SET_GPR_U32(ctx, 31, 0x486F40u);
    ctx->pc = 0x486F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x486F38u;
    // 0x486f3c: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x487148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487148u, 0x486F38u, 0x486F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486F40u;
label_486f40:
    // 0x486f40: 0x8e31009c  lw          $s1, 0x9C($s1)
    ctx->pc = 0x486f40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_486f44:
    // 0x486f44: 0x5620ffe4  bnel        $s1, $zero, . + 4 + (-0x1C << 2)
label_486f48:
    if (ctx->pc == 0x486F48u) {
        ctx->pc = 0x486F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486F44u;
        // 0x486f48: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486F4Cu;
        goto label_486f4c;
    }
    ctx->pc = 0x486F44u;
    {
        const bool branch_taken_0x486f44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x486f44) {
            ctx->pc = 0x486F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x486F44u;
            // 0x486f48: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x486ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_486ed8;
        }
    }
    ctx->pc = 0x486F4Cu;
label_486f4c:
    // 0x486f4c: 0x10000027  b           . + 4 + (0x27 << 2)
label_486f50:
    if (ctx->pc == 0x486F50u) {
        ctx->pc = 0x486F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486F4Cu;
        // 0x486f50: 0x32c200f0  andi        $v0, $s6, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        ctx->pc = 0x486F54u;
        goto label_486f54;
    }
    ctx->pc = 0x486F4Cu;
    {
        const bool branch_taken_0x486f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x486F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486F4Cu;
        // 0x486f50: 0x32c200f0  andi        $v0, $s6, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x486f4c) {
            ctx->pc = 0x486FECu;
            goto label_486fec;
        }
    }
    ctx->pc = 0x486F54u;
label_486f54:
    // 0x486f54: 0x8e640090  lw          $a0, 0x90($s3)
    ctx->pc = 0x486f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_486f58:
    // 0x486f58: 0x26710090  addiu       $s1, $s3, 0x90
    ctx->pc = 0x486f58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_486f5c:
    // 0x486f5c: 0x5091000b  beql        $a0, $s1, . + 4 + (0xB << 2)
label_486f60:
    if (ctx->pc == 0x486F60u) {
        ctx->pc = 0x486F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486F5Cu;
        // 0x486f60: 0x8e710098  lw          $s1, 0x98($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486F64u;
        goto label_486f64;
    }
    ctx->pc = 0x486F5Cu;
    {
        const bool branch_taken_0x486f5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x486f5c) {
            ctx->pc = 0x486F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x486F5Cu;
            // 0x486f60: 0x8e710098  lw          $s1, 0x98($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x486F8Cu;
            goto label_486f8c;
        }
    }
    ctx->pc = 0x486F64u;
label_486f64:
    // 0x486f64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x486f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_486f68:
    // 0x486f68: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x486f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_486f6c:
    // 0x486f6c: 0x0  nop
    ctx->pc = 0x486f6cu;
    // NOP
label_486f70:
    // 0x486f70: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x486f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_486f74:
    // 0x486f74: 0x40f809  jalr        $v0
label_486f78:
    if (ctx->pc == 0x486F78u) {
        ctx->pc = 0x486F7Cu;
        goto label_486f7c;
    }
    ctx->pc = 0x486F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x486F7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486F74u, 0x486F7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x486F7Cu;
label_486f7c:
    // 0x486f7c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x486f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_486f80:
    // 0x486f80: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
label_486f84:
    if (ctx->pc == 0x486F84u) {
        ctx->pc = 0x486F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486F80u;
        // 0x486f84: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486F88u;
        goto label_486f88;
    }
    ctx->pc = 0x486F80u;
    {
        const bool branch_taken_0x486f80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x486F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486F80u;
        // 0x486f84: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486f80) {
            ctx->pc = 0x486F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_486f70;
        }
    }
    ctx->pc = 0x486F88u;
label_486f88:
    // 0x486f88: 0x8e710098  lw          $s1, 0x98($s3)
    ctx->pc = 0x486f88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
label_486f8c:
    // 0x486f8c: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_486f90:
    if (ctx->pc == 0x486F90u) {
        ctx->pc = 0x486F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486F8Cu;
        // 0x486f90: 0x32c200f0  andi        $v0, $s6, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        ctx->pc = 0x486F94u;
        goto label_486f94;
    }
    ctx->pc = 0x486F8Cu;
    {
        const bool branch_taken_0x486f8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x486F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486F8Cu;
        // 0x486f90: 0x32c200f0  andi        $v0, $s6, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x486f8c) {
            ctx->pc = 0x486FECu;
            goto label_486fec;
        }
    }
    ctx->pc = 0x486F94u;
label_486f94:
    // 0x486f94: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x486f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_486f98:
    // 0x486f98: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x486f98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_486f9c:
    // 0x486f9c: 0x5092000b  beql        $a0, $s2, . + 4 + (0xB << 2)
label_486fa0:
    if (ctx->pc == 0x486FA0u) {
        ctx->pc = 0x486FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486F9Cu;
        // 0x486fa0: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486FA4u;
        goto label_486fa4;
    }
    ctx->pc = 0x486F9Cu;
    {
        const bool branch_taken_0x486f9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x486f9c) {
            ctx->pc = 0x486FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x486F9Cu;
            // 0x486fa0: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x486FCCu;
            goto label_486fcc;
        }
    }
    ctx->pc = 0x486FA4u;
label_486fa4:
    // 0x486fa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x486fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_486fa8:
    // 0x486fa8: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x486fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_486fac:
    // 0x486fac: 0x0  nop
    ctx->pc = 0x486facu;
    // NOP
label_486fb0:
    // 0x486fb0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x486fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_486fb4:
    // 0x486fb4: 0x40f809  jalr        $v0
label_486fb8:
    if (ctx->pc == 0x486FB8u) {
        ctx->pc = 0x486FBCu;
        goto label_486fbc;
    }
    ctx->pc = 0x486FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x486FBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486FB4u, 0x486FBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x486FBCu;
label_486fbc:
    // 0x486fbc: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x486fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_486fc0:
    // 0x486fc0: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
label_486fc4:
    if (ctx->pc == 0x486FC4u) {
        ctx->pc = 0x486FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486FC0u;
        // 0x486fc4: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486FC8u;
        goto label_486fc8;
    }
    ctx->pc = 0x486FC0u;
    {
        const bool branch_taken_0x486fc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x486FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486FC0u;
        // 0x486fc4: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x486fc0) {
            ctx->pc = 0x486FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_486fb0;
        }
    }
    ctx->pc = 0x486FC8u;
label_486fc8:
    // 0x486fc8: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x486fc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_486fcc:
    // 0x486fcc: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x486fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_486fd0:
    // 0x486fd0: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x486fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
label_486fd4:
    // 0x486fd4: 0xc121c84  jal         func_487210
label_486fd8:
    if (ctx->pc == 0x486FD8u) {
        ctx->pc = 0x486FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486FD4u;
        // 0x486fd8: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486FDCu;
        goto label_486fdc;
    }
    ctx->pc = 0x486FD4u;
    SET_GPR_U32(ctx, 31, 0x486FDCu);
    ctx->pc = 0x486FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x486FD4u;
    // 0x486fd8: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x487210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487210u, 0x486FD4u, 0x486FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486FDCu;
label_486fdc:
    // 0x486fdc: 0x8e31009c  lw          $s1, 0x9C($s1)
    ctx->pc = 0x486fdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_486fe0:
    // 0x486fe0: 0x5620ffed  bnel        $s1, $zero, . + 4 + (-0x13 << 2)
label_486fe4:
    if (ctx->pc == 0x486FE4u) {
        ctx->pc = 0x486FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486FE0u;
        // 0x486fe4: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486FE8u;
        goto label_486fe8;
    }
    ctx->pc = 0x486FE0u;
    {
        const bool branch_taken_0x486fe0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x486fe0) {
            ctx->pc = 0x486FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x486FE0u;
            // 0x486fe4: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x486F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_486f98;
        }
    }
    ctx->pc = 0x486FE8u;
label_486fe8:
    // 0x486fe8: 0x32c200f0  andi        $v0, $s6, 0xF0
    ctx->pc = 0x486fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)240);
label_486fec:
    // 0x486fec: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x486fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_486ff0:
    // 0x486ff0: 0xa2620003  sb          $v0, 0x3($s3)
    ctx->pc = 0x486ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
label_486ff4:
    // 0x486ff4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x486ff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_486ff8:
    // 0x486ff8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x486ff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_486ffc:
    // 0x486ffc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x486ffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_487000:
    // 0x487000: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x487000u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_487004:
    // 0x487004: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x487004u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_487008:
    // 0x487008: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x487008u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48700c:
    // 0x48700c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48700cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_487010:
    // 0x487010: 0x3e00008  jr          $ra
label_487014:
    if (ctx->pc == 0x487014u) {
        ctx->pc = 0x487014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487010u;
        // 0x487014: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487018u;
        goto label_fallthrough_0x487010;
    }
    ctx->pc = 0x487010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x487014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487010u;
        // 0x487014: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x487010:
    ctx->pc = 0x487018u;
}
