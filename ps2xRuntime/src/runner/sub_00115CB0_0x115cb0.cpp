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

// Function: sub_00115CB0
// Address: 0x115cb0 - 0x115ee8
void sub_00115CB0_0x115cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115CB0_0x115cb0");
#endif

    switch (ctx->pc) {
        case 0x115cb0u: goto label_115cb0;
        case 0x115cb4u: goto label_115cb4;
        case 0x115cb8u: goto label_115cb8;
        case 0x115cbcu: goto label_115cbc;
        case 0x115cc0u: goto label_115cc0;
        case 0x115cc4u: goto label_115cc4;
        case 0x115cc8u: goto label_115cc8;
        case 0x115cccu: goto label_115ccc;
        case 0x115cd0u: goto label_115cd0;
        case 0x115cd4u: goto label_115cd4;
        case 0x115cd8u: goto label_115cd8;
        case 0x115cdcu: goto label_115cdc;
        case 0x115ce0u: goto label_115ce0;
        case 0x115ce4u: goto label_115ce4;
        case 0x115ce8u: goto label_115ce8;
        case 0x115cecu: goto label_115cec;
        case 0x115cf0u: goto label_115cf0;
        case 0x115cf4u: goto label_115cf4;
        case 0x115cf8u: goto label_115cf8;
        case 0x115cfcu: goto label_115cfc;
        case 0x115d00u: goto label_115d00;
        case 0x115d04u: goto label_115d04;
        case 0x115d08u: goto label_115d08;
        case 0x115d0cu: goto label_115d0c;
        case 0x115d10u: goto label_115d10;
        case 0x115d14u: goto label_115d14;
        case 0x115d18u: goto label_115d18;
        case 0x115d1cu: goto label_115d1c;
        case 0x115d20u: goto label_115d20;
        case 0x115d24u: goto label_115d24;
        case 0x115d28u: goto label_115d28;
        case 0x115d2cu: goto label_115d2c;
        case 0x115d30u: goto label_115d30;
        case 0x115d34u: goto label_115d34;
        case 0x115d38u: goto label_115d38;
        case 0x115d3cu: goto label_115d3c;
        case 0x115d40u: goto label_115d40;
        case 0x115d44u: goto label_115d44;
        case 0x115d48u: goto label_115d48;
        case 0x115d4cu: goto label_115d4c;
        case 0x115d50u: goto label_115d50;
        case 0x115d54u: goto label_115d54;
        case 0x115d58u: goto label_115d58;
        case 0x115d5cu: goto label_115d5c;
        case 0x115d60u: goto label_115d60;
        case 0x115d64u: goto label_115d64;
        case 0x115d68u: goto label_115d68;
        case 0x115d6cu: goto label_115d6c;
        case 0x115d70u: goto label_115d70;
        case 0x115d74u: goto label_115d74;
        case 0x115d78u: goto label_115d78;
        case 0x115d7cu: goto label_115d7c;
        case 0x115d80u: goto label_115d80;
        case 0x115d84u: goto label_115d84;
        case 0x115d88u: goto label_115d88;
        case 0x115d8cu: goto label_115d8c;
        case 0x115d90u: goto label_115d90;
        case 0x115d94u: goto label_115d94;
        case 0x115d98u: goto label_115d98;
        case 0x115d9cu: goto label_115d9c;
        case 0x115da0u: goto label_115da0;
        case 0x115da4u: goto label_115da4;
        case 0x115da8u: goto label_115da8;
        case 0x115dacu: goto label_115dac;
        case 0x115db0u: goto label_115db0;
        case 0x115db4u: goto label_115db4;
        case 0x115db8u: goto label_115db8;
        case 0x115dbcu: goto label_115dbc;
        case 0x115dc0u: goto label_115dc0;
        case 0x115dc4u: goto label_115dc4;
        case 0x115dc8u: goto label_115dc8;
        case 0x115dccu: goto label_115dcc;
        case 0x115dd0u: goto label_115dd0;
        case 0x115dd4u: goto label_115dd4;
        case 0x115dd8u: goto label_115dd8;
        case 0x115ddcu: goto label_115ddc;
        case 0x115de0u: goto label_115de0;
        case 0x115de4u: goto label_115de4;
        case 0x115de8u: goto label_115de8;
        case 0x115decu: goto label_115dec;
        case 0x115df0u: goto label_115df0;
        case 0x115df4u: goto label_115df4;
        case 0x115df8u: goto label_115df8;
        case 0x115dfcu: goto label_115dfc;
        case 0x115e00u: goto label_115e00;
        case 0x115e04u: goto label_115e04;
        case 0x115e08u: goto label_115e08;
        case 0x115e0cu: goto label_115e0c;
        case 0x115e10u: goto label_115e10;
        case 0x115e14u: goto label_115e14;
        case 0x115e18u: goto label_115e18;
        case 0x115e1cu: goto label_115e1c;
        case 0x115e20u: goto label_115e20;
        case 0x115e24u: goto label_115e24;
        case 0x115e28u: goto label_115e28;
        case 0x115e2cu: goto label_115e2c;
        case 0x115e30u: goto label_115e30;
        case 0x115e34u: goto label_115e34;
        case 0x115e38u: goto label_115e38;
        case 0x115e3cu: goto label_115e3c;
        case 0x115e40u: goto label_115e40;
        case 0x115e44u: goto label_115e44;
        case 0x115e48u: goto label_115e48;
        case 0x115e4cu: goto label_115e4c;
        case 0x115e50u: goto label_115e50;
        case 0x115e54u: goto label_115e54;
        case 0x115e58u: goto label_115e58;
        case 0x115e5cu: goto label_115e5c;
        case 0x115e60u: goto label_115e60;
        case 0x115e64u: goto label_115e64;
        case 0x115e68u: goto label_115e68;
        case 0x115e6cu: goto label_115e6c;
        case 0x115e70u: goto label_115e70;
        case 0x115e74u: goto label_115e74;
        case 0x115e78u: goto label_115e78;
        case 0x115e7cu: goto label_115e7c;
        case 0x115e80u: goto label_115e80;
        case 0x115e84u: goto label_115e84;
        case 0x115e88u: goto label_115e88;
        case 0x115e8cu: goto label_115e8c;
        case 0x115e90u: goto label_115e90;
        case 0x115e94u: goto label_115e94;
        case 0x115e98u: goto label_115e98;
        case 0x115e9cu: goto label_115e9c;
        case 0x115ea0u: goto label_115ea0;
        case 0x115ea4u: goto label_115ea4;
        case 0x115ea8u: goto label_115ea8;
        case 0x115eacu: goto label_115eac;
        case 0x115eb0u: goto label_115eb0;
        case 0x115eb4u: goto label_115eb4;
        case 0x115eb8u: goto label_115eb8;
        case 0x115ebcu: goto label_115ebc;
        case 0x115ec0u: goto label_115ec0;
        case 0x115ec4u: goto label_115ec4;
        case 0x115ec8u: goto label_115ec8;
        case 0x115eccu: goto label_115ecc;
        case 0x115ed0u: goto label_115ed0;
        case 0x115ed4u: goto label_115ed4;
        case 0x115ed8u: goto label_115ed8;
        case 0x115edcu: goto label_115edc;
        case 0x115ee0u: goto label_115ee0;
        case 0x115ee4u: goto label_115ee4;
        default: break;
    }

    ctx->pc = 0x115cb0u;

label_115cb0:
    // 0x115cb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x115cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_115cb4:
    // 0x115cb4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x115cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_115cb8:
    // 0x115cb8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x115cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_115cbc:
    // 0x115cbc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x115cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_115cc0:
    // 0x115cc0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x115cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_115cc4:
    // 0x115cc4: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x115cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_115cc8:
    // 0x115cc8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x115cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_115ccc:
    // 0x115ccc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x115cccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_115cd0:
    // 0x115cd0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x115cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_115cd4:
    // 0x115cd4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x115cd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_115cd8:
    // 0x115cd8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x115cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_115cdc:
    // 0x115cdc: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x115cdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_115ce0:
    // 0x115ce0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x115ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_115ce4:
    // 0x115ce4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x115ce4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_115ce8:
    // 0x115ce8: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x115ce8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_115cec:
    // 0x115cec: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x115cecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_115cf0:
    // 0x115cf0: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x115cf0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_115cf4:
    // 0x115cf4: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x115cf4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_115cf8:
    // 0x115cf8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x115cf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_115cfc:
    // 0x115cfc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x115cfcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_115d00:
    // 0x115d00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_115d04:
    // 0x115d04: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x115d04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
label_115d08:
    // 0x115d08: 0x8e2927e4  lw          $t1, 0x27E4($s1)
    ctx->pc = 0x115d08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_115d0c:
    // 0x115d0c: 0x8e05b9b8  lw          $a1, -0x4648($s0)
    ctx->pc = 0x115d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949304)));
label_115d10:
    // 0x115d10: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x115d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_115d14:
    // 0x115d14: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x115d14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_115d18:
    // 0x115d18: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x115d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_115d1c:
    // 0x115d1c: 0x60f809  jalr        $v1
label_115d20:
    if (ctx->pc == 0x115D20u) {
        ctx->pc = 0x115D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D1Cu;
        // 0x115d20: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115D24u;
        goto label_115d24;
    }
    ctx->pc = 0x115D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x115D24u);
        ctx->pc = 0x115D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D1Cu;
        // 0x115d20: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115D1Cu, 0x115D24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115D24u;
label_115d24:
    // 0x115d24: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x115d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_115d28:
    // 0x115d28: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x115d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_115d2c:
    // 0x115d2c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x115d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_115d30:
    // 0x115d30: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x115d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_115d34:
    // 0x115d34: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_115d38:
    if (ctx->pc == 0x115D38u) {
        ctx->pc = 0x115D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D34u;
        // 0x115d38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115D3Cu;
        goto label_115d3c;
    }
    ctx->pc = 0x115D34u;
    {
        const bool branch_taken_0x115d34 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x115D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D34u;
        // 0x115d38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d34) {
            ctx->pc = 0x115D5Cu;
            goto label_115d5c;
        }
    }
    ctx->pc = 0x115D3Cu;
label_115d3c:
    // 0x115d3c: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x115d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_115d40:
    // 0x115d40: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x115d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_115d44:
    // 0x115d44: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x115d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_115d48:
    // 0x115d48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x115d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_115d4c:
    // 0x115d4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x115d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_115d50:
    // 0x115d50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x115d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_115d54:
    // 0x115d54: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x115d54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_115d58:
    // 0x115d58: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x115d58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_115d5c:
    // 0x115d5c: 0x240302fc  addiu       $v1, $zero, 0x2FC
    ctx->pc = 0x115d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 764));
label_115d60:
    // 0x115d60: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x115d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_115d64:
    // 0x115d64: 0x2c31818  mult        $v1, $s6, $v1
    ctx->pc = 0x115d64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_115d68:
    // 0x115d68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x115d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_115d6c:
    // 0x115d6c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x115d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_115d70:
    // 0x115d70: 0xac470038  sw          $a3, 0x38($v0)
    ctx->pc = 0x115d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 7));
label_115d74:
    // 0x115d74: 0xa0f30000  sb          $s3, 0x0($a3)
    ctx->pc = 0x115d74u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 19));
label_115d78:
    // 0x115d78: 0xa0f30001  sb          $s3, 0x1($a3)
    ctx->pc = 0x115d78u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 19));
label_115d7c:
    // 0x115d7c: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x115d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
label_115d80:
    // 0x115d80: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x115d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_115d84:
    // 0x115d84: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x115d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_115d88:
    // 0x115d88: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x115d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_115d8c:
    // 0x115d8c: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x115d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_115d90:
    // 0x115d90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_115d94:
    if (ctx->pc == 0x115D94u) {
        ctx->pc = 0x115D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D90u;
        // 0x115d94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115D98u;
        goto label_115d98;
    }
    ctx->pc = 0x115D90u;
    {
        const bool branch_taken_0x115d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D90u;
        // 0x115d94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d90) {
            ctx->pc = 0x115DB0u;
            goto label_115db0;
        }
    }
    ctx->pc = 0x115D98u;
label_115d98:
    // 0x115d98: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x115d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_115d9c:
    // 0x115d9c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x115d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_115da0:
    // 0x115da0: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x115da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_115da4:
    // 0x115da4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x115da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_115da8:
    // 0x115da8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x115da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_115dac:
    // 0x115dac: 0xae45000c  sw          $a1, 0xC($s2)
    ctx->pc = 0x115dacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 5));
label_115db0:
    // 0x115db0: 0x2e820002  sltiu       $v0, $s4, 0x2
    ctx->pc = 0x115db0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_115db4:
    // 0x115db4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_115db8:
    if (ctx->pc == 0x115DB8u) {
        ctx->pc = 0x115DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115DB4u;
        // 0x115db8: 0xace30010  sw          $v1, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115DBCu;
        goto label_115dbc;
    }
    ctx->pc = 0x115DB4u;
    {
        const bool branch_taken_0x115db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115DB4u;
        // 0x115db8: 0xace30010  sw          $v1, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115db4) {
            ctx->pc = 0x115DF4u;
            goto label_115df4;
        }
    }
    ctx->pc = 0x115DBCu;
label_115dbc:
    // 0x115dbc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x115dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_115dc0:
    // 0x115dc0: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x115dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_115dc4:
    // 0x115dc4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x115dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_115dc8:
    // 0x115dc8: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x115dc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_115dcc:
    // 0x115dcc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_115dd0:
    if (ctx->pc == 0x115DD0u) {
        ctx->pc = 0x115DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115DCCu;
        // 0x115dd0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115DD4u;
        goto label_115dd4;
    }
    ctx->pc = 0x115DCCu;
    {
        const bool branch_taken_0x115dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115DCCu;
        // 0x115dd0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115dcc) {
            ctx->pc = 0x115DECu;
            goto label_115dec;
        }
    }
    ctx->pc = 0x115DD4u;
label_115dd4:
    // 0x115dd4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x115dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_115dd8:
    // 0x115dd8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x115dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_115ddc:
    // 0x115ddc: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x115ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_115de0:
    // 0x115de0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x115de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_115de4:
    // 0x115de4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x115de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_115de8:
    // 0x115de8: 0xae45000c  sw          $a1, 0xC($s2)
    ctx->pc = 0x115de8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 5));
label_115dec:
    // 0x115dec: 0x10000002  b           . + 4 + (0x2 << 2)
label_115df0:
    if (ctx->pc == 0x115DF0u) {
        ctx->pc = 0x115DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115DECu;
        // 0x115df0: 0xace30014  sw          $v1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115DF4u;
        goto label_115df4;
    }
    ctx->pc = 0x115DECu;
    {
        const bool branch_taken_0x115dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115DECu;
        // 0x115df0: 0xace30014  sw          $v1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115dec) {
            ctx->pc = 0x115DF8u;
            goto label_115df8;
        }
    }
    ctx->pc = 0x115DF4u;
label_115df4:
    // 0x115df4: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x115df4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
label_115df8:
    // 0x115df8: 0x2e820003  sltiu       $v0, $s4, 0x3
    ctx->pc = 0x115df8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_115dfc:
    // 0x115dfc: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_115e00:
    if (ctx->pc == 0x115E00u) {
        ctx->pc = 0x115E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115DFCu;
        // 0x115e00: 0xace00018  sw          $zero, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115E04u;
        goto label_115e04;
    }
    ctx->pc = 0x115DFCu;
    {
        const bool branch_taken_0x115dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115dfc) {
            ctx->pc = 0x115E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115DFCu;
            // 0x115e00: 0xace00018  sw          $zero, 0x18($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115E38u;
            goto label_115e38;
        }
    }
    ctx->pc = 0x115E04u;
label_115e04:
    // 0x115e04: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x115e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_115e08:
    // 0x115e08: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x115e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_115e0c:
    // 0x115e0c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x115e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_115e10:
    // 0x115e10: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x115e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_115e14:
    // 0x115e14: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_115e18:
    if (ctx->pc == 0x115E18u) {
        ctx->pc = 0x115E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E14u;
        // 0x115e18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115E1Cu;
        goto label_115e1c;
    }
    ctx->pc = 0x115E14u;
    {
        const bool branch_taken_0x115e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115e14) {
            ctx->pc = 0x115E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115E14u;
            // 0x115e18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115E34u;
            goto label_115e34;
        }
    }
    ctx->pc = 0x115E1Cu;
label_115e1c:
    // 0x115e1c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x115e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_115e20:
    // 0x115e20: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x115e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_115e24:
    // 0x115e24: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x115e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_115e28:
    // 0x115e28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x115e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_115e2c:
    // 0x115e2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x115e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_115e30:
    // 0x115e30: 0xae45000c  sw          $a1, 0xC($s2)
    ctx->pc = 0x115e30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 5));
label_115e34:
    // 0x115e34: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x115e34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_115e38:
    // 0x115e38: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
label_115e3c:
    if (ctx->pc == 0x115E3Cu) {
        ctx->pc = 0x115E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E38u;
        // 0x115e3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115E40u;
        goto label_115e40;
    }
    ctx->pc = 0x115E38u;
    {
        const bool branch_taken_0x115e38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E38u;
        // 0x115e3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e38) {
            ctx->pc = 0x115E88u;
            goto label_115e88;
        }
    }
    ctx->pc = 0x115E40u;
label_115e40:
    // 0x115e40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x115e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115e44:
    // 0x115e44: 0x0  nop
    ctx->pc = 0x115e44u;
    // NOP
label_115e48:
    // 0x115e48: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
label_115e4c:
    if (ctx->pc == 0x115E4Cu) {
        ctx->pc = 0x115E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E48u;
        // 0x115e4c: 0x24660001  addiu       $a2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115E50u;
        goto label_115e50;
    }
    ctx->pc = 0x115E48u;
    {
        const bool branch_taken_0x115e48 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E48u;
        // 0x115e4c: 0x24660001  addiu       $a2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e48) {
            ctx->pc = 0x115E78u;
            goto label_115e78;
        }
    }
    ctx->pc = 0x115E50u;
label_115e50:
    // 0x115e50: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x115e50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_115e54:
    // 0x115e54: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x115e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_115e58:
    // 0x115e58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x115e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_115e5c:
    // 0x115e5c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_115e60:
    if (ctx->pc == 0x115E60u) {
        ctx->pc = 0x115E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E5Cu;
        // 0x115e60: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115E64u;
        goto label_115e64;
    }
    ctx->pc = 0x115E5Cu;
    {
        const bool branch_taken_0x115e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E5Cu;
        // 0x115e60: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e5c) {
            ctx->pc = 0x115E68u;
            goto label_115e68;
        }
    }
    ctx->pc = 0x115E64u;
label_115e64:
    // 0x115e64: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x115e64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_115e68:
    // 0x115e68: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x115e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_115e6c:
    // 0x115e6c: 0x94102b  sltu        $v0, $a0, $s4
    ctx->pc = 0x115e6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_115e70:
    // 0x115e70: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_115e74:
    if (ctx->pc == 0x115E74u) {
        ctx->pc = 0x115E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E70u;
        // 0x115e74: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115E78u;
        goto label_115e78;
    }
    ctx->pc = 0x115E70u;
    {
        const bool branch_taken_0x115e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E70u;
        // 0x115e74: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e70) {
            ctx->pc = 0x115E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115e58;
        }
    }
    ctx->pc = 0x115E78u;
label_115e78:
    // 0x115e78: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x115e78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_115e7c:
    // 0x115e7c: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x115e7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_115e80:
    // 0x115e80: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
label_115e84:
    if (ctx->pc == 0x115E84u) {
        ctx->pc = 0x115E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E80u;
        // 0x115e84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115E88u;
        goto label_115e88;
    }
    ctx->pc = 0x115E80u;
    {
        const bool branch_taken_0x115e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115e80) {
            ctx->pc = 0x115E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115E80u;
            // 0x115e84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115e48;
        }
    }
    ctx->pc = 0x115E88u;
label_115e88:
    // 0x115e88: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x115e88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_115e8c:
    // 0x115e8c: 0xe4f60004  swc1        $f22, 0x4($a3)
    ctx->pc = 0x115e8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_115e90:
    // 0x115e90: 0xe4f50008  swc1        $f21, 0x8($a3)
    ctx->pc = 0x115e90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_115e94:
    // 0x115e94: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x115e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_115e98:
    // 0x115e98: 0x8e05b9b8  lw          $a1, -0x4648($s0)
    ctx->pc = 0x115e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949304)));
label_115e9c:
    // 0x115e9c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x115e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_115ea0:
    // 0x115ea0: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x115ea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_115ea4:
    // 0x115ea4: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x115ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_115ea8:
    // 0x115ea8: 0x60f809  jalr        $v1
label_115eac:
    if (ctx->pc == 0x115EACu) {
        ctx->pc = 0x115EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EA8u;
        // 0x115eac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115EB0u;
        goto label_115eb0;
    }
    ctx->pc = 0x115EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x115EB0u);
        ctx->pc = 0x115EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EA8u;
        // 0x115eac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115EA8u, 0x115EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115EB0u;
label_115eb0:
    // 0x115eb0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x115eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_115eb4:
    // 0x115eb4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x115eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_115eb8:
    // 0x115eb8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x115eb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_115ebc:
    // 0x115ebc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x115ebcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_115ec0:
    // 0x115ec0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x115ec0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_115ec4:
    // 0x115ec4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x115ec4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_115ec8:
    // 0x115ec8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x115ec8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_115ecc:
    // 0x115ecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_115ed0:
    // 0x115ed0: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x115ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_115ed4:
    // 0x115ed4: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x115ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_115ed8:
    // 0x115ed8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x115ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_115edc:
    // 0x115edc: 0x3e00008  jr          $ra
label_115ee0:
    if (ctx->pc == 0x115EE0u) {
        ctx->pc = 0x115EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EDCu;
        // 0x115ee0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115EE4u;
        goto label_115ee4;
    }
    ctx->pc = 0x115EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EDCu;
        // 0x115ee0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115EE4u;
label_115ee4:
    // 0x115ee4: 0x0  nop
    ctx->pc = 0x115ee4u;
    // NOP
    ctx->pc = 0x115ee8u;
}
