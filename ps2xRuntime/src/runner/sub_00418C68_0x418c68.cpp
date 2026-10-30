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

// Function: sub_00418C68
// Address: 0x418c68 - 0x419030
void sub_00418C68_0x418c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418C68_0x418c68");
#endif

    switch (ctx->pc) {
        case 0x418cb0u: goto label_418cb0;
        case 0x418cc8u: goto label_418cc8;
        case 0x418d14u: goto label_418d14;
        case 0x418d2cu: goto label_418d2c;
        case 0x418d70u: goto label_418d70;
        case 0x418d8cu: goto label_418d8c;
        case 0x418dd0u: goto label_418dd0;
        case 0x418de4u: goto label_418de4;
        case 0x418e0cu: goto label_418e0c;
        case 0x418e34u: goto label_418e34;
        case 0x418e40u: goto label_418e40;
        case 0x418e4cu: goto label_418e4c;
        case 0x418e58u: goto label_418e58;
        case 0x418e64u: goto label_418e64;
        case 0x418e70u: goto label_418e70;
        case 0x418e80u: goto label_418e80;
        case 0x418e8cu: goto label_418e8c;
        case 0x418e98u: goto label_418e98;
        case 0x418ea4u: goto label_418ea4;
        case 0x418eb0u: goto label_418eb0;
        case 0x418ec4u: goto label_418ec4;
        case 0x418ed4u: goto label_418ed4;
        case 0x418ee4u: goto label_418ee4;
        case 0x418ee8u: goto label_418ee8;
        case 0x418ef8u: goto label_418ef8;
        case 0x418f18u: goto label_418f18;
        case 0x418f44u: goto label_418f44;
        case 0x418f58u: goto label_418f58;
        case 0x418f78u: goto label_418f78;
        case 0x418fb0u: goto label_418fb0;
        case 0x418fc0u: goto label_418fc0;
        case 0x418fd0u: goto label_418fd0;
        case 0x418fe0u: goto label_418fe0;
        default: break;
    }

    ctx->pc = 0x418c68u;

    // 0x418c68: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x418c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x418c6c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x418c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x418c70: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x418c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x418c74: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x418c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x418c78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x418c78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418c7c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x418c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x418c80: 0x26510480  addiu       $s1, $s2, 0x480
    ctx->pc = 0x418c80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1152));
    // 0x418c84: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x418c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x418c88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x418c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418c8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x418c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x418c90: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x418c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x418c94: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x418c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x418c98: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x418c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x418c9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x418c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x418ca0: 0xae400158  sw          $zero, 0x158($s2)
    ctx->pc = 0x418ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 0));
    // 0x418ca4: 0x8645033a  lh          $a1, 0x33A($s2)
    ctx->pc = 0x418ca4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 826)));
    // 0x418ca8: 0xc107810  jal         func_41E040
    ctx->pc = 0x418CA8u;
    SET_GPR_U32(ctx, 31, 0x418CB0u);
    ctx->pc = 0x418CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418CA8u;
    // 0x418cac: 0x28a50002  slti        $a1, $a1, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E040u, 0x418CA8u, 0x418CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418CB0u;
label_418cb0:
    // 0x418cb0: 0x8642033a  lh          $v0, 0x33A($s2)
    ctx->pc = 0x418cb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 826)));
    // 0x418cb4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x418cb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x418cb8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x418CB8u;
    {
        const bool branch_taken_0x418cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x418CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418CB8u;
        // 0x418cbc: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418cb8) {
            ctx->pc = 0x418CCCu;
            goto label_418ccc;
        }
    }
    ctx->pc = 0x418CC0u;
    // 0x418cc0: 0xc10785a  jal         func_41E168
    ctx->pc = 0x418CC0u;
    SET_GPR_U32(ctx, 31, 0x418CC8u);
    ctx->pc = 0x418CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418CC0u;
    // 0x418cc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E168u, 0x418CC0u, 0x418CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418CC8u;
label_418cc8:
    // 0x418cc8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x418cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_418ccc:
    // 0x418ccc: 0xa6400152  sh          $zero, 0x152($s2)
    ctx->pc = 0x418cccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 338), (uint16_t)GPR_U32(ctx, 0));
    // 0x418cd0: 0xa6430150  sh          $v1, 0x150($s2)
    ctx->pc = 0x418cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 336), (uint16_t)GPR_U32(ctx, 3));
    // 0x418cd4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x418cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x418cd8: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x418cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x418cdc: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x418cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x418ce0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x418ce0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x418ce4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x418ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418ce8: 0x26420416  addiu       $v0, $s2, 0x416
    ctx->pc = 0x418ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1046));
    // 0x418cec: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x418cecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418cf0: 0x7e430270  sq          $v1, 0x270($s2)
    ctx->pc = 0x418cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 624), GPR_VEC(ctx, 3));
    // 0x418cf4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x418cf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418cf8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x418cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x418cfc: 0x26540294  addiu       $s4, $s2, 0x294
    ctx->pc = 0x418cfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 660));
    // 0x418d00: 0x26420418  addiu       $v0, $s2, 0x418
    ctx->pc = 0x418d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1048));
    // 0x418d04: 0x8e05bd30  lw          $a1, -0x42D0($s0)
    ctx->pc = 0x418d04u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x418d08: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x418d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x418d0c: 0xc1073fa  jal         func_41CFE8
    ctx->pc = 0x418D0Cu;
    SET_GPR_U32(ctx, 31, 0x418D14u);
    ctx->pc = 0x418D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418D0Cu;
    // 0x418d10: 0x265e0414  addiu       $fp, $s2, 0x414 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 1044));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CFE8u, 0x418D0Cu, 0x418D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418D14u;
label_418d14:
    // 0x418d14: 0x2656042e  addiu       $s6, $s2, 0x42E
    ctx->pc = 0x418d14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1070));
    // 0x418d18: 0x8e05bd30  lw          $a1, -0x42D0($s0)
    ctx->pc = 0x418d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
    // 0x418d1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x418d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418d20: 0x2655041e  addiu       $s5, $s2, 0x41E
    ctx->pc = 0x418d20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1054));
    // 0x418d24: 0xc107420  jal         func_41D080
    ctx->pc = 0x418D24u;
    SET_GPR_U32(ctx, 31, 0x418D2Cu);
    ctx->pc = 0x418D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418D24u;
    // 0x418d28: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D080u, 0x418D24u, 0x418D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418D2Cu;
label_418d2c:
    // 0x418d2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x418d2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418d30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x418d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x418d34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x418d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x418d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x418d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x418d3c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x418d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x418d40: 0xae40028c  sw          $zero, 0x28C($s2)
    ctx->pc = 0x418d40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 652), GPR_U32(ctx, 0));
    // 0x418d44: 0xa2400291  sb          $zero, 0x291($s2)
    ctx->pc = 0x418d44u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 657), (uint8_t)GPR_U32(ctx, 0));
    // 0x418d48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x418d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418d4c: 0xa6400292  sh          $zero, 0x292($s2)
    ctx->pc = 0x418d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 658), (uint16_t)GPR_U32(ctx, 0));
    // 0x418d50: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x418d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x418d54: 0xae420288  sw          $v0, 0x288($s2)
    ctx->pc = 0x418d54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 648), GPR_U32(ctx, 2));
    // 0x418d58: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x418d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x418d5c: 0xe6400380  swc1        $f0, 0x380($s2)
    ctx->pc = 0x418d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 896), bits); }
    // 0x418d60: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x418d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x418d64: 0xa2430290  sb          $v1, 0x290($s2)
    ctx->pc = 0x418d64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 656), (uint8_t)GPR_U32(ctx, 3));
    // 0x418d68: 0xc106e22  jal         func_41B888
    ctx->pc = 0x418D68u;
    SET_GPR_U32(ctx, 31, 0x418D70u);
    ctx->pc = 0x418D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418D68u;
    // 0x418d6c: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B888u, 0x418D68u, 0x418D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418D70u;
label_418d70:
    // 0x418d70: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x418d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x418d74: 0x3a06000c  xori        $a2, $s0, 0xC
    ctx->pc = 0x418d74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)12);
    // 0x418d78: 0xa0530000  sb          $s3, 0x0($v0)
    ctx->pc = 0x418d78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x418d7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x418d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418d80: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x418d80u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x418d84: 0xc107434  jal         func_41D0D0
    ctx->pc = 0x418D84u;
    SET_GPR_U32(ctx, 31, 0x418D8Cu);
    ctx->pc = 0x418D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418D84u;
    // 0x418d88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D0D0u, 0x418D84u, 0x418D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418D8Cu;
label_418d8c:
    // 0x418d8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x418d8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x418d90: 0x2e22000f  sltiu       $v0, $s1, 0xF
    ctx->pc = 0x418d90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x418d94: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x418D94u;
    {
        const bool branch_taken_0x418d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x418D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418D94u;
        // 0x418d98: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418d94) {
            ctx->pc = 0x418D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_418d70;
        }
    }
    ctx->pc = 0x418D9Cu;
    // 0x418d9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x418d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x418da0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x418da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x418da4: 0xa24056e6  sb          $zero, 0x56E6($s2)
    ctx->pc = 0x418da4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 22246), (uint8_t)GPR_U32(ctx, 0));
    // 0x418da8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x418da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418dac: 0xae4002a8  sw          $zero, 0x2A8($s2)
    ctx->pc = 0x418dacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 680), GPR_U32(ctx, 0));
    // 0x418db0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x418db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418db4: 0xa2430295  sb          $v1, 0x295($s2)
    ctx->pc = 0x418db4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 661), (uint8_t)GPR_U32(ctx, 3));
    // 0x418db8: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x418db8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x418dbc: 0xa2430296  sb          $v1, 0x296($s2)
    ctx->pc = 0x418dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 662), (uint8_t)GPR_U32(ctx, 3));
    // 0x418dc0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x418dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x418dc4: 0xa242029d  sb          $v0, 0x29D($s2)
    ctx->pc = 0x418dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 669), (uint8_t)GPR_U32(ctx, 2));
    // 0x418dc8: 0xc10707e  jal         func_41C1F8
    ctx->pc = 0x418DC8u;
    SET_GPR_U32(ctx, 31, 0x418DD0u);
    ctx->pc = 0x418DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418DC8u;
    // 0x418dcc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1F8u, 0x418DC8u, 0x418DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418DD0u;
label_418dd0:
    // 0x418dd0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x418dd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x418dd4: 0xae5002b0  sw          $s0, 0x2B0($s2)
    ctx->pc = 0x418dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 688), GPR_U32(ctx, 16));
    // 0x418dd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x418dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418ddc: 0xc106b7e  jal         func_41ADF8
    ctx->pc = 0x418DDCu;
    SET_GPR_U32(ctx, 31, 0x418DE4u);
    ctx->pc = 0x418DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418DDCu;
    // 0x418de0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41ADF8u, 0x418DDCu, 0x418DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418DE4u;
label_418de4:
    // 0x418de4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x418de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x418de8: 0xa6500320  sh          $s0, 0x320($s2)
    ctx->pc = 0x418de8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 800), (uint16_t)GPR_U32(ctx, 16));
    // 0x418dec: 0xa6400324  sh          $zero, 0x324($s2)
    ctx->pc = 0x418decu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 804), (uint16_t)GPR_U32(ctx, 0));
    // 0x418df0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x418df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418df4: 0xa6400322  sh          $zero, 0x322($s2)
    ctx->pc = 0x418df4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 802), (uint16_t)GPR_U32(ctx, 0));
    // 0x418df8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x418df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418dfc: 0xae4002b4  sw          $zero, 0x2B4($s2)
    ctx->pc = 0x418dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 692), GPR_U32(ctx, 0));
    // 0x418e00: 0xa6420326  sh          $v0, 0x326($s2)
    ctx->pc = 0x418e00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 806), (uint16_t)GPR_U32(ctx, 2));
    // 0x418e04: 0xc106bd2  jal         func_41AF48
    ctx->pc = 0x418E04u;
    SET_GPR_U32(ctx, 31, 0x418E0Cu);
    ctx->pc = 0x418E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418E04u;
    // 0x418e08: 0xa6420434  sh          $v0, 0x434($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AF48u, 0x418E04u, 0x418E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418E0Cu;
label_418e0c:
    // 0x418e0c: 0xae40031c  sw          $zero, 0x31C($s2)
    ctx->pc = 0x418e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 796), GPR_U32(ctx, 0));
    // 0x418e10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x418e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418e14: 0xae51035c  sw          $s1, 0x35C($s2)
    ctx->pc = 0x418e14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 860), GPR_U32(ctx, 17));
    // 0x418e18: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x418e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x418e1c: 0xae5156f8  sw          $s1, 0x56F8($s2)
    ctx->pc = 0x418e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 22264), GPR_U32(ctx, 17));
    // 0x418e20: 0xae4056fc  sw          $zero, 0x56FC($s2)
    ctx->pc = 0x418e20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 22268), GPR_U32(ctx, 0));
    // 0x418e24: 0xae405700  sw          $zero, 0x5700($s2)
    ctx->pc = 0x418e24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 22272), GPR_U32(ctx, 0));
    // 0x418e28: 0xae515704  sw          $s1, 0x5704($s2)
    ctx->pc = 0x418e28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 22276), GPR_U32(ctx, 17));
    // 0x418e2c: 0xc10742a  jal         func_41D0A8
    ctx->pc = 0x418E2Cu;
    SET_GPR_U32(ctx, 31, 0x418E34u);
    ctx->pc = 0x418E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418E2Cu;
    // 0x418e30: 0xa251032a  sb          $s1, 0x32A($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 810), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D0A8u, 0x418E2Cu, 0x418E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418E34u;
label_418e34:
    // 0x418e34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x418e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418e38: 0xc106b8c  jal         func_41AE30
    ctx->pc = 0x418E38u;
    SET_GPR_U32(ctx, 31, 0x418E40u);
    ctx->pc = 0x418E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418E38u;
    // 0x418e3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AE30u, 0x418E38u, 0x418E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418E40u;
label_418e40:
    // 0x418e40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x418e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418e44: 0xc106802  jal         func_41A008
    ctx->pc = 0x418E44u;
    SET_GPR_U32(ctx, 31, 0x418E4Cu);
    ctx->pc = 0x418E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418E44u;
    // 0x418e48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A008u, 0x418E44u, 0x418E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418E4Cu;
label_418e4c:
    // 0x418e4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x418e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418e50: 0xc1067f2  jal         func_419FC8
    ctx->pc = 0x418E50u;
    SET_GPR_U32(ctx, 31, 0x418E58u);
    ctx->pc = 0x418E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418E50u;
    // 0x418e54: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419FC8u, 0x418E50u, 0x418E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418E58u;
label_418e58:
    // 0x418e58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x418e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418e5c: 0xc106d30  jal         func_41B4C0
    ctx->pc = 0x418E5Cu;
    SET_GPR_U32(ctx, 31, 0x418E64u);
    ctx->pc = 0x418E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418E5Cu;
    // 0x418e60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B4C0u, 0x418E5Cu, 0x418E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418E64u;
label_418e64:
    // 0x418e64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x418e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418e68: 0xc106d3c  jal         func_41B4F0
    ctx->pc = 0x418E68u;
    SET_GPR_U32(ctx, 31, 0x418E70u);
    ctx->pc = 0x418E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418E68u;
    // 0x418e6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B4F0u, 0x418E68u, 0x418E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418E70u;
label_418e70:
    // 0x418e70: 0xae4003f4  sw          $zero, 0x3F4($s2)
    ctx->pc = 0x418e70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1012), GPR_U32(ctx, 0));
    // 0x418e74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x418e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418e78: 0xc106c46  jal         func_41B118
    ctx->pc = 0x418E78u;
    SET_GPR_U32(ctx, 31, 0x418E80u);
    ctx->pc = 0x418E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418E78u;
    // 0x418e7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B118u, 0x418E78u, 0x418E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418E80u;
label_418e80:
    // 0x418e80: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x418e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418e84: 0xc107918  jal         func_41E460
    ctx->pc = 0x418E84u;
    SET_GPR_U32(ctx, 31, 0x418E8Cu);
    ctx->pc = 0x418E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418E84u;
    // 0x418e88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E460u, 0x418E84u, 0x418E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418E8Cu;
label_418e8c:
    // 0x418e8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x418e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418e90: 0xc106b7e  jal         func_41ADF8
    ctx->pc = 0x418E90u;
    SET_GPR_U32(ctx, 31, 0x418E98u);
    ctx->pc = 0x418E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418E90u;
    // 0x418e94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41ADF8u, 0x418E90u, 0x418E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418E98u;
label_418e98:
    // 0x418e98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x418e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418e9c: 0xc106d30  jal         func_41B4C0
    ctx->pc = 0x418E9Cu;
    SET_GPR_U32(ctx, 31, 0x418EA4u);
    ctx->pc = 0x418EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418E9Cu;
    // 0x418ea0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B4C0u, 0x418E9Cu, 0x418EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418EA4u;
label_418ea4:
    // 0x418ea4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x418ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418ea8: 0xc106d3c  jal         func_41B4F0
    ctx->pc = 0x418EA8u;
    SET_GPR_U32(ctx, 31, 0x418EB0u);
    ctx->pc = 0x418EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418EA8u;
    // 0x418eac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B4F0u, 0x418EA8u, 0x418EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418EB0u;
label_418eb0:
    // 0x418eb0: 0xa2510431  sb          $s1, 0x431($s2)
    ctx->pc = 0x418eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1073), (uint8_t)GPR_U32(ctx, 17));
    // 0x418eb4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x418eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418eb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x418eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418ebc: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x418EBCu;
    SET_GPR_U32(ctx, 31, 0x418EC4u);
    ctx->pc = 0x418EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418EBCu;
    // 0x418ec0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x418EBCu, 0x418EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418EC4u;
label_418ec4:
    // 0x418ec4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x418ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x418ec8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x418ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x418ecc: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x418ECCu;
    SET_GPR_U32(ctx, 31, 0x418ED4u);
    ctx->pc = 0x418ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418ECCu;
    // 0x418ed0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x418ECCu, 0x418ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418ED4u;
label_418ed4:
    // 0x418ed4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x418ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x418ed8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x418ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418edc: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x418EDCu;
    SET_GPR_U32(ctx, 31, 0x418EE4u);
    ctx->pc = 0x418EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418EDCu;
    // 0x418ee0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x418EDCu, 0x418EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418EE4u;
label_418ee4:
    // 0x418ee4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x418ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_418ee8:
    // 0x418ee8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x418ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418eec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x418eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418ef0: 0xc107132  jal         func_41C4C8
    ctx->pc = 0x418EF0u;
    SET_GPR_U32(ctx, 31, 0x418EF8u);
    ctx->pc = 0x418EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418EF0u;
    // 0x418ef4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C4C8u, 0x418EF0u, 0x418EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418EF8u;
label_418ef8:
    // 0x418ef8: 0x26700001  addiu       $s0, $s3, 0x1
    ctx->pc = 0x418ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x418efc: 0x2d31821  addu        $v1, $s6, $s3
    ctx->pc = 0x418efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x418f00: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x418f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x418f04: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x418f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x418f08: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x418f08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x418f0c: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x418f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x418f10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x418f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418f14: 0x0  nop
    ctx->pc = 0x418f14u;
    // NOP
label_418f18:
    // 0x418f18: 0xa0740000  sb          $s4, 0x0($v1)
    ctx->pc = 0x418f18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x418f1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x418f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x418f20: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x418f20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x418f24: 0x0  nop
    ctx->pc = 0x418f24u;
    // NOP
    // 0x418f28: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x418F28u;
    {
        const bool branch_taken_0x418f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x418F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418F28u;
        // 0x418f2c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418f28) {
            ctx->pc = 0x418F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_418f18;
        }
    }
    ctx->pc = 0x418F30u;
    // 0x418f30: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x418f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x418f34: 0x2622018  mult        $a0, $s3, $v0
    ctx->pc = 0x418f34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x418f38: 0x24840168  addiu       $a0, $a0, 0x168
    ctx->pc = 0x418f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 360));
    // 0x418f3c: 0xc10614c  jal         func_418530
    ctx->pc = 0x418F3Cu;
    SET_GPR_U32(ctx, 31, 0x418F44u);
    ctx->pc = 0x418F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418F3Cu;
    // 0x418f40: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418530u, 0x418F3Cu, 0x418F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418F44u;
label_418f44:
    // 0x418f44: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x418f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x418f48: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x418f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418f4c: 0x24440840  addiu       $a0, $v0, 0x840
    ctx->pc = 0x418f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x418f50: 0xc06cf88  jal         func_1B3E20
    ctx->pc = 0x418F50u;
    SET_GPR_U32(ctx, 31, 0x418F58u);
    ctx->pc = 0x418F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418F50u;
    // 0x418f54: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3E20u, 0x418F50u, 0x418F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418F58u;
label_418f58:
    // 0x418f58: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x418f58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x418f5c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x418F5Cu;
    {
        const bool branch_taken_0x418f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x418F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418F5Cu;
        // 0x418f60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418f5c) {
            ctx->pc = 0x418EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_418ee8;
        }
    }
    ctx->pc = 0x418F64u;
    // 0x418f64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x418f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x418f68: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x418f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x418f6c: 0xa043480c  sb          $v1, 0x480C($v0)
    ctx->pc = 0x418f6cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x51480Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x51480Cu, _value); } while (0);
    // 0x418f70: 0xc1065d6  jal         func_419758
    ctx->pc = 0x418F70u;
    SET_GPR_U32(ctx, 31, 0x418F78u);
    ctx->pc = 0x418F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418F70u;
    // 0x418f74: 0xa2400430  sb          $zero, 0x430($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1072), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419758u, 0x418F70u, 0x418F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418F78u;
label_418f78:
    // 0x418f78: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x418f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x418f7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x418f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x418f80: 0xa44348bc  sh          $v1, 0x48BC($v0)
    ctx->pc = 0x418f80u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5148BCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5148BCu, _value); } while (0);
    // 0x418f84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x418f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418f88: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x418f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x418f8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x418f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x418f90: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x418f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x418f94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x418f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418f98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x418f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418f9c: 0xe44048b8  swc1        $f0, 0x48B8($v0)
    ctx->pc = 0x418f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5148B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5148B8u, _value); } while (0); }
    // 0x418fa0: 0xae400238  sw          $zero, 0x238($s2)
    ctx->pc = 0x418fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 568), GPR_U32(ctx, 0));
    // 0x418fa4: 0xae400244  sw          $zero, 0x244($s2)
    ctx->pc = 0x418fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 580), GPR_U32(ctx, 0));
    // 0x418fa8: 0xc1073c8  jal         func_41CF20
    ctx->pc = 0x418FA8u;
    SET_GPR_U32(ctx, 31, 0x418FB0u);
    ctx->pc = 0x418FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418FA8u;
    // 0x418fac: 0xa2400248  sb          $zero, 0x248($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 584), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF20u, 0x418FA8u, 0x418FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418FB0u;
label_418fb0:
    // 0x418fb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x418fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418fb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x418fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x418fb8: 0xc1073c8  jal         func_41CF20
    ctx->pc = 0x418FB8u;
    SET_GPR_U32(ctx, 31, 0x418FC0u);
    ctx->pc = 0x418FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418FB8u;
    // 0x418fbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF20u, 0x418FB8u, 0x418FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418FC0u;
label_418fc0:
    // 0x418fc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x418fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418fc4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x418fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x418fc8: 0xc1073c8  jal         func_41CF20
    ctx->pc = 0x418FC8u;
    SET_GPR_U32(ctx, 31, 0x418FD0u);
    ctx->pc = 0x418FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418FC8u;
    // 0x418fcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF20u, 0x418FC8u, 0x418FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418FD0u;
label_418fd0:
    // 0x418fd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x418fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x418fd4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x418fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x418fd8: 0xc1073c8  jal         func_41CF20
    ctx->pc = 0x418FD8u;
    SET_GPR_U32(ctx, 31, 0x418FE0u);
    ctx->pc = 0x418FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418FD8u;
    // 0x418fdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF20u, 0x418FD8u, 0x418FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418FE0u;
label_418fe0:
    // 0x418fe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x418fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x418fe4: 0xa24056e1  sb          $zero, 0x56E1($s2)
    ctx->pc = 0x418fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 22241), (uint8_t)GPR_U32(ctx, 0));
    // 0x418fe8: 0xa2420155  sb          $v0, 0x155($s2)
    ctx->pc = 0x418fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 341), (uint8_t)GPR_U32(ctx, 2));
    // 0x418fec: 0xa24256e3  sb          $v0, 0x56E3($s2)
    ctx->pc = 0x418fecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 22243), (uint8_t)GPR_U32(ctx, 2));
    // 0x418ff0: 0xa24256e2  sb          $v0, 0x56E2($s2)
    ctx->pc = 0x418ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 22242), (uint8_t)GPR_U32(ctx, 2));
    // 0x418ff4: 0xa24056e4  sb          $zero, 0x56E4($s2)
    ctx->pc = 0x418ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 22244), (uint8_t)GPR_U32(ctx, 0));
    // 0x418ff8: 0xa24256e5  sb          $v0, 0x56E5($s2)
    ctx->pc = 0x418ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 22245), (uint8_t)GPR_U32(ctx, 2));
    // 0x418ffc: 0xae425708  sw          $v0, 0x5708($s2)
    ctx->pc = 0x418ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 22280), GPR_U32(ctx, 2));
    // 0x419000: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x419000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x419004: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x419004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x419008: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x419008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x41900c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x41900cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x419010: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x419010u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x419014: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x419014u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x419018: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x419018u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41901c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x41901cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x419020: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x419020u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x419024: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x419024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x419028: 0x3e00008  jr          $ra
    ctx->pc = 0x419028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419028u;
        // 0x41902c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419030u;
}
