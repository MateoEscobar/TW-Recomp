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

// Function: sub_003F58F8
// Address: 0x3f58f8 - 0x3f5a68
void sub_003F58F8_0x3f58f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F58F8_0x3f58f8");
#endif

    switch (ctx->pc) {
        case 0x3f58f8u: goto label_3f58f8;
        case 0x3f58fcu: goto label_3f58fc;
        case 0x3f5900u: goto label_3f5900;
        case 0x3f5904u: goto label_3f5904;
        case 0x3f5908u: goto label_3f5908;
        case 0x3f590cu: goto label_3f590c;
        case 0x3f5910u: goto label_3f5910;
        case 0x3f5914u: goto label_3f5914;
        case 0x3f5918u: goto label_3f5918;
        case 0x3f591cu: goto label_3f591c;
        case 0x3f5920u: goto label_3f5920;
        case 0x3f5924u: goto label_3f5924;
        case 0x3f5928u: goto label_3f5928;
        case 0x3f592cu: goto label_3f592c;
        case 0x3f5930u: goto label_3f5930;
        case 0x3f5934u: goto label_3f5934;
        case 0x3f5938u: goto label_3f5938;
        case 0x3f593cu: goto label_3f593c;
        case 0x3f5940u: goto label_3f5940;
        case 0x3f5944u: goto label_3f5944;
        case 0x3f5948u: goto label_3f5948;
        case 0x3f594cu: goto label_3f594c;
        case 0x3f5950u: goto label_3f5950;
        case 0x3f5954u: goto label_3f5954;
        case 0x3f5958u: goto label_3f5958;
        case 0x3f595cu: goto label_3f595c;
        case 0x3f5960u: goto label_3f5960;
        case 0x3f5964u: goto label_3f5964;
        case 0x3f5968u: goto label_3f5968;
        case 0x3f596cu: goto label_3f596c;
        case 0x3f5970u: goto label_3f5970;
        case 0x3f5974u: goto label_3f5974;
        case 0x3f5978u: goto label_3f5978;
        case 0x3f597cu: goto label_3f597c;
        case 0x3f5980u: goto label_3f5980;
        case 0x3f5984u: goto label_3f5984;
        case 0x3f5988u: goto label_3f5988;
        case 0x3f598cu: goto label_3f598c;
        case 0x3f5990u: goto label_3f5990;
        case 0x3f5994u: goto label_3f5994;
        case 0x3f5998u: goto label_3f5998;
        case 0x3f599cu: goto label_3f599c;
        case 0x3f59a0u: goto label_3f59a0;
        case 0x3f59a4u: goto label_3f59a4;
        case 0x3f59a8u: goto label_3f59a8;
        case 0x3f59acu: goto label_3f59ac;
        case 0x3f59b0u: goto label_3f59b0;
        case 0x3f59b4u: goto label_3f59b4;
        case 0x3f59b8u: goto label_3f59b8;
        case 0x3f59bcu: goto label_3f59bc;
        case 0x3f59c0u: goto label_3f59c0;
        case 0x3f59c4u: goto label_3f59c4;
        case 0x3f59c8u: goto label_3f59c8;
        case 0x3f59ccu: goto label_3f59cc;
        case 0x3f59d0u: goto label_3f59d0;
        case 0x3f59d4u: goto label_3f59d4;
        case 0x3f59d8u: goto label_3f59d8;
        case 0x3f59dcu: goto label_3f59dc;
        case 0x3f59e0u: goto label_3f59e0;
        case 0x3f59e4u: goto label_3f59e4;
        case 0x3f59e8u: goto label_3f59e8;
        case 0x3f59ecu: goto label_3f59ec;
        case 0x3f59f0u: goto label_3f59f0;
        case 0x3f59f4u: goto label_3f59f4;
        case 0x3f59f8u: goto label_3f59f8;
        case 0x3f59fcu: goto label_3f59fc;
        case 0x3f5a00u: goto label_3f5a00;
        case 0x3f5a04u: goto label_3f5a04;
        case 0x3f5a08u: goto label_3f5a08;
        case 0x3f5a0cu: goto label_3f5a0c;
        case 0x3f5a10u: goto label_3f5a10;
        case 0x3f5a14u: goto label_3f5a14;
        case 0x3f5a18u: goto label_3f5a18;
        case 0x3f5a1cu: goto label_3f5a1c;
        case 0x3f5a20u: goto label_3f5a20;
        case 0x3f5a24u: goto label_3f5a24;
        case 0x3f5a28u: goto label_3f5a28;
        case 0x3f5a2cu: goto label_3f5a2c;
        case 0x3f5a30u: goto label_3f5a30;
        case 0x3f5a34u: goto label_3f5a34;
        case 0x3f5a38u: goto label_3f5a38;
        case 0x3f5a3cu: goto label_3f5a3c;
        case 0x3f5a40u: goto label_3f5a40;
        case 0x3f5a44u: goto label_3f5a44;
        case 0x3f5a48u: goto label_3f5a48;
        case 0x3f5a4cu: goto label_3f5a4c;
        case 0x3f5a50u: goto label_3f5a50;
        case 0x3f5a54u: goto label_3f5a54;
        case 0x3f5a58u: goto label_3f5a58;
        case 0x3f5a5cu: goto label_3f5a5c;
        case 0x3f5a60u: goto label_3f5a60;
        case 0x3f5a64u: goto label_3f5a64;
        default: break;
    }

    ctx->pc = 0x3f58f8u;

label_3f58f8:
    // 0x3f58f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3f58f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3f58fc:
    // 0x3f58fc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3f58fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3f5900:
    // 0x3f5900: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3f5900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3f5904:
    // 0x3f5904: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f5904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f5908:
    // 0x3f5908: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3f5908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3f590c:
    // 0x3f590c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f590cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f5910:
    // 0x3f5910: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3f5910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f5914:
    // 0x3f5914: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f5914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f5918:
    // 0x3f5918: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f5918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f591c:
    // 0x3f591c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f591cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f5920:
    // 0x3f5920: 0x40f809  jalr        $v0
label_3f5924:
    if (ctx->pc == 0x3F5924u) {
        ctx->pc = 0x3F5924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5920u;
        // 0x3f5924: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5928u;
        goto label_3f5928;
    }
    ctx->pc = 0x3F5920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F5928u);
        ctx->pc = 0x3F5924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5920u;
        // 0x3f5924: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5920u, 0x3F5928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F5928u;
label_3f5928:
    // 0x3f5928: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f5928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f592c:
    // 0x3f592c: 0xc0ea14c  jal         func_3A8530
label_3f5930:
    if (ctx->pc == 0x3F5930u) {
        ctx->pc = 0x3F5930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F592Cu;
        // 0x3f5930: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5934u;
        goto label_3f5934;
    }
    ctx->pc = 0x3F592Cu;
    SET_GPR_U32(ctx, 31, 0x3F5934u);
    ctx->pc = 0x3F5930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F592Cu;
    // 0x3f5930: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3F592Cu, 0x3F5934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5934u;
label_3f5934:
    // 0x3f5934: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x3f5934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_3f5938:
    // 0x3f5938: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f5938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f593c:
    // 0x3f593c: 0xc0ea12a  jal         func_3A84A8
label_3f5940:
    if (ctx->pc == 0x3F5940u) {
        ctx->pc = 0x3F5940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F593Cu;
        // 0x3f5940: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5944u;
        goto label_3f5944;
    }
    ctx->pc = 0x3F593Cu;
    SET_GPR_U32(ctx, 31, 0x3F5944u);
    ctx->pc = 0x3F5940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F593Cu;
    // 0x3f5940: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F593Cu, 0x3F5944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5944u;
label_3f5944:
    // 0x3f5944: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3f5944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f5948:
    // 0x3f5948: 0xc0ea12a  jal         func_3A84A8
label_3f594c:
    if (ctx->pc == 0x3F594Cu) {
        ctx->pc = 0x3F594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5948u;
        // 0x3f594c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5950u;
        goto label_3f5950;
    }
    ctx->pc = 0x3F5948u;
    SET_GPR_U32(ctx, 31, 0x3F5950u);
    ctx->pc = 0x3F594Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5948u;
    // 0x3f594c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F5948u, 0x3F5950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5950u;
label_3f5950:
    // 0x3f5950: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3f5950u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f5954:
    // 0x3f5954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f5954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f5958:
    // 0x3f5958: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3f5958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f595c:
    // 0x3f595c: 0xc0e858c  jal         func_3A1630
label_3f5960:
    if (ctx->pc == 0x3F5960u) {
        ctx->pc = 0x3F5960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F595Cu;
        // 0x3f5960: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5964u;
        goto label_3f5964;
    }
    ctx->pc = 0x3F595Cu;
    SET_GPR_U32(ctx, 31, 0x3F5964u);
    ctx->pc = 0x3F5960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F595Cu;
    // 0x3f5960: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F595Cu, 0x3F5964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5964u;
label_3f5964:
    // 0x3f5964: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3f5964u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f5968:
    // 0x3f5968: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x3f5968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_3f596c:
    // 0x3f596c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3f596cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3f5970:
    // 0x3f5970: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3f5970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3f5974:
    // 0x3f5974: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3f5974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f5978:
    // 0x3f5978: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3f5978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3f597c:
    // 0x3f597c: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3f597cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3f5980:
    // 0x3f5980: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3f5980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3f5984:
    // 0x3f5984: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3f5984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3f5988:
    // 0x3f5988: 0x60f809  jalr        $v1
label_3f598c:
    if (ctx->pc == 0x3F598Cu) {
        ctx->pc = 0x3F598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5988u;
        // 0x3f598c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5990u;
        goto label_3f5990;
    }
    ctx->pc = 0x3F5988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F5990u);
        ctx->pc = 0x3F598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5988u;
        // 0x3f598c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5988u, 0x3F5990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F5990u;
label_3f5990:
    // 0x3f5990: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f5990u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f5994:
    // 0x3f5994: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f5994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f5998:
    // 0x3f5998: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3f5998u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3f599c:
    // 0x3f599c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x3f599cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_3f59a0:
    // 0x3f59a0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3f59a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3f59a4:
    // 0x3f59a4: 0x40f809  jalr        $v0
label_3f59a8:
    if (ctx->pc == 0x3F59A8u) {
        ctx->pc = 0x3F59A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F59A4u;
        // 0x3f59a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F59ACu;
        goto label_3f59ac;
    }
    ctx->pc = 0x3F59A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F59ACu);
        ctx->pc = 0x3F59A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F59A4u;
        // 0x3f59a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F59A4u, 0x3F59ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F59ACu;
label_3f59ac:
    // 0x3f59ac: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_3f59b0:
    if (ctx->pc == 0x3F59B0u) {
        ctx->pc = 0x3F59B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F59ACu;
        // 0x3f59b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F59B4u;
        goto label_3f59b4;
    }
    ctx->pc = 0x3F59ACu;
    {
        const bool branch_taken_0x3f59ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f59ac) {
            ctx->pc = 0x3F59B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F59ACu;
            // 0x3f59b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F5A08u;
            goto label_3f5a08;
        }
    }
    ctx->pc = 0x3F59B4u;
label_3f59b4:
    // 0x3f59b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f59b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f59b8:
    // 0x3f59b8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x3f59b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_3f59bc:
    // 0x3f59bc: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3f59bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3f59c0:
    // 0x3f59c0: 0x40f809  jalr        $v0
label_3f59c4:
    if (ctx->pc == 0x3F59C4u) {
        ctx->pc = 0x3F59C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F59C0u;
        // 0x3f59c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F59C8u;
        goto label_3f59c8;
    }
    ctx->pc = 0x3F59C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F59C8u);
        ctx->pc = 0x3F59C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F59C0u;
        // 0x3f59c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F59C0u, 0x3F59C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F59C8u;
label_3f59c8:
    // 0x3f59c8: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x3f59c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3f59cc:
    // 0x3f59cc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3f59ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3f59d0:
    // 0x3f59d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3f59d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3f59d4:
    // 0x3f59d4: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x3f59d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_3f59d8:
    // 0x3f59d8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3f59d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f59dc:
    // 0x3f59dc: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x3f59dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_3f59e0:
    // 0x3f59e0: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x3f59e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_3f59e4:
    // 0x3f59e4: 0x40f809  jalr        $v0
label_3f59e8:
    if (ctx->pc == 0x3F59E8u) {
        ctx->pc = 0x3F59E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F59E4u;
        // 0x3f59e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F59ECu;
        goto label_3f59ec;
    }
    ctx->pc = 0x3F59E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F59ECu);
        ctx->pc = 0x3F59E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F59E4u;
        // 0x3f59e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F59E4u, 0x3F59ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F59ECu;
label_3f59ec:
    // 0x3f59ec: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3f59ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3f59f0:
    // 0x3f59f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f59f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f59f4:
    // 0x3f59f4: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x3f59f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_3f59f8:
    // 0x3f59f8: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x3f59f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3f59fc:
    // 0x3f59fc: 0xc0f809  jalr        $a2
label_3f5a00:
    if (ctx->pc == 0x3F5A00u) {
        ctx->pc = 0x3F5A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F59FCu;
        // 0x3f5a00: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5A04u;
        goto label_3f5a04;
    }
    ctx->pc = 0x3F59FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3F5A04u);
        ctx->pc = 0x3F5A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F59FCu;
        // 0x3f5a00: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F59FCu, 0x3F5A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F5A04u;
label_3f5a04:
    // 0x3f5a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f5a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f5a08:
    // 0x3f5a08: 0xc0e9132  jal         func_3A44C8
label_3f5a0c:
    if (ctx->pc == 0x3F5A0Cu) {
        ctx->pc = 0x3F5A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5A08u;
        // 0x3f5a0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5A10u;
        goto label_3f5a10;
    }
    ctx->pc = 0x3F5A08u;
    SET_GPR_U32(ctx, 31, 0x3F5A10u);
    ctx->pc = 0x3F5A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5A08u;
    // 0x3f5a0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3F5A08u, 0x3F5A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5A10u;
label_3f5a10:
    // 0x3f5a10: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3f5a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3f5a14:
    // 0x3f5a14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f5a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f5a18:
    // 0x3f5a18: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x3f5a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_3f5a1c:
    // 0x3f5a1c: 0x8e270030  lw          $a3, 0x30($s1)
    ctx->pc = 0x3f5a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3f5a20:
    // 0x3f5a20: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3f5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3f5a24:
    // 0x3f5a24: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3f5a24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3f5a28:
    // 0x3f5a28: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3f5a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3f5a2c:
    // 0x3f5a2c: 0x60f809  jalr        $v1
label_3f5a30:
    if (ctx->pc == 0x3F5A30u) {
        ctx->pc = 0x3F5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5A2Cu;
        // 0x3f5a30: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5A34u;
        goto label_3f5a34;
    }
    ctx->pc = 0x3F5A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F5A34u);
        ctx->pc = 0x3F5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5A2Cu;
        // 0x3f5a30: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5A2Cu, 0x3F5A34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F5A34u;
label_3f5a34:
    // 0x3f5a34: 0xc0ea140  jal         func_3A8500
label_3f5a38:
    if (ctx->pc == 0x3F5A38u) {
        ctx->pc = 0x3F5A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5A34u;
        // 0x3f5a38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5A3Cu;
        goto label_3f5a3c;
    }
    ctx->pc = 0x3F5A34u;
    SET_GPR_U32(ctx, 31, 0x3F5A3Cu);
    ctx->pc = 0x3F5A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F5A34u;
    // 0x3f5a38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8500u, 0x3F5A34u, 0x3F5A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F5A3Cu;
label_3f5a3c:
    // 0x3f5a3c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3f5a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3f5a40:
    // 0x3f5a40: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3f5a40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3f5a44:
    // 0x3f5a44: 0xa2230004  sb          $v1, 0x4($s1)
    ctx->pc = 0x3f5a44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 3));
label_3f5a48:
    // 0x3f5a48: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x3f5a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_3f5a4c:
    // 0x3f5a4c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3f5a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_3f5a50:
    // 0x3f5a50: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3f5a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f5a54:
    // 0x3f5a54: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3f5a54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f5a58:
    // 0x3f5a58: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3f5a58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f5a5c:
    // 0x3f5a5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f5a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f5a60:
    // 0x3f5a60: 0x3e00008  jr          $ra
label_3f5a64:
    if (ctx->pc == 0x3F5A64u) {
        ctx->pc = 0x3F5A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5A60u;
        // 0x3f5a64: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F5A68u;
        goto label_fallthrough_0x3f5a60;
    }
    ctx->pc = 0x3F5A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F5A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5A60u;
        // 0x3f5a64: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f5a60:
    ctx->pc = 0x3F5A68u;
}
