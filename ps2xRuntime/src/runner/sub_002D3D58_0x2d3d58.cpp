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

// Function: sub_002D3D58
// Address: 0x2d3d58 - 0x2d4138
void sub_002D3D58_0x2d3d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3D58_0x2d3d58");
#endif

    switch (ctx->pc) {
        case 0x2d3da4u: goto label_2d3da4;
        case 0x2d3dd0u: goto label_2d3dd0;
        case 0x2d3df8u: goto label_2d3df8;
        case 0x2d3e04u: goto label_2d3e04;
        case 0x2d3e28u: goto label_2d3e28;
        case 0x2d3e3cu: goto label_2d3e3c;
        case 0x2d3e70u: goto label_2d3e70;
        case 0x2d3e88u: goto label_2d3e88;
        case 0x2d3e94u: goto label_2d3e94;
        case 0x2d3ea8u: goto label_2d3ea8;
        case 0x2d3eb4u: goto label_2d3eb4;
        case 0x2d3ec0u: goto label_2d3ec0;
        case 0x2d3ee8u: goto label_2d3ee8;
        case 0x2d3efcu: goto label_2d3efc;
        case 0x2d3f08u: goto label_2d3f08;
        case 0x2d3f20u: goto label_2d3f20;
        case 0x2d3f50u: goto label_2d3f50;
        case 0x2d3f78u: goto label_2d3f78;
        case 0x2d3fc0u: goto label_2d3fc0;
        case 0x2d3fe8u: goto label_2d3fe8;
        case 0x2d4030u: goto label_2d4030;
        case 0x2d406cu: goto label_2d406c;
        case 0x2d4078u: goto label_2d4078;
        case 0x2d40bcu: goto label_2d40bc;
        case 0x2d40e4u: goto label_2d40e4;
        default: break;
    }

    ctx->pc = 0x2d3d58u;

    // 0x2d3d58: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d3d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d3d5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2d3d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2d3d60: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2d3d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2d3d64: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2d3d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2d3d68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d3d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d6c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2d3d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2d3d70: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2d3d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2d3d74: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2d3d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2d3d78: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2d3d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2d3d7c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2d3d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2d3d80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d3d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d3d84: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x2d3d84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2d3d88: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2d3d88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2d3d8c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2d3d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x2d3d90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d3d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d3d94: 0x8c960048  lw          $s6, 0x48($a0)
    ctx->pc = 0x2d3d94u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2d3d98: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x2d3d98u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d3d9c: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2D3D9Cu;
    SET_GPR_U32(ctx, 31, 0x2D3DA4u);
    ctx->pc = 0x2D3DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3D9Cu;
    // 0x2d3da0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2D3D9Cu, 0x2D3DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3DA4u;
label_2d3da4:
    // 0x2d3da4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d3da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3da8: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3DA8u;
    {
        const bool branch_taken_0x2d3da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d3da8) {
            ctx->pc = 0x2D3DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3DA8u;
            // 0x2d3dac: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3DB8u;
            goto label_2d3db8;
        }
    }
    ctx->pc = 0x2D3DB0u;
    // 0x2d3db0: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x2D3DB0u;
    {
        const bool branch_taken_0x2d3db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3DB0u;
        // 0x2d3db4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3db0) {
            ctx->pc = 0x2D4104u;
            goto label_2d4104;
        }
    }
    ctx->pc = 0x2D3DB8u;
label_2d3db8:
    // 0x2d3db8: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2d3db8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2d3dbc: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2d3dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d3dc0: 0x104400d0  beq         $v0, $a0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x2D3DC0u;
    {
        const bool branch_taken_0x2d3dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2D3DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3DC0u;
        // 0x2d3dc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3dc0) {
            ctx->pc = 0x2D4104u;
            goto label_2d4104;
        }
    }
    ctx->pc = 0x2D3DC8u;
    // 0x2d3dc8: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x2D3DC8u;
    SET_GPR_U32(ctx, 31, 0x2D3DD0u);
    ctx->pc = 0x2D3DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3DC8u;
    // 0x2d3dcc: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2D3DC8u, 0x2D3DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3DD0u;
label_2d3dd0:
    // 0x2d3dd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d3dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3dd4: 0x12400054  beqz        $s2, . + 4 + (0x54 << 2)
    ctx->pc = 0x2D3DD4u;
    {
        const bool branch_taken_0x2d3dd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3DD4u;
        // 0x2d3dd8: 0x26740090  addiu       $s4, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3dd4) {
            ctx->pc = 0x2D3F28u;
            goto label_2d3f28;
        }
    }
    ctx->pc = 0x2D3DDCu;
    // 0x2d3ddc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2d3ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2d3de0: 0x86900002  lh          $s0, 0x2($s4)
    ctx->pc = 0x2d3de0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2d3de4: 0x24554b00  addiu       $s5, $v0, 0x4B00
    ctx->pc = 0x2d3de4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2d3de8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d3de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3dec: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2d3decu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2d3df0: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2D3DF0u;
    SET_GPR_U32(ctx, 31, 0x2D3DF8u);
    ctx->pc = 0x2D3DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3DF0u;
    // 0x2d3df4: 0x2158021  addu        $s0, $s0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2D3DF0u, 0x2D3DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3DF8u;
label_2d3df8:
    // 0x2d3df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d3df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3dfc: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2D3DFCu;
    SET_GPR_U32(ctx, 31, 0x2D3E04u);
    ctx->pc = 0x2D3E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3DFCu;
    // 0x2d3e00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2D3DFCu, 0x2D3E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E04u;
label_2d3e04:
    // 0x2d3e04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d3e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d3e08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d3e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d3e0c: 0x0  nop
    ctx->pc = 0x2d3e0cu;
    // NOP
    // 0x2d3e10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d3e10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3e14: 0x0  nop
    ctx->pc = 0x2d3e14u;
    // NOP
    // 0x2d3e18: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x2D3E18u;
    {
        const bool branch_taken_0x2d3e18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3e18) {
            ctx->pc = 0x2D3E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3E18u;
            // 0x2d3e1c: 0x86840002  lh          $a0, 0x2($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3E78u;
            goto label_2d3e78;
        }
    }
    ctx->pc = 0x2D3E20u;
    // 0x2d3e20: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D3E20u;
    SET_GPR_U32(ctx, 31, 0x2D3E28u);
    ctx->pc = 0x2D3E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3E20u;
    // 0x2d3e24: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D3E20u, 0x2D3E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E28u;
label_2d3e28:
    // 0x2d3e28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e2c: 0x120000b5  beqz        $s0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x2D3E2Cu;
    {
        const bool branch_taken_0x2d3e2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3E2Cu;
        // 0x2d3e30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e2c) {
            ctx->pc = 0x2D4104u;
            goto label_2d4104;
        }
    }
    ctx->pc = 0x2D3E34u;
    // 0x2d3e34: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2D3E34u;
    SET_GPR_U32(ctx, 31, 0x2D3E3Cu);
    ctx->pc = 0x2D3E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3E34u;
    // 0x2d3e38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2D3E34u, 0x2D3E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E3Cu;
label_2d3e3c:
    // 0x2d3e3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2d3e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2d3e40: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d3e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d3e44: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2d3e44u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2d3e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d3e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e4c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2d3e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2d3e50: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2d3e50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2d3e54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d3e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d3e58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d3e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e5c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2d3e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d3e60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d3e60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d3e64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e68: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2D3E68u;
    SET_GPR_U32(ctx, 31, 0x2D3E70u);
    ctx->pc = 0x2D3E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3E68u;
    // 0x2d3e6c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2D3E68u, 0x2D3E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E70u;
label_2d3e70:
    // 0x2d3e70: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x2D3E70u;
    {
        const bool branch_taken_0x2d3e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3E70u;
        // 0x2d3e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e70) {
            ctx->pc = 0x2D4104u;
            goto label_2d4104;
        }
    }
    ctx->pc = 0x2D3E78u;
label_2d3e78:
    // 0x2d3e78: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d3e78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2d3e7c: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x2d3e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x2d3e80: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2D3E80u;
    SET_GPR_U32(ctx, 31, 0x2D3E88u);
    ctx->pc = 0x2D3E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3E80u;
    // 0x2d3e84: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2D3E80u, 0x2D3E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E88u;
label_2d3e88:
    // 0x2d3e88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d3e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e8c: 0xc105896  jal         func_416258
    ctx->pc = 0x2D3E8Cu;
    SET_GPR_U32(ctx, 31, 0x2D3E94u);
    ctx->pc = 0x2D3E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3E8Cu;
    // 0x2d3e90: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x416258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416258u, 0x2D3E8Cu, 0x2D3E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E94u;
label_2d3e94:
    // 0x2d3e94: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2d3e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2d3e98: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2d3e98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x2d3e9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d3e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d3ea0: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x2D3EA0u;
    SET_GPR_U32(ctx, 31, 0x2D3EA8u);
    ctx->pc = 0x2D3EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3EA0u;
    // 0x2d3ea4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2D3EA0u, 0x2D3EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3EA8u;
label_2d3ea8:
    // 0x2d3ea8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2d3ea8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2d3eac: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x2D3EACu;
    SET_GPR_U32(ctx, 31, 0x2D3EB4u);
    ctx->pc = 0x2D3EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3EACu;
    // 0x2d3eb0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2D3EACu, 0x2D3EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3EB4u;
label_2d3eb4:
    // 0x2d3eb4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2d3eb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2d3eb8: 0xc0cdd2e  jal         func_3374B8
    ctx->pc = 0x2D3EB8u;
    SET_GPR_U32(ctx, 31, 0x2D3EC0u);
    ctx->pc = 0x2D3EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3EB8u;
    // 0x2d3ebc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2D3EB8u, 0x2D3EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3EC0u;
label_2d3ec0:
    // 0x2d3ec0: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2d3ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x2d3ec4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2d3ec4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2d3ec8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d3ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d3ecc: 0x0  nop
    ctx->pc = 0x2d3eccu;
    // NOP
    // 0x2d3ed0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d3ed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3ed4: 0x0  nop
    ctx->pc = 0x2d3ed4u;
    // NOP
    // 0x2d3ed8: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x2D3ED8u;
    {
        const bool branch_taken_0x2d3ed8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3ed8) {
            ctx->pc = 0x2D3EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3ED8u;
            // 0x2d3edc: 0x92320024  lbu         $s2, 0x24($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3F2Cu;
            goto label_2d3f2c;
        }
    }
    ctx->pc = 0x2D3EE0u;
    // 0x2d3ee0: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D3EE0u;
    SET_GPR_U32(ctx, 31, 0x2D3EE8u);
    ctx->pc = 0x2D3EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3EE0u;
    // 0x2d3ee4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D3EE0u, 0x2D3EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3EE8u;
label_2d3ee8:
    // 0x2d3ee8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3eec: 0x12000085  beqz        $s0, . + 4 + (0x85 << 2)
    ctx->pc = 0x2D3EECu;
    {
        const bool branch_taken_0x2d3eec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3EECu;
        // 0x2d3ef0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3eec) {
            ctx->pc = 0x2D4104u;
            goto label_2d4104;
        }
    }
    ctx->pc = 0x2D3EF4u;
    // 0x2d3ef4: 0xc105896  jal         func_416258
    ctx->pc = 0x2D3EF4u;
    SET_GPR_U32(ctx, 31, 0x2D3EFCu);
    ctx->pc = 0x2D3EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3EF4u;
    // 0x2d3ef8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416258u, 0x2D3EF4u, 0x2D3EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3EFCu;
label_2d3efc:
    // 0x2d3efc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2d3efcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2d3f00: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2D3F00u;
    SET_GPR_U32(ctx, 31, 0x2D3F08u);
    ctx->pc = 0x2D3F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3F00u;
    // 0x2d3f04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2D3F00u, 0x2D3F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F08u;
label_2d3f08:
    // 0x2d3f08: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d3f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d3f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d3f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3f10: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d3f10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d3f14: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2d3f14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x2d3f18: 0xc0bf70a  jal         func_2FDC28
    ctx->pc = 0x2D3F18u;
    SET_GPR_U32(ctx, 31, 0x2D3F20u);
    ctx->pc = 0x2D3F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3F18u;
    // 0x2d3f1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC28u, 0x2D3F18u, 0x2D3F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F20u;
label_2d3f20:
    // 0x2d3f20: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x2D3F20u;
    {
        const bool branch_taken_0x2d3f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3F20u;
        // 0x2d3f24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f20) {
            ctx->pc = 0x2D4104u;
            goto label_2d4104;
        }
    }
    ctx->pc = 0x2D3F28u;
label_2d3f28:
    // 0x2d3f28: 0x92320024  lbu         $s2, 0x24($s1)
    ctx->pc = 0x2d3f28u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
label_2d3f2c:
    // 0x2d3f2c: 0x16400036  bnez        $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x2D3F2Cu;
    {
        const bool branch_taken_0x2d3f2c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3F2Cu;
        // 0x2d3f30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f2c) {
            ctx->pc = 0x2D4008u;
            goto label_2d4008;
        }
    }
    ctx->pc = 0x2D3F34u;
    // 0x2d3f34: 0x92220025  lbu         $v0, 0x25($s1)
    ctx->pc = 0x2d3f34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 37)));
    // 0x2d3f38: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D3F38u;
    {
        const bool branch_taken_0x2d3f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3F38u;
        // 0x2d3f3c: 0x8e620488  lw          $v0, 0x488($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f38) {
            ctx->pc = 0x2D3F80u;
            goto label_2d3f80;
        }
    }
    ctx->pc = 0x2D3F40u;
    // 0x2d3f40: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x2D3F40u;
    {
        const bool branch_taken_0x2d3f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3F40u;
        // 0x2d3f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f40) {
            ctx->pc = 0x2D4104u;
            goto label_2d4104;
        }
    }
    ctx->pc = 0x2D3F48u;
    // 0x2d3f48: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D3F48u;
    SET_GPR_U32(ctx, 31, 0x2D3F50u);
    ctx->pc = 0x2D3F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3F48u;
    // 0x2d3f4c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D3F48u, 0x2D3F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F50u;
label_2d3f50:
    // 0x2d3f50: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D3F50u;
    {
        const bool branch_taken_0x2d3f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3F50u;
        // 0x2d3f54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f50) {
            ctx->pc = 0x2D3FE8u;
            goto label_2d3fe8;
        }
    }
    ctx->pc = 0x2D3F58u;
    // 0x2d3f58: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d3f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d3f5c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2d3f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2d3f60: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d3f60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d3f64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d3f64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d3f68: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2d3f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2d3f6c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2d3f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d3f70: 0xc0be91a  jal         func_2FA468
    ctx->pc = 0x2D3F70u;
    SET_GPR_U32(ctx, 31, 0x2D3F78u);
    ctx->pc = 0x2D3F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3F70u;
    // 0x2d3f74: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA468u, 0x2D3F70u, 0x2D3F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F78u;
label_2d3f78:
    // 0x2d3f78: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2D3F78u;
    {
        const bool branch_taken_0x2d3f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3f78) {
            ctx->pc = 0x2D3FE8u;
            goto label_2d3fe8;
        }
    }
    ctx->pc = 0x2D3F80u;
label_2d3f80:
    // 0x2d3f80: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2d3f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2d3f84: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3F84u;
    {
        const bool branch_taken_0x2d3f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3F84u;
        // 0x2d3f88: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f84) {
            ctx->pc = 0x2D3F98u;
            goto label_2d3f98;
        }
    }
    ctx->pc = 0x2D3F8Cu;
    // 0x2d3f8c: 0x8e6204b0  lw          $v0, 0x4B0($s3)
    ctx->pc = 0x2d3f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1200)));
    // 0x2d3f90: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d3f90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d3f94: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x2d3f94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_2d3f98:
    // 0x2d3f98: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2d3f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2d3f9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3F9Cu;
    {
        const bool branch_taken_0x2d3f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3f9c) {
            ctx->pc = 0x2D3FB0u;
            goto label_2d3fb0;
        }
    }
    ctx->pc = 0x2D3FA4u;
    // 0x2d3fa4: 0x8e6204d8  lw          $v0, 0x4D8($s3)
    ctx->pc = 0x2d3fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1240)));
    // 0x2d3fa8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d3fa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d3fac: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x2d3facu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_2d3fb0:
    // 0x2d3fb0: 0x10a00054  beqz        $a1, . + 4 + (0x54 << 2)
    ctx->pc = 0x2D3FB0u;
    {
        const bool branch_taken_0x2d3fb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3FB0u;
        // 0x2d3fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3fb0) {
            ctx->pc = 0x2D4104u;
            goto label_2d4104;
        }
    }
    ctx->pc = 0x2D3FB8u;
    // 0x2d3fb8: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D3FB8u;
    SET_GPR_U32(ctx, 31, 0x2D3FC0u);
    ctx->pc = 0x2D3FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3FB8u;
    // 0x2d3fbc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D3FB8u, 0x2D3FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3FC0u;
label_2d3fc0:
    // 0x2d3fc0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D3FC0u;
    {
        const bool branch_taken_0x2d3fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3FC0u;
        // 0x2d3fc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3fc0) {
            ctx->pc = 0x2D3FE8u;
            goto label_2d3fe8;
        }
    }
    ctx->pc = 0x2D3FC8u;
    // 0x2d3fc8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d3fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d3fcc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2d3fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2d3fd0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d3fd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d3fd4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d3fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d3fd8: 0x2406029f  addiu       $a2, $zero, 0x29F
    ctx->pc = 0x2d3fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
    // 0x2d3fdc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2d3fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d3fe0: 0xc0be91a  jal         func_2FA468
    ctx->pc = 0x2D3FE0u;
    SET_GPR_U32(ctx, 31, 0x2D3FE8u);
    ctx->pc = 0x2D3FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3FE0u;
    // 0x2d3fe4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA468u, 0x2D3FE0u, 0x2D3FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3FE8u;
label_2d3fe8:
    // 0x2d3fe8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d3fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d3fec: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2d3fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2d3ff0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d3ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d3ff4: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3FF4u;
    {
        const bool branch_taken_0x2d3ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D3FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3FF4u;
        // 0x2d3ff8: 0x761021  addu        $v0, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ff4) {
            ctx->pc = 0x2D4000u;
            goto label_2d4000;
        }
    }
    ctx->pc = 0x2D3FFCu;
    // 0x2d3ffc: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2d3ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2d4000:
    // 0x2d4000: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2D4000u;
    {
        const bool branch_taken_0x2d4000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4000u;
        // 0x2d4004: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4000) {
            ctx->pc = 0x2D40FCu;
            goto label_2d40fc;
        }
    }
    ctx->pc = 0x2D4008u;
label_2d4008:
    // 0x2d4008: 0x16420025  bne         $s2, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D4008u;
    {
        const bool branch_taken_0x2d4008 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4008u;
        // 0x2d400c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4008) {
            ctx->pc = 0x2D40A0u;
            goto label_2d40a0;
        }
    }
    ctx->pc = 0x2D4010u;
    // 0x2d4010: 0x92220026  lbu         $v0, 0x26($s1)
    ctx->pc = 0x2d4010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x2d4014: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D4014u;
    {
        const bool branch_taken_0x2d4014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4014) {
            ctx->pc = 0x2D407Cu;
            goto label_2d407c;
        }
    }
    ctx->pc = 0x2D401Cu;
    // 0x2d401c: 0x8e6400d8  lw          $a0, 0xD8($s3)
    ctx->pc = 0x2d401cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x2d4020: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D4020u;
    {
        const bool branch_taken_0x2d4020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4020) {
            ctx->pc = 0x2D407Cu;
            goto label_2d407c;
        }
    }
    ctx->pc = 0x2D4028u;
    // 0x2d4028: 0xc05d462  jal         func_175188
    ctx->pc = 0x2D4028u;
    SET_GPR_U32(ctx, 31, 0x2D4030u);
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x2D4028u, 0x2D4030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4030u;
label_2d4030:
    // 0x2d4030: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d4030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4034: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D4034u;
    {
        const bool branch_taken_0x2d4034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4034) {
            ctx->pc = 0x2D407Cu;
            goto label_2d407c;
        }
    }
    ctx->pc = 0x2D403Cu;
    // 0x2d403c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2d403cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2d4040: 0x10720003  beq         $v1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4040u;
    {
        const bool branch_taken_0x2d4040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2D4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4040u;
        // 0x2d4044: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4040) {
            ctx->pc = 0x2D4050u;
            goto label_2d4050;
        }
    }
    ctx->pc = 0x2D4048u;
    // 0x2d4048: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D4048u;
    {
        const bool branch_taken_0x2d4048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d4048) {
            ctx->pc = 0x2D407Cu;
            goto label_2d407c;
        }
    }
    ctx->pc = 0x2D4050u;
label_2d4050:
    // 0x2d4050: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2d4050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2d4054: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d4054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d4058: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2d4058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2d405c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d405cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d4060: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2d4060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d4064: 0xc0cd508  jal         func_335420
    ctx->pc = 0x2D4064u;
    SET_GPR_U32(ctx, 31, 0x2D406Cu);
    ctx->pc = 0x2D4068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4064u;
    // 0x2d4068: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2D4064u, 0x2D406Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D406Cu;
label_2d406c:
    // 0x2d406c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d406cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4070: 0xc0420f4  jal         func_1083D0
    ctx->pc = 0x2D4070u;
    SET_GPR_U32(ctx, 31, 0x2D4078u);
    ctx->pc = 0x2D4074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4070u;
    // 0x2d4074: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1083D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1083D0u, 0x2D4070u, 0x2D4078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4078u;
label_2d4078:
    // 0x2d4078: 0xa2320026  sb          $s2, 0x26($s1)
    ctx->pc = 0x2d4078u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 38), (uint8_t)GPR_U32(ctx, 18));
label_2d407c:
    // 0x2d407c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d407cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d4080: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2d4080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2d4084: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d4084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d4088: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D4088u;
    {
        const bool branch_taken_0x2d4088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4088u;
        // 0x2d408c: 0x76102b  sltu        $v0, $v1, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4088) {
            ctx->pc = 0x2D40F4u;
            goto label_2d40f4;
        }
    }
    ctx->pc = 0x2D4090u;
    // 0x2d4090: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D4090u;
    {
        const bool branch_taken_0x2d4090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4090u;
        // 0x2d4094: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4090) {
            ctx->pc = 0x2D40F4u;
            goto label_2d40f4;
        }
    }
    ctx->pc = 0x2D4098u;
    // 0x2d4098: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2D4098u;
    {
        const bool branch_taken_0x2d4098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4098u;
        // 0x2d409c: 0xa2220024  sb          $v0, 0x24($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4098) {
            ctx->pc = 0x2D40F4u;
            goto label_2d40f4;
        }
    }
    ctx->pc = 0x2D40A0u;
label_2d40a0:
    // 0x2d40a0: 0x16420012  bne         $s2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D40A0u;
    {
        const bool branch_taken_0x2d40a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D40A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D40A0u;
        // 0x2d40a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d40a0) {
            ctx->pc = 0x2D40ECu;
            goto label_2d40ec;
        }
    }
    ctx->pc = 0x2D40A8u;
    // 0x2d40a8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2d40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2d40ac: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D40ACu;
    {
        const bool branch_taken_0x2d40ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D40B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D40ACu;
        // 0x2d40b0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d40ac) {
            ctx->pc = 0x2D40FCu;
            goto label_2d40fc;
        }
    }
    ctx->pc = 0x2D40B4u;
    // 0x2d40b4: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2D40B4u;
    SET_GPR_U32(ctx, 31, 0x2D40BCu);
    ctx->pc = 0x2D40B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D40B4u;
    // 0x2d40b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D40B4u, 0x2D40BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D40BCu;
label_2d40bc:
    // 0x2d40bc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D40BCu;
    {
        const bool branch_taken_0x2d40bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D40C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D40BCu;
        // 0x2d40c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d40bc) {
            ctx->pc = 0x2D40E4u;
            goto label_2d40e4;
        }
    }
    ctx->pc = 0x2D40C4u;
    // 0x2d40c4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d40c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d40c8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2d40c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2d40cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d40ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d40d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d40d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d40d4: 0x240602a1  addiu       $a2, $zero, 0x2A1
    ctx->pc = 0x2d40d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    // 0x2d40d8: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2d40d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2d40dc: 0xc0be8c0  jal         func_2FA300
    ctx->pc = 0x2D40DCu;
    SET_GPR_U32(ctx, 31, 0x2D40E4u);
    ctx->pc = 0x2D40E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D40DCu;
    // 0x2d40e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA300u, 0x2D40DCu, 0x2D40E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D40E4u;
label_2d40e4:
    // 0x2d40e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D40E4u;
    {
        const bool branch_taken_0x2d40e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D40E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D40E4u;
        // 0x2d40e8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d40e4) {
            ctx->pc = 0x2D40FCu;
            goto label_2d40fc;
        }
    }
    ctx->pc = 0x2D40ECu;
label_2d40ec:
    // 0x2d40ec: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D40ECu;
    {
        const bool branch_taken_0x2d40ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D40F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D40ECu;
        // 0x2d40f0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d40ec) {
            ctx->pc = 0x2D40FCu;
            goto label_2d40fc;
        }
    }
    ctx->pc = 0x2D40F4u;
label_2d40f4:
    // 0x2d40f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D40F4u;
    {
        const bool branch_taken_0x2d40f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D40F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D40F4u;
        // 0x2d40f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d40f4) {
            ctx->pc = 0x2D4104u;
            goto label_2d4104;
        }
    }
    ctx->pc = 0x2D40FCu;
label_2d40fc:
    // 0x2d40fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d40fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4100: 0xa2230024  sb          $v1, 0x24($s1)
    ctx->pc = 0x2d4100u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 3));
label_2d4104:
    // 0x2d4104: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2d4104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d4108: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2d4108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d410c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2d410cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4110: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2d4110u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d4114: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2d4114u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4118: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2d4118u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d411c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2d411cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d4120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4124: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2d4124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d4128: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2d4128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d412c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D412Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D412Cu;
        // 0x2d4130: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D412Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4134u;
    // 0x2d4134: 0x0  nop
    ctx->pc = 0x2d4134u;
    // NOP
    ctx->pc = 0x2d4138u;
}
