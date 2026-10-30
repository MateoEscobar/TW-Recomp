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

// Function: sub_003EC8F8
// Address: 0x3ec8f8 - 0x3eca88
void sub_003EC8F8_0x3ec8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC8F8_0x3ec8f8");
#endif

    switch (ctx->pc) {
        case 0x3ec8f8u: goto label_3ec8f8;
        case 0x3ec8fcu: goto label_3ec8fc;
        case 0x3ec900u: goto label_3ec900;
        case 0x3ec904u: goto label_3ec904;
        case 0x3ec908u: goto label_3ec908;
        case 0x3ec90cu: goto label_3ec90c;
        case 0x3ec910u: goto label_3ec910;
        case 0x3ec914u: goto label_3ec914;
        case 0x3ec918u: goto label_3ec918;
        case 0x3ec91cu: goto label_3ec91c;
        case 0x3ec920u: goto label_3ec920;
        case 0x3ec924u: goto label_3ec924;
        case 0x3ec928u: goto label_3ec928;
        case 0x3ec92cu: goto label_3ec92c;
        case 0x3ec930u: goto label_3ec930;
        case 0x3ec934u: goto label_3ec934;
        case 0x3ec938u: goto label_3ec938;
        case 0x3ec93cu: goto label_3ec93c;
        case 0x3ec940u: goto label_3ec940;
        case 0x3ec944u: goto label_3ec944;
        case 0x3ec948u: goto label_3ec948;
        case 0x3ec94cu: goto label_3ec94c;
        case 0x3ec950u: goto label_3ec950;
        case 0x3ec954u: goto label_3ec954;
        case 0x3ec958u: goto label_3ec958;
        case 0x3ec95cu: goto label_3ec95c;
        case 0x3ec960u: goto label_3ec960;
        case 0x3ec964u: goto label_3ec964;
        case 0x3ec968u: goto label_3ec968;
        case 0x3ec96cu: goto label_3ec96c;
        case 0x3ec970u: goto label_3ec970;
        case 0x3ec974u: goto label_3ec974;
        case 0x3ec978u: goto label_3ec978;
        case 0x3ec97cu: goto label_3ec97c;
        case 0x3ec980u: goto label_3ec980;
        case 0x3ec984u: goto label_3ec984;
        case 0x3ec988u: goto label_3ec988;
        case 0x3ec98cu: goto label_3ec98c;
        case 0x3ec990u: goto label_3ec990;
        case 0x3ec994u: goto label_3ec994;
        case 0x3ec998u: goto label_3ec998;
        case 0x3ec99cu: goto label_3ec99c;
        case 0x3ec9a0u: goto label_3ec9a0;
        case 0x3ec9a4u: goto label_3ec9a4;
        case 0x3ec9a8u: goto label_3ec9a8;
        case 0x3ec9acu: goto label_3ec9ac;
        case 0x3ec9b0u: goto label_3ec9b0;
        case 0x3ec9b4u: goto label_3ec9b4;
        case 0x3ec9b8u: goto label_3ec9b8;
        case 0x3ec9bcu: goto label_3ec9bc;
        case 0x3ec9c0u: goto label_3ec9c0;
        case 0x3ec9c4u: goto label_3ec9c4;
        case 0x3ec9c8u: goto label_3ec9c8;
        case 0x3ec9ccu: goto label_3ec9cc;
        case 0x3ec9d0u: goto label_3ec9d0;
        case 0x3ec9d4u: goto label_3ec9d4;
        case 0x3ec9d8u: goto label_3ec9d8;
        case 0x3ec9dcu: goto label_3ec9dc;
        case 0x3ec9e0u: goto label_3ec9e0;
        case 0x3ec9e4u: goto label_3ec9e4;
        case 0x3ec9e8u: goto label_3ec9e8;
        case 0x3ec9ecu: goto label_3ec9ec;
        case 0x3ec9f0u: goto label_3ec9f0;
        case 0x3ec9f4u: goto label_3ec9f4;
        case 0x3ec9f8u: goto label_3ec9f8;
        case 0x3ec9fcu: goto label_3ec9fc;
        case 0x3eca00u: goto label_3eca00;
        case 0x3eca04u: goto label_3eca04;
        case 0x3eca08u: goto label_3eca08;
        case 0x3eca0cu: goto label_3eca0c;
        case 0x3eca10u: goto label_3eca10;
        case 0x3eca14u: goto label_3eca14;
        case 0x3eca18u: goto label_3eca18;
        case 0x3eca1cu: goto label_3eca1c;
        case 0x3eca20u: goto label_3eca20;
        case 0x3eca24u: goto label_3eca24;
        case 0x3eca28u: goto label_3eca28;
        case 0x3eca2cu: goto label_3eca2c;
        case 0x3eca30u: goto label_3eca30;
        case 0x3eca34u: goto label_3eca34;
        case 0x3eca38u: goto label_3eca38;
        case 0x3eca3cu: goto label_3eca3c;
        case 0x3eca40u: goto label_3eca40;
        case 0x3eca44u: goto label_3eca44;
        case 0x3eca48u: goto label_3eca48;
        case 0x3eca4cu: goto label_3eca4c;
        case 0x3eca50u: goto label_3eca50;
        case 0x3eca54u: goto label_3eca54;
        case 0x3eca58u: goto label_3eca58;
        case 0x3eca5cu: goto label_3eca5c;
        case 0x3eca60u: goto label_3eca60;
        case 0x3eca64u: goto label_3eca64;
        case 0x3eca68u: goto label_3eca68;
        case 0x3eca6cu: goto label_3eca6c;
        case 0x3eca70u: goto label_3eca70;
        case 0x3eca74u: goto label_3eca74;
        case 0x3eca78u: goto label_3eca78;
        case 0x3eca7cu: goto label_3eca7c;
        case 0x3eca80u: goto label_3eca80;
        case 0x3eca84u: goto label_3eca84;
        default: break;
    }

    ctx->pc = 0x3ec8f8u;

label_3ec8f8:
    // 0x3ec8f8: 0x27bdfb10  addiu       $sp, $sp, -0x4F0
    ctx->pc = 0x3ec8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966032));
label_3ec8fc:
    // 0x3ec8fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3ec8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ec900:
    // 0x3ec900: 0x7fb004d0  sq          $s0, 0x4D0($sp)
    ctx->pc = 0x3ec900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 16));
label_3ec904:
    // 0x3ec904: 0x7fb40490  sq          $s4, 0x490($sp)
    ctx->pc = 0x3ec904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 20));
label_3ec908:
    // 0x3ec908: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ec908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ec90c:
    // 0x3ec90c: 0x7fb50480  sq          $s5, 0x480($sp)
    ctx->pc = 0x3ec90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 21));
label_3ec910:
    // 0x3ec910: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x3ec910u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ec914:
    // 0x3ec914: 0x7fbe0450  sq          $fp, 0x450($sp)
    ctx->pc = 0x3ec914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 30));
label_3ec918:
    // 0x3ec918: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x3ec918u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ec91c:
    // 0x3ec91c: 0xe7b404e0  swc1        $f20, 0x4E0($sp)
    ctx->pc = 0x3ec91cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1248), bits); }
label_3ec920:
    // 0x3ec920: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x3ec920u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_3ec924:
    // 0x3ec924: 0x7fb104c0  sq          $s1, 0x4C0($sp)
    ctx->pc = 0x3ec924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 17));
label_3ec928:
    // 0x3ec928: 0x7fb204b0  sq          $s2, 0x4B0($sp)
    ctx->pc = 0x3ec928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 18));
label_3ec92c:
    // 0x3ec92c: 0x7fb304a0  sq          $s3, 0x4A0($sp)
    ctx->pc = 0x3ec92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 19));
label_3ec930:
    // 0x3ec930: 0x7fb60470  sq          $s6, 0x470($sp)
    ctx->pc = 0x3ec930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 22));
label_3ec934:
    // 0x3ec934: 0x7fb70460  sq          $s7, 0x460($sp)
    ctx->pc = 0x3ec934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 23));
label_3ec938:
    // 0x3ec938: 0xffbf0440  sd          $ra, 0x440($sp)
    ctx->pc = 0x3ec938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 31));
label_3ec93c:
    // 0x3ec93c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x3ec93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_3ec940:
    // 0x3ec940: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3ec940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3ec944:
    // 0x3ec944: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3ec944u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_3ec948:
    // 0x3ec948: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3ec948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3ec94c:
    // 0x3ec94c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3ec94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3ec950:
    // 0x3ec950: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ec950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ec954:
    // 0x3ec954: 0x0  nop
    ctx->pc = 0x3ec954u;
    // NOP
label_3ec958:
    // 0x3ec958: 0x0  nop
    ctx->pc = 0x3ec958u;
    // NOP
label_3ec95c:
    // 0x3ec95c: 0x0  nop
    ctx->pc = 0x3ec95cu;
    // NOP
label_3ec960:
    // 0x3ec960: 0x0  nop
    ctx->pc = 0x3ec960u;
    // NOP
label_3ec964:
    // 0x3ec964: 0x0  nop
    ctx->pc = 0x3ec964u;
    // NOP
label_3ec968:
    // 0x3ec968: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3ec96c:
    if (ctx->pc == 0x3EC96Cu) {
        ctx->pc = 0x3EC96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC968u;
        // 0x3ec96c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC970u;
        goto label_3ec970;
    }
    ctx->pc = 0x3EC968u;
    {
        const bool branch_taken_0x3ec968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EC96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC968u;
        // 0x3ec96c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec968) {
            ctx->pc = 0x3EC958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec958;
        }
    }
    ctx->pc = 0x3EC970u;
label_3ec970:
    // 0x3ec970: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3ec970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ec974:
    // 0x3ec974: 0xc138ddc  jal         func_4E3770
label_3ec978:
    if (ctx->pc == 0x3EC978u) {
        ctx->pc = 0x3EC978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC974u;
        // 0x3ec978: 0x24130013  addiu       $s3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC97Cu;
        goto label_3ec97c;
    }
    ctx->pc = 0x3EC974u;
    SET_GPR_U32(ctx, 31, 0x3EC97Cu);
    ctx->pc = 0x3EC978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC974u;
    // 0x3ec978: 0x24130013  addiu       $s3, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3EC974u, 0x3EC97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC97Cu;
label_3ec97c:
    // 0x3ec97c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ec97cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec980:
    // 0x3ec980: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ec980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ec984:
    // 0x3ec984: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3ec984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3ec988:
    // 0x3ec988: 0x27b20420  addiu       $s2, $sp, 0x420
    ctx->pc = 0x3ec988u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3ec98c:
    // 0x3ec98c: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x3ec98cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_3ec990:
    // 0x3ec990: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x3ec990u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_3ec994:
    // 0x3ec994: 0x10000024  b           . + 4 + (0x24 << 2)
label_3ec998:
    if (ctx->pc == 0x3EC998u) {
        ctx->pc = 0x3EC998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC994u;
        // 0x3ec998: 0x3c160058  lui         $s6, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC99Cu;
        goto label_3ec99c;
    }
    ctx->pc = 0x3EC994u;
    {
        const bool branch_taken_0x3ec994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC994u;
        // 0x3ec998: 0x3c160058  lui         $s6, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec994) {
            ctx->pc = 0x3ECA28u;
            goto label_3eca28;
        }
    }
    ctx->pc = 0x3EC99Cu;
label_3ec99c:
    // 0x3ec99c: 0x0  nop
    ctx->pc = 0x3ec99cu;
    // NOP
label_3ec9a0:
    // 0x3ec9a0: 0xc0e8b36  jal         func_3A2CD8
label_3ec9a4:
    if (ctx->pc == 0x3EC9A4u) {
        ctx->pc = 0x3EC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC9A0u;
        // 0x3ec9a4: 0x8fc42c7c  lw          $a0, 0x2C7C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC9A8u;
        goto label_3ec9a8;
    }
    ctx->pc = 0x3EC9A0u;
    SET_GPR_U32(ctx, 31, 0x3EC9A8u);
    ctx->pc = 0x3EC9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC9A0u;
    // 0x3ec9a4: 0x8fc42c7c  lw          $a0, 0x2C7C($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2CD8u, 0x3EC9A0u, 0x3EC9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC9A8u;
label_3ec9a8:
    // 0x3ec9a8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3ec9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3ec9ac:
    // 0x3ec9ac: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x3ec9acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3ec9b0:
    // 0x3ec9b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ec9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ec9b4:
    // 0x3ec9b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3ec9b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3ec9b8:
    // 0x3ec9b8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3ec9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ec9bc:
    // 0x3ec9bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ec9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ec9c0:
    // 0x3ec9c0: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x3ec9c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_3ec9c4:
    // 0x3ec9c4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3ec9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3ec9c8:
    // 0x3ec9c8: 0x40f809  jalr        $v0
label_3ec9cc:
    if (ctx->pc == 0x3EC9CCu) {
        ctx->pc = 0x3EC9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC9C8u;
        // 0x3ec9cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC9D0u;
        goto label_3ec9d0;
    }
    ctx->pc = 0x3EC9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EC9D0u);
        ctx->pc = 0x3EC9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC9C8u;
        // 0x3ec9cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC9C8u, 0x3EC9D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EC9D0u;
label_3ec9d0:
    // 0x3ec9d0: 0x26c45c30  addiu       $a0, $s6, 0x5C30
    ctx->pc = 0x3ec9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 23600));
label_3ec9d4:
    // 0x3ec9d4: 0xc10d74c  jal         func_435D30
label_3ec9d8:
    if (ctx->pc == 0x3EC9D8u) {
        ctx->pc = 0x3EC9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC9D4u;
        // 0x3ec9d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC9DCu;
        goto label_3ec9dc;
    }
    ctx->pc = 0x3EC9D4u;
    SET_GPR_U32(ctx, 31, 0x3EC9DCu);
    ctx->pc = 0x3EC9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC9D4u;
    // 0x3ec9d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x3EC9D4u, 0x3EC9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC9DCu;
label_3ec9dc:
    // 0x3ec9dc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_3ec9e0:
    if (ctx->pc == 0x3EC9E0u) {
        ctx->pc = 0x3EC9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC9DCu;
        // 0x3ec9e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC9E4u;
        goto label_3ec9e4;
    }
    ctx->pc = 0x3EC9DCu;
    {
        const bool branch_taken_0x3ec9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC9DCu;
        // 0x3ec9e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec9dc) {
            ctx->pc = 0x3ECA28u;
            goto label_3eca28;
        }
    }
    ctx->pc = 0x3EC9E4u;
label_3ec9e4:
    // 0x3ec9e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ec9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ec9e8:
    // 0x3ec9e8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x3ec9e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_3ec9ec:
    // 0x3ec9ec: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x3ec9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_3ec9f0:
    // 0x3ec9f0: 0x60f809  jalr        $v1
label_3ec9f4:
    if (ctx->pc == 0x3EC9F4u) {
        ctx->pc = 0x3EC9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC9F0u;
        // 0x3ec9f4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC9F8u;
        goto label_3ec9f8;
    }
    ctx->pc = 0x3EC9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3EC9F8u);
        ctx->pc = 0x3EC9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC9F0u;
        // 0x3ec9f4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC9F0u, 0x3EC9F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EC9F8u;
label_3ec9f8:
    // 0x3ec9f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ec9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ec9fc:
    // 0x3ec9fc: 0xc0cdb38  jal         func_336CE0
label_3eca00:
    if (ctx->pc == 0x3ECA00u) {
        ctx->pc = 0x3ECA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC9FCu;
        // 0x3eca00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECA04u;
        goto label_3eca04;
    }
    ctx->pc = 0x3EC9FCu;
    SET_GPR_U32(ctx, 31, 0x3ECA04u);
    ctx->pc = 0x3ECA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC9FCu;
    // 0x3eca00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x3EC9FCu, 0x3ECA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECA04u;
label_3eca04:
    // 0x3eca04: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3eca04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3eca08:
    // 0x3eca08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3eca08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3eca0c:
    // 0x3eca0c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_3eca10:
    if (ctx->pc == 0x3ECA10u) {
        ctx->pc = 0x3ECA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECA0Cu;
        // 0x3eca10: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECA14u;
        goto label_3eca14;
    }
    ctx->pc = 0x3ECA0Cu;
    {
        const bool branch_taken_0x3eca0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ECA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECA0Cu;
        // 0x3eca10: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eca0c) {
            ctx->pc = 0x3ECA28u;
            goto label_3eca28;
        }
    }
    ctx->pc = 0x3ECA14u;
label_3eca14:
    // 0x3eca14: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3eca14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3eca18:
    // 0x3eca18: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3eca18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3eca1c:
    // 0x3eca1c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3eca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3eca20:
    // 0x3eca20: 0x60f809  jalr        $v1
label_3eca24:
    if (ctx->pc == 0x3ECA24u) {
        ctx->pc = 0x3ECA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECA20u;
        // 0x3eca24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECA28u;
        goto label_3eca28;
    }
    ctx->pc = 0x3ECA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3ECA28u);
        ctx->pc = 0x3ECA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECA20u;
        // 0x3eca24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ECA20u, 0x3ECA28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ECA28u;
label_3eca28:
    // 0x3eca28: 0x8ee42c7c  lw          $a0, 0x2C7C($s7)
    ctx->pc = 0x3eca28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11388)));
label_3eca2c:
    // 0x3eca2c: 0xc0e8b36  jal         func_3A2CD8
label_3eca30:
    if (ctx->pc == 0x3ECA30u) {
        ctx->pc = 0x3ECA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECA2Cu;
        // 0x3eca30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECA34u;
        goto label_3eca34;
    }
    ctx->pc = 0x3ECA2Cu;
    SET_GPR_U32(ctx, 31, 0x3ECA34u);
    ctx->pc = 0x3ECA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECA2Cu;
    // 0x3eca30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2CD8u, 0x3ECA2Cu, 0x3ECA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECA34u;
label_3eca34:
    // 0x3eca34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eca34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eca38:
    // 0x3eca38: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x3eca38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_3eca3c:
    // 0x3eca3c: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x3eca3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3eca40:
    // 0x3eca40: 0xa0f809  jalr        $a1
label_3eca44:
    if (ctx->pc == 0x3ECA44u) {
        ctx->pc = 0x3ECA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECA40u;
        // 0x3eca44: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECA48u;
        goto label_3eca48;
    }
    ctx->pc = 0x3ECA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3ECA48u);
        ctx->pc = 0x3ECA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECA40u;
        // 0x3eca44: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ECA40u, 0x3ECA48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ECA48u;
label_3eca48:
    // 0x3eca48: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3eca48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3eca4c:
    // 0x3eca4c: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_3eca50:
    if (ctx->pc == 0x3ECA50u) {
        ctx->pc = 0x3ECA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECA4Cu;
        // 0x3eca50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECA54u;
        goto label_3eca54;
    }
    ctx->pc = 0x3ECA4Cu;
    {
        const bool branch_taken_0x3eca4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ECA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECA4Cu;
        // 0x3eca50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eca4c) {
            ctx->pc = 0x3EC9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec9a0;
        }
    }
    ctx->pc = 0x3ECA54u;
label_3eca54:
    // 0x3eca54: 0x7bb004d0  lq          $s0, 0x4D0($sp)
    ctx->pc = 0x3eca54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3eca58:
    // 0x3eca58: 0x7bb104c0  lq          $s1, 0x4C0($sp)
    ctx->pc = 0x3eca58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3eca5c:
    // 0x3eca5c: 0x7bb204b0  lq          $s2, 0x4B0($sp)
    ctx->pc = 0x3eca5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3eca60:
    // 0x3eca60: 0x7bb304a0  lq          $s3, 0x4A0($sp)
    ctx->pc = 0x3eca60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3eca64:
    // 0x3eca64: 0x7bb40490  lq          $s4, 0x490($sp)
    ctx->pc = 0x3eca64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3eca68:
    // 0x3eca68: 0x7bb50480  lq          $s5, 0x480($sp)
    ctx->pc = 0x3eca68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3eca6c:
    // 0x3eca6c: 0x7bb60470  lq          $s6, 0x470($sp)
    ctx->pc = 0x3eca6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3eca70:
    // 0x3eca70: 0x7bb70460  lq          $s7, 0x460($sp)
    ctx->pc = 0x3eca70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3eca74:
    // 0x3eca74: 0x7bbe0450  lq          $fp, 0x450($sp)
    ctx->pc = 0x3eca74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3eca78:
    // 0x3eca78: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x3eca78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
label_3eca7c:
    // 0x3eca7c: 0xc7b404e0  lwc1        $f20, 0x4E0($sp)
    ctx->pc = 0x3eca7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3eca80:
    // 0x3eca80: 0x3e00008  jr          $ra
label_3eca84:
    if (ctx->pc == 0x3ECA84u) {
        ctx->pc = 0x3ECA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECA80u;
        // 0x3eca84: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ECA88u;
        goto label_fallthrough_0x3eca80;
    }
    ctx->pc = 0x3ECA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ECA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECA80u;
        // 0x3eca84: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ECA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3eca80:
    ctx->pc = 0x3ECA88u;
}
