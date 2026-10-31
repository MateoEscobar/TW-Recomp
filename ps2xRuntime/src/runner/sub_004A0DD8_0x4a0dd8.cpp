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

// Function: sub_004A0DD8
// Address: 0x4a0dd8 - 0x4a1018
void sub_004A0DD8_0x4a0dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0DD8_0x4a0dd8");
#endif

    switch (ctx->pc) {
        case 0x4a0dd8u: goto label_4a0dd8;
        case 0x4a0ddcu: goto label_4a0ddc;
        case 0x4a0de0u: goto label_4a0de0;
        case 0x4a0de4u: goto label_4a0de4;
        case 0x4a0de8u: goto label_4a0de8;
        case 0x4a0decu: goto label_4a0dec;
        case 0x4a0df0u: goto label_4a0df0;
        case 0x4a0df4u: goto label_4a0df4;
        case 0x4a0df8u: goto label_4a0df8;
        case 0x4a0dfcu: goto label_4a0dfc;
        case 0x4a0e00u: goto label_4a0e00;
        case 0x4a0e04u: goto label_4a0e04;
        case 0x4a0e08u: goto label_4a0e08;
        case 0x4a0e0cu: goto label_4a0e0c;
        case 0x4a0e10u: goto label_4a0e10;
        case 0x4a0e14u: goto label_4a0e14;
        case 0x4a0e18u: goto label_4a0e18;
        case 0x4a0e1cu: goto label_4a0e1c;
        case 0x4a0e20u: goto label_4a0e20;
        case 0x4a0e24u: goto label_4a0e24;
        case 0x4a0e28u: goto label_4a0e28;
        case 0x4a0e2cu: goto label_4a0e2c;
        case 0x4a0e30u: goto label_4a0e30;
        case 0x4a0e34u: goto label_4a0e34;
        case 0x4a0e38u: goto label_4a0e38;
        case 0x4a0e3cu: goto label_4a0e3c;
        case 0x4a0e40u: goto label_4a0e40;
        case 0x4a0e44u: goto label_4a0e44;
        case 0x4a0e48u: goto label_4a0e48;
        case 0x4a0e4cu: goto label_4a0e4c;
        case 0x4a0e50u: goto label_4a0e50;
        case 0x4a0e54u: goto label_4a0e54;
        case 0x4a0e58u: goto label_4a0e58;
        case 0x4a0e5cu: goto label_4a0e5c;
        case 0x4a0e60u: goto label_4a0e60;
        case 0x4a0e64u: goto label_4a0e64;
        case 0x4a0e68u: goto label_4a0e68;
        case 0x4a0e6cu: goto label_4a0e6c;
        case 0x4a0e70u: goto label_4a0e70;
        case 0x4a0e74u: goto label_4a0e74;
        case 0x4a0e78u: goto label_4a0e78;
        case 0x4a0e7cu: goto label_4a0e7c;
        case 0x4a0e80u: goto label_4a0e80;
        case 0x4a0e84u: goto label_4a0e84;
        case 0x4a0e88u: goto label_4a0e88;
        case 0x4a0e8cu: goto label_4a0e8c;
        case 0x4a0e90u: goto label_4a0e90;
        case 0x4a0e94u: goto label_4a0e94;
        case 0x4a0e98u: goto label_4a0e98;
        case 0x4a0e9cu: goto label_4a0e9c;
        case 0x4a0ea0u: goto label_4a0ea0;
        case 0x4a0ea4u: goto label_4a0ea4;
        case 0x4a0ea8u: goto label_4a0ea8;
        case 0x4a0eacu: goto label_4a0eac;
        case 0x4a0eb0u: goto label_4a0eb0;
        case 0x4a0eb4u: goto label_4a0eb4;
        case 0x4a0eb8u: goto label_4a0eb8;
        case 0x4a0ebcu: goto label_4a0ebc;
        case 0x4a0ec0u: goto label_4a0ec0;
        case 0x4a0ec4u: goto label_4a0ec4;
        case 0x4a0ec8u: goto label_4a0ec8;
        case 0x4a0eccu: goto label_4a0ecc;
        case 0x4a0ed0u: goto label_4a0ed0;
        case 0x4a0ed4u: goto label_4a0ed4;
        case 0x4a0ed8u: goto label_4a0ed8;
        case 0x4a0edcu: goto label_4a0edc;
        case 0x4a0ee0u: goto label_4a0ee0;
        case 0x4a0ee4u: goto label_4a0ee4;
        case 0x4a0ee8u: goto label_4a0ee8;
        case 0x4a0eecu: goto label_4a0eec;
        case 0x4a0ef0u: goto label_4a0ef0;
        case 0x4a0ef4u: goto label_4a0ef4;
        case 0x4a0ef8u: goto label_4a0ef8;
        case 0x4a0efcu: goto label_4a0efc;
        case 0x4a0f00u: goto label_4a0f00;
        case 0x4a0f04u: goto label_4a0f04;
        case 0x4a0f08u: goto label_4a0f08;
        case 0x4a0f0cu: goto label_4a0f0c;
        case 0x4a0f10u: goto label_4a0f10;
        case 0x4a0f14u: goto label_4a0f14;
        case 0x4a0f18u: goto label_4a0f18;
        case 0x4a0f1cu: goto label_4a0f1c;
        case 0x4a0f20u: goto label_4a0f20;
        case 0x4a0f24u: goto label_4a0f24;
        case 0x4a0f28u: goto label_4a0f28;
        case 0x4a0f2cu: goto label_4a0f2c;
        case 0x4a0f30u: goto label_4a0f30;
        case 0x4a0f34u: goto label_4a0f34;
        case 0x4a0f38u: goto label_4a0f38;
        case 0x4a0f3cu: goto label_4a0f3c;
        case 0x4a0f40u: goto label_4a0f40;
        case 0x4a0f44u: goto label_4a0f44;
        case 0x4a0f48u: goto label_4a0f48;
        case 0x4a0f4cu: goto label_4a0f4c;
        case 0x4a0f50u: goto label_4a0f50;
        case 0x4a0f54u: goto label_4a0f54;
        case 0x4a0f58u: goto label_4a0f58;
        case 0x4a0f5cu: goto label_4a0f5c;
        case 0x4a0f60u: goto label_4a0f60;
        case 0x4a0f64u: goto label_4a0f64;
        case 0x4a0f68u: goto label_4a0f68;
        case 0x4a0f6cu: goto label_4a0f6c;
        case 0x4a0f70u: goto label_4a0f70;
        case 0x4a0f74u: goto label_4a0f74;
        case 0x4a0f78u: goto label_4a0f78;
        case 0x4a0f7cu: goto label_4a0f7c;
        case 0x4a0f80u: goto label_4a0f80;
        case 0x4a0f84u: goto label_4a0f84;
        case 0x4a0f88u: goto label_4a0f88;
        case 0x4a0f8cu: goto label_4a0f8c;
        case 0x4a0f90u: goto label_4a0f90;
        case 0x4a0f94u: goto label_4a0f94;
        case 0x4a0f98u: goto label_4a0f98;
        case 0x4a0f9cu: goto label_4a0f9c;
        case 0x4a0fa0u: goto label_4a0fa0;
        case 0x4a0fa4u: goto label_4a0fa4;
        case 0x4a0fa8u: goto label_4a0fa8;
        case 0x4a0facu: goto label_4a0fac;
        case 0x4a0fb0u: goto label_4a0fb0;
        case 0x4a0fb4u: goto label_4a0fb4;
        case 0x4a0fb8u: goto label_4a0fb8;
        case 0x4a0fbcu: goto label_4a0fbc;
        case 0x4a0fc0u: goto label_4a0fc0;
        case 0x4a0fc4u: goto label_4a0fc4;
        case 0x4a0fc8u: goto label_4a0fc8;
        case 0x4a0fccu: goto label_4a0fcc;
        case 0x4a0fd0u: goto label_4a0fd0;
        case 0x4a0fd4u: goto label_4a0fd4;
        case 0x4a0fd8u: goto label_4a0fd8;
        case 0x4a0fdcu: goto label_4a0fdc;
        case 0x4a0fe0u: goto label_4a0fe0;
        case 0x4a0fe4u: goto label_4a0fe4;
        case 0x4a0fe8u: goto label_4a0fe8;
        case 0x4a0fecu: goto label_4a0fec;
        case 0x4a0ff0u: goto label_4a0ff0;
        case 0x4a0ff4u: goto label_4a0ff4;
        case 0x4a0ff8u: goto label_4a0ff8;
        case 0x4a0ffcu: goto label_4a0ffc;
        case 0x4a1000u: goto label_4a1000;
        case 0x4a1004u: goto label_4a1004;
        case 0x4a1008u: goto label_4a1008;
        case 0x4a100cu: goto label_4a100c;
        case 0x4a1010u: goto label_4a1010;
        case 0x4a1014u: goto label_4a1014;
        default: break;
    }

    ctx->pc = 0x4a0dd8u;

label_4a0dd8:
    // 0x4a0dd8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4a0dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4a0ddc:
    // 0x4a0ddc: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4a0ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4a0de0:
    // 0x4a0de0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4a0de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_4a0de4:
    // 0x4a0de4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4a0de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4a0de8:
    // 0x4a0de8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4a0de8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a0dec:
    // 0x4a0dec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4a0decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4a0df0:
    // 0x4a0df0: 0x89042  srl         $s2, $t0, 1
    ctx->pc = 0x4a0df0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
label_4a0df4:
    // 0x4a0df4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4a0df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_4a0df8:
    // 0x4a0df8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4a0df8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a0dfc:
    // 0x4a0dfc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4a0dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_4a0e00:
    // 0x4a0e00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4a0e00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a0e04:
    // 0x4a0e04: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x4a0e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_4a0e08:
    // 0x4a0e08: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4a0e08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a0e0c:
    // 0x4a0e0c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4a0e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_4a0e10:
    // 0x4a0e10: 0x2456f7a0  addiu       $s6, $v0, -0x860
    ctx->pc = 0x4a0e10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965152));
label_4a0e14:
    // 0x4a0e14: 0x10000064  b           . + 4 + (0x64 << 2)
label_4a0e18:
    if (ctx->pc == 0x4A0E18u) {
        ctx->pc = 0x4A0E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0E14u;
        // 0x4a0e18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0E1Cu;
        goto label_4a0e1c;
    }
    ctx->pc = 0x4A0E14u;
    {
        const bool branch_taken_0x4a0e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0E14u;
        // 0x4a0e18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0e14) {
            ctx->pc = 0x4A0FA8u;
            goto label_4a0fa8;
        }
    }
    ctx->pc = 0x4A0E1Cu;
label_4a0e1c:
    // 0x4a0e1c: 0x0  nop
    ctx->pc = 0x4a0e1cu;
    // NOP
label_4a0e20:
    // 0x4a0e20: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4a0e20u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_4a0e24:
    // 0x4a0e24: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4a0e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4a0e28:
    // 0x4a0e28: 0x7ac90000  lq          $t1, 0x0($s6)
    ctx->pc = 0x4a0e28u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_4a0e2c:
    // 0x4a0e2c: 0x2458f700  addiu       $t8, $v0, -0x900
    ctx->pc = 0x4a0e2cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
label_4a0e30:
    // 0x4a0e30: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x4a0e30u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_4a0e34:
    // 0x4a0e34: 0x240f0010  addiu       $t7, $zero, 0x10
    ctx->pc = 0x4a0e34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4a0e38:
    // 0x4a0e38: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x4a0e38u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
label_4a0e3c:
    // 0x4a0e3c: 0x3c0d0400  lui         $t5, 0x400
    ctx->pc = 0x4a0e3cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)1024 << 16));
label_4a0e40:
    // 0x4a0e40: 0x3c0c0100  lui         $t4, 0x100
    ctx->pc = 0x4a0e40u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)256 << 16));
label_4a0e44:
    // 0x4a0e44: 0x358c0404  ori         $t4, $t4, 0x404
    ctx->pc = 0x4a0e44u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1028);
label_4a0e48:
    // 0x4a0e48: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x4a0e48u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
label_4a0e4c:
    // 0x4a0e4c: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x4a0e4cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
label_4a0e50:
    // 0x4a0e50: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4a0e50u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_4a0e54:
    // 0x4a0e54: 0x0  nop
    ctx->pc = 0x4a0e54u;
    // NOP
label_4a0e58:
    // 0x4a0e58: 0x2e030011  sltiu       $v1, $s0, 0x11
    ctx->pc = 0x4a0e58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_4a0e5c:
    // 0x4a0e5c: 0x1e0382d  daddu       $a3, $t7, $zero
    ctx->pc = 0x4a0e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_4a0e60:
    // 0x4a0e60: 0x203380b  movn        $a3, $s0, $v1
    ctx->pc = 0x4a0e60u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 16));
label_4a0e64:
    // 0x4a0e64: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x4a0e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_4a0e68:
    // 0x4a0e68: 0xed1825  or          $v1, $a3, $t5
    ctx->pc = 0x4a0e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
label_4a0e6c:
    // 0x4a0e6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4a0e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4a0e70:
    // 0x4a0e70: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a0e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4a0e74:
    // 0x4a0e74: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4a0e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_4a0e78:
    // 0x4a0e78: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4a0e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_4a0e7c:
    // 0x4a0e7c: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x4a0e7cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
label_4a0e80:
    // 0x4a0e80: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x4a0e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
label_4a0e84:
    // 0x4a0e84: 0x4e2025  or          $a0, $v0, $t6
    ctx->pc = 0x4a0e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
label_4a0e88:
    // 0x4a0e88: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x4a0e88u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_4a0e8c:
    // 0x4a0e8c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x4a0e8cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_4a0e90:
    // 0x4a0e90: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a0e94:
    // 0x4a0e94: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a0e94u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a0e98:
    // 0x4a0e98: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a0e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a0e9c:
    // 0x4a0e9c: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a0e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a0ea0:
    // 0x4a0ea0: 0x71cc0  sll         $v1, $a3, 19
    ctx->pc = 0x4a0ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 19));
label_4a0ea4:
    // 0x4a0ea4: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x4a0ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
label_4a0ea8:
    // 0x4a0ea8: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x4a0ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_4a0eac:
    // 0x4a0eac: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x4a0eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
label_4a0eb0:
    // 0x4a0eb0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4a0eb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_4a0eb4:
    // 0x4a0eb4: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x4a0eb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
label_4a0eb8:
    // 0x4a0eb8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4a0eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_4a0ebc:
    // 0x4a0ebc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a0ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4a0ec0:
    // 0x4a0ec0: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x4a0ec0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_4a0ec4:
    // 0x4a0ec4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a0ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a0ec8:
    // 0x4a0ec8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a0ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a0ecc:
    // 0x4a0ecc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4a0eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_4a0ed0:
    // 0x4a0ed0: 0x10ea002d  beq         $a3, $t2, . + 4 + (0x2D << 2)
label_4a0ed4:
    if (ctx->pc == 0x4A0ED4u) {
        ctx->pc = 0x4A0ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0ED0u;
        // 0x4a0ed4: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0ED8u;
        goto label_4a0ed8;
    }
    ctx->pc = 0x4A0ED0u;
    {
        const bool branch_taken_0x4a0ed0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        ctx->pc = 0x4A0ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0ED0u;
        // 0x4a0ed4: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0ed0) {
            ctx->pc = 0x4A0F88u;
            goto label_4a0f88;
        }
    }
    ctx->pc = 0x4A0ED8u;
label_4a0ed8:
    // 0x4a0ed8: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4a0ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_4a0edc:
    // 0x4a0edc: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4a0edcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_4a0ee0:
    // 0x4a0ee0: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x4a0ee0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4a0ee4:
    // 0x4a0ee4: 0x96260002  lhu         $a2, 0x2($s1)
    ctx->pc = 0x4a0ee4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4a0ee8:
    // 0x4a0ee8: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x4a0ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_4a0eec:
    // 0x4a0eec: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x4a0eecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_4a0ef0:
    // 0x4a0ef0: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x4a0ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4a0ef4:
    // 0x4a0ef4: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x4a0ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_4a0ef8:
    // 0x4a0ef8: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x4a0ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a0efc:
    // 0x4a0efc: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4a0efcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_4a0f00:
    // 0x4a0f00: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a0f00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4a0f04:
    // 0x4a0f04: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4a0f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a0f08:
    // 0x4a0f08: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a0f08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_4a0f0c:
    // 0x4a0f0c: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x4a0f0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_4a0f10:
    // 0x4a0f10: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a0f10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4a0f14:
    // 0x4a0f14: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x4a0f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a0f18:
    // 0x4a0f18: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0f18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0f1c:
    // 0x4a0f1c: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x4a0f1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_4a0f20:
    // 0x4a0f20: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4a0f20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_4a0f24:
    // 0x4a0f24: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x4a0f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_4a0f28:
    // 0x4a0f28: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0f28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0f2c:
    // 0x4a0f2c: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x4a0f2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_4a0f30:
    // 0x4a0f30: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x4a0f30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_4a0f34:
    // 0x4a0f34: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x4a0f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_4a0f38:
    // 0x4a0f38: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0f38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0f3c:
    // 0x4a0f3c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x4a0f3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_4a0f40:
    // 0x4a0f40: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x4a0f40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_4a0f44:
    // 0x4a0f44: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x4a0f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_4a0f48:
    // 0x4a0f48: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0f48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0f4c:
    // 0x4a0f4c: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x4a0f4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_4a0f50:
    // 0x4a0f50: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x4a0f50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_4a0f54:
    // 0x4a0f54: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x4a0f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_4a0f58:
    // 0x4a0f58: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0f58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0f5c:
    // 0x4a0f5c: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x4a0f5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_4a0f60:
    // 0x4a0f60: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x4a0f60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_4a0f64:
    // 0x4a0f64: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x4a0f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_4a0f68:
    // 0x4a0f68: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0f68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0f6c:
    // 0x4a0f6c: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x4a0f6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_4a0f70:
    // 0x4a0f70: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x4a0f70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_4a0f74:
    // 0x4a0f74: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x4a0f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_4a0f78:
    // 0x4a0f78: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a0f78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_4a0f7c:
    // 0x4a0f7c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4a0f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_4a0f80:
    // 0x4a0f80: 0x14e8ffd7  bne         $a3, $t0, . + 4 + (-0x29 << 2)
label_4a0f84:
    if (ctx->pc == 0x4A0F84u) {
        ctx->pc = 0x4A0F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0F80u;
        // 0x4a0f84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0F88u;
        goto label_4a0f88;
    }
    ctx->pc = 0x4A0F80u;
    {
        const bool branch_taken_0x4a0f80 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x4A0F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0F80u;
        // 0x4a0f84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0f80) {
            ctx->pc = 0x4A0EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0ee0;
        }
    }
    ctx->pc = 0x4A0F88u;
label_4a0f88:
    // 0x4a0f88: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a0f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a0f8c:
    // 0x4a0f8c: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x4a0f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
label_4a0f90:
    // 0x4a0f90: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a0f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a0f94:
    // 0x4a0f94: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a0f94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a0f98:
    // 0x4a0f98: 0x1600ffaf  bnez        $s0, . + 4 + (-0x51 << 2)
label_4a0f9c:
    if (ctx->pc == 0x4A0F9Cu) {
        ctx->pc = 0x4A0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0F98u;
        // 0x4a0f9c: 0x7b090000  lq          $t1, 0x0($t8) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 24), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0FA0u;
        goto label_4a0fa0;
    }
    ctx->pc = 0x4A0F98u;
    {
        const bool branch_taken_0x4a0f98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0F98u;
        // 0x4a0f9c: 0x7b090000  lq          $t1, 0x0($t8) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 24), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0f98) {
            ctx->pc = 0x4A0E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0e58;
        }
    }
    ctx->pc = 0x4A0FA0u;
label_4a0fa0:
    // 0x4a0fa0: 0xc127ec8  jal         func_49FB20
label_4a0fa4:
    if (ctx->pc == 0x4A0FA4u) {
        ctx->pc = 0x4A0FA8u;
        goto label_4a0fa8;
    }
    ctx->pc = 0x4A0FA0u;
    SET_GPR_U32(ctx, 31, 0x4A0FA8u);
    ctx->pc = 0x49FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FB20u, 0x4A0FA0u, 0x4A0FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0FA8u;
label_4a0fa8:
    // 0x4a0fa8: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_4a0fac:
    if (ctx->pc == 0x4A0FACu) {
        ctx->pc = 0x4A0FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0FA8u;
        // 0x4a0fac: 0x8f908798  lw          $s0, -0x7868($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0FB0u;
        goto label_4a0fb0;
    }
    ctx->pc = 0x4A0FA8u;
    {
        const bool branch_taken_0x4a0fa8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0FA8u;
        // 0x4a0fac: 0x8f908798  lw          $s0, -0x7868($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0fa8) {
            ctx->pc = 0x4A0FE0u;
            goto label_4a0fe0;
        }
    }
    ctx->pc = 0x4A0FB0u;
label_4a0fb0:
    // 0x4a0fb0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a0fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a0fb4:
    // 0x4a0fb4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4a0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4a0fb8:
    // 0x4a0fb8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4a0fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4a0fbc:
    // 0x4a0fbc: 0x212182b  sltu        $v1, $s0, $s2
    ctx->pc = 0x4a0fbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_4a0fc0:
    // 0x4a0fc0: 0x8e880004  lw          $t0, 0x4($s4)
    ctx->pc = 0x4a0fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4a0fc4:
    // 0x4a0fc4: 0x243800a  movz        $s0, $s2, $v1
    ctx->pc = 0x4a0fc4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_4a0fc8:
    // 0x4a0fc8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4a0fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a0fcc:
    // 0x4a0fcc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4a0fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a0fd0:
    // 0x4a0fd0: 0x40f809  jalr        $v0
label_4a0fd4:
    if (ctx->pc == 0x4A0FD4u) {
        ctx->pc = 0x4A0FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0FD0u;
        // 0x4a0fd4: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0FD8u;
        goto label_4a0fd8;
    }
    ctx->pc = 0x4A0FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A0FD8u);
        ctx->pc = 0x4A0FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0FD0u;
        // 0x4a0fd4: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0FD0u, 0x4A0FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A0FD8u;
label_4a0fd8:
    // 0x4a0fd8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a0fdc:
    if (ctx->pc == 0x4A0FDCu) {
        ctx->pc = 0x4A0FE0u;
        goto label_4a0fe0;
    }
    ctx->pc = 0x4A0FD8u;
    {
        const bool branch_taken_0x4a0fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a0fd8) {
            ctx->pc = 0x4A0FE4u;
            goto label_4a0fe4;
        }
    }
    ctx->pc = 0x4A0FE0u;
label_4a0fe0:
    // 0x4a0fe0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4a0fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a0fe4:
    // 0x4a0fe4: 0x1600ff8e  bnez        $s0, . + 4 + (-0x72 << 2)
label_4a0fe8:
    if (ctx->pc == 0x4A0FE8u) {
        ctx->pc = 0x4A0FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0FE4u;
        // 0x4a0fe8: 0x3c0b7c00  lui         $t3, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)31744 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0FECu;
        goto label_4a0fec;
    }
    ctx->pc = 0x4A0FE4u;
    {
        const bool branch_taken_0x4a0fe4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0FE4u;
        // 0x4a0fe8: 0x3c0b7c00  lui         $t3, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)31744 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0fe4) {
            ctx->pc = 0x4A0E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0e20;
        }
    }
    ctx->pc = 0x4A0FECu;
label_4a0fec:
    // 0x4a0fec: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4a0fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a0ff0:
    // 0x4a0ff0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4a0ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a0ff4:
    // 0x4a0ff4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4a0ff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a0ff8:
    // 0x4a0ff8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4a0ff8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a0ffc:
    // 0x4a0ffc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4a0ffcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a1000:
    // 0x4a1000: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4a1000u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a1004:
    // 0x4a1004: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x4a1004u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a1008:
    // 0x4a1008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a1008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a100c:
    // 0x4a100c: 0x3e00008  jr          $ra
label_4a1010:
    if (ctx->pc == 0x4A1010u) {
        ctx->pc = 0x4A1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A100Cu;
        // 0x4a1010: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1014u;
        goto label_4a1014;
    }
    ctx->pc = 0x4A100Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A100Cu;
        // 0x4a1010: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A100Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A1014u;
label_4a1014:
    // 0x4a1014: 0x0  nop
    ctx->pc = 0x4a1014u;
    // NOP
    ctx->pc = 0x4a1018u;
}
