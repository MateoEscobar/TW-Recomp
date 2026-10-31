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

// Function: sub_00147940
// Address: 0x147940 - 0x147ef0
void sub_00147940_0x147940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147940_0x147940");
#endif

    switch (ctx->pc) {
        case 0x147998u: goto label_147998;
        case 0x1479acu: goto label_1479ac;
        case 0x147a00u: goto label_147a00;
        case 0x147a18u: goto label_147a18;
        case 0x147a38u: goto label_147a38;
        case 0x147a98u: goto label_147a98;
        case 0x147ab0u: goto label_147ab0;
        case 0x147ad0u: goto label_147ad0;
        case 0x147b28u: goto label_147b28;
        case 0x147b48u: goto label_147b48;
        case 0x147b60u: goto label_147b60;
        case 0x147b80u: goto label_147b80;
        case 0x147be0u: goto label_147be0;
        case 0x147bf8u: goto label_147bf8;
        case 0x147c50u: goto label_147c50;
        case 0x147c68u: goto label_147c68;
        case 0x147cc0u: goto label_147cc0;
        case 0x147cd8u: goto label_147cd8;
        case 0x147d24u: goto label_147d24;
        case 0x147d38u: goto label_147d38;
        case 0x147d50u: goto label_147d50;
        case 0x147da8u: goto label_147da8;
        case 0x147dc0u: goto label_147dc0;
        case 0x147de0u: goto label_147de0;
        case 0x147e3cu: goto label_147e3c;
        case 0x147e60u: goto label_147e60;
        case 0x147e78u: goto label_147e78;
        default: break;
    }

    ctx->pc = 0x147940u;

    // 0x147940: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x147940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x147944: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x147944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x147948: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x147948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x14794c: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x14794cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x147950: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x147950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x147954: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x147954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147958: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x147958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x14795c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x14795cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x147960: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x147960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x147964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x147964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147968: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x147968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14796c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x14796cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x147970: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x147970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x147974: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x147974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x147978: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x147978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x14797c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14797cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147980: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x147980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x147984: 0x82230019  lb          $v1, 0x19($s1)
    ctx->pc = 0x147984u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x147988: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x147988u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14798c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x14798cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x147990: 0xc051282  jal         func_144A08
    ctx->pc = 0x147990u;
    SET_GPR_U32(ctx, 31, 0x147998u);
    ctx->pc = 0x147994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147990u;
    // 0x147994: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A08u, 0x147990u, 0x147998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147998u;
label_147998:
    // 0x147998: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x147998u;
    {
        const bool branch_taken_0x147998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147998u;
        // 0x14799c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147998) {
            ctx->pc = 0x1479B4u;
            goto label_1479b4;
        }
    }
    ctx->pc = 0x1479A0u;
    // 0x1479a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1479a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1479a4: 0xc05128c  jal         func_144A30
    ctx->pc = 0x1479A4u;
    SET_GPR_U32(ctx, 31, 0x1479ACu);
    ctx->pc = 0x1479A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1479A4u;
    // 0x1479a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A30u, 0x1479A4u, 0x1479ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1479ACu;
label_1479ac:
    // 0x1479ac: 0x10400144  beqz        $v0, . + 4 + (0x144 << 2)
    ctx->pc = 0x1479ACu;
    {
        const bool branch_taken_0x1479ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1479B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479ACu;
        // 0x1479b0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1479ac) {
            ctx->pc = 0x147EC0u;
            goto label_147ec0;
        }
    }
    ctx->pc = 0x1479B4u;
label_1479b4:
    // 0x1479b4: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x1479b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1479b8: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x1479b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
    // 0x1479bc: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1479bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1479c0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x1479c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1479c4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1479C4u;
    {
        const bool branch_taken_0x1479c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1479c4) {
            ctx->pc = 0x1479C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1479C4u;
            // 0x1479c8: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1479D4u;
            goto label_1479d4;
        }
    }
    ctx->pc = 0x1479CCu;
    // 0x1479cc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1479ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1479d0: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1479d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_1479d4:
    // 0x1479d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1479d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1479d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1479d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1479dc: 0x8c43b740  lw          $v1, -0x48C0($v0)
    ctx->pc = 0x1479dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B740u));
    // 0x1479e0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1479e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1479e4: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1479e4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    // 0x1479e8: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x1479e8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
    // 0x1479ec: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x1479ecu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
    // 0x1479f0: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1479F0u;
    {
        const bool branch_taken_0x1479f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1479F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479F0u;
        // 0x1479f4: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1479f0) {
            ctx->pc = 0x147A84u;
            goto label_147a84;
        }
    }
    ctx->pc = 0x1479F8u;
    // 0x1479f8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1479f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1479fc: 0x2450dd10  addiu       $s0, $v0, -0x22F0
    ctx->pc = 0x1479fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958352));
label_147a00:
    // 0x147a00: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x147a00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147a04: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x147A04u;
    {
        const bool branch_taken_0x147a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A04u;
        // 0x147a08: 0x8ea2b740  lw          $v0, -0x48C0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a04) {
            ctx->pc = 0x147A74u;
            goto label_147a74;
        }
    }
    ctx->pc = 0x147A0Cu;
    // 0x147a0c: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x147a0cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x147a10: 0xc0512e2  jal         func_144B88
    ctx->pc = 0x147A10u;
    SET_GPR_U32(ctx, 31, 0x147A18u);
    ctx->pc = 0x147A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147A10u;
    // 0x147a14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B88u, 0x147A10u, 0x147A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147A18u;
label_147a18:
    // 0x147a18: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x147A18u;
    {
        const bool branch_taken_0x147a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A18u;
        // 0x147a1c: 0x8ea2b740  lw          $v0, -0x48C0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a18) {
            ctx->pc = 0x147A74u;
            goto label_147a74;
        }
    }
    ctx->pc = 0x147A20u;
    // 0x147a20: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x147a20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x147a24: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x147A24u;
    {
        const bool branch_taken_0x147a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147a24) {
            ctx->pc = 0x147A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147A24u;
            // 0x147a28: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147A50u;
            goto label_147a50;
        }
    }
    ctx->pc = 0x147A2Cu;
    // 0x147a2c: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x147a2cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x147a30: 0xc051dbc  jal         func_1476F0
    ctx->pc = 0x147A30u;
    SET_GPR_U32(ctx, 31, 0x147A38u);
    ctx->pc = 0x147A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147A30u;
    // 0x147a34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476F0u, 0x147A30u, 0x147A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147A38u;
label_147a38:
    // 0x147a38: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x147a38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x147a3c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x147a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x147a40: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x147a40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147a44: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x147A44u;
    {
        const bool branch_taken_0x147a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A44u;
        // 0x147a48: 0x8ea2b740  lw          $v0, -0x48C0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a44) {
            ctx->pc = 0x147A74u;
            goto label_147a74;
        }
    }
    ctx->pc = 0x147A4Cu;
    // 0x147a4c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x147a4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_147a50:
    // 0x147a50: 0x82230019  lb          $v1, 0x19($s1)
    ctx->pc = 0x147a50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x147a54: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x147a54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x147a58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x147a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x147a5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x147A5Cu;
    {
        const bool branch_taken_0x147a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A5Cu;
        // 0x147a60: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a5c) {
            ctx->pc = 0x147A6Cu;
            goto label_147a6c;
        }
    }
    ctx->pc = 0x147A64u;
    // 0x147a64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x147A64u;
    {
        const bool branch_taken_0x147a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A64u;
        // 0x147a68: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a64) {
            ctx->pc = 0x147A70u;
            goto label_147a70;
        }
    }
    ctx->pc = 0x147A6Cu;
label_147a6c:
    // 0x147a6c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x147a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_147a70:
    // 0x147a70: 0x8ea2b740  lw          $v0, -0x48C0($s5)
    ctx->pc = 0x147a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948672)));
label_147a74:
    // 0x147a74: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x147a74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x147a78: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x147a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147a7c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x147A7Cu;
    {
        const bool branch_taken_0x147a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A7Cu;
        // 0x147a80: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a7c) {
            ctx->pc = 0x147A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147a00;
        }
    }
    ctx->pc = 0x147A84u;
label_147a84:
    // 0x147a84: 0x8e82b758  lw          $v0, -0x48A8($s4)
    ctx->pc = 0x147a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948696)));
    // 0x147a88: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x147A88u;
    {
        const bool branch_taken_0x147a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A88u;
        // 0x147a8c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a88) {
            ctx->pc = 0x147B1Cu;
            goto label_147b1c;
        }
    }
    ctx->pc = 0x147A90u;
    // 0x147a90: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x147a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x147a94: 0x2450e010  addiu       $s0, $v0, -0x1FF0
    ctx->pc = 0x147a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959120));
label_147a98:
    // 0x147a98: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x147a98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147a9c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x147A9Cu;
    {
        const bool branch_taken_0x147a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A9Cu;
        // 0x147aa0: 0x8e82b758  lw          $v0, -0x48A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a9c) {
            ctx->pc = 0x147B0Cu;
            goto label_147b0c;
        }
    }
    ctx->pc = 0x147AA4u;
    // 0x147aa4: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x147aa4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x147aa8: 0xc051394  jal         func_144E50
    ctx->pc = 0x147AA8u;
    SET_GPR_U32(ctx, 31, 0x147AB0u);
    ctx->pc = 0x147AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147AA8u;
    // 0x147aac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144E50u, 0x147AA8u, 0x147AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147AB0u;
label_147ab0:
    // 0x147ab0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x147AB0u;
    {
        const bool branch_taken_0x147ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147AB0u;
        // 0x147ab4: 0x8e82b758  lw          $v0, -0x48A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ab0) {
            ctx->pc = 0x147B0Cu;
            goto label_147b0c;
        }
    }
    ctx->pc = 0x147AB8u;
    // 0x147ab8: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x147ab8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x147abc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x147ABCu;
    {
        const bool branch_taken_0x147abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147abc) {
            ctx->pc = 0x147AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147ABCu;
            // 0x147ac0: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147AE8u;
            goto label_147ae8;
        }
    }
    ctx->pc = 0x147AC4u;
    // 0x147ac4: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x147ac4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x147ac8: 0xc051dbc  jal         func_1476F0
    ctx->pc = 0x147AC8u;
    SET_GPR_U32(ctx, 31, 0x147AD0u);
    ctx->pc = 0x147ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147AC8u;
    // 0x147acc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476F0u, 0x147AC8u, 0x147AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147AD0u;
label_147ad0:
    // 0x147ad0: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x147ad0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x147ad4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x147ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x147ad8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x147ad8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147adc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x147ADCu;
    {
        const bool branch_taken_0x147adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147ADCu;
        // 0x147ae0: 0x8e82b758  lw          $v0, -0x48A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147adc) {
            ctx->pc = 0x147B0Cu;
            goto label_147b0c;
        }
    }
    ctx->pc = 0x147AE4u;
    // 0x147ae4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x147ae4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_147ae8:
    // 0x147ae8: 0x82230019  lb          $v1, 0x19($s1)
    ctx->pc = 0x147ae8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x147aec: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x147aecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x147af0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x147af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x147af4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x147AF4u;
    {
        const bool branch_taken_0x147af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147AF4u;
        // 0x147af8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147af4) {
            ctx->pc = 0x147B04u;
            goto label_147b04;
        }
    }
    ctx->pc = 0x147AFCu;
    // 0x147afc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x147AFCu;
    {
        const bool branch_taken_0x147afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147AFCu;
        // 0x147b00: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147afc) {
            ctx->pc = 0x147B08u;
            goto label_147b08;
        }
    }
    ctx->pc = 0x147B04u;
label_147b04:
    // 0x147b04: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x147b04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_147b08:
    // 0x147b08: 0x8e82b758  lw          $v0, -0x48A8($s4)
    ctx->pc = 0x147b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948696)));
label_147b0c:
    // 0x147b0c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x147b0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x147b10: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x147b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147b14: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x147B14u;
    {
        const bool branch_taken_0x147b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B14u;
        // 0x147b18: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b14) {
            ctx->pc = 0x147A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147a98;
        }
    }
    ctx->pc = 0x147B1Cu;
label_147b1c:
    // 0x147b1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x147b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b20: 0xc0512a0  jal         func_144A80
    ctx->pc = 0x147B20u;
    SET_GPR_U32(ctx, 31, 0x147B28u);
    ctx->pc = 0x147B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147B20u;
    // 0x147b24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A80u, 0x147B20u, 0x147B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147B28u;
label_147b28:
    // 0x147b28: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x147B28u;
    {
        const bool branch_taken_0x147b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B28u;
        // 0x147b2c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b28) {
            ctx->pc = 0x147BCCu;
            goto label_147bcc;
        }
    }
    ctx->pc = 0x147B30u;
    // 0x147b30: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x147b30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b34: 0x8c62b744  lw          $v0, -0x48BC($v1)
    ctx->pc = 0x147b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948676)));
    // 0x147b38: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x147B38u;
    {
        const bool branch_taken_0x147b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B38u;
        // 0x147b3c: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b38) {
            ctx->pc = 0x147BCCu;
            goto label_147bcc;
        }
    }
    ctx->pc = 0x147B40u;
    // 0x147b40: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x147b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x147b44: 0x2450ddd0  addiu       $s0, $v0, -0x2230
    ctx->pc = 0x147b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958544));
label_147b48:
    // 0x147b48: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x147b48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147b4c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x147B4Cu;
    {
        const bool branch_taken_0x147b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B4Cu;
        // 0x147b50: 0x8e82b744  lw          $v0, -0x48BC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b4c) {
            ctx->pc = 0x147BBCu;
            goto label_147bbc;
        }
    }
    ctx->pc = 0x147B54u;
    // 0x147b54: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x147b54u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x147b58: 0xc0512fc  jal         func_144BF0
    ctx->pc = 0x147B58u;
    SET_GPR_U32(ctx, 31, 0x147B60u);
    ctx->pc = 0x147B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147B58u;
    // 0x147b5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144BF0u, 0x147B58u, 0x147B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147B60u;
label_147b60:
    // 0x147b60: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x147B60u;
    {
        const bool branch_taken_0x147b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B60u;
        // 0x147b64: 0x8e82b744  lw          $v0, -0x48BC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b60) {
            ctx->pc = 0x147BBCu;
            goto label_147bbc;
        }
    }
    ctx->pc = 0x147B68u;
    // 0x147b68: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x147b68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x147b6c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x147B6Cu;
    {
        const bool branch_taken_0x147b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147b6c) {
            ctx->pc = 0x147B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147B6Cu;
            // 0x147b70: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147B98u;
            goto label_147b98;
        }
    }
    ctx->pc = 0x147B74u;
    // 0x147b74: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x147b74u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x147b78: 0xc051dbc  jal         func_1476F0
    ctx->pc = 0x147B78u;
    SET_GPR_U32(ctx, 31, 0x147B80u);
    ctx->pc = 0x147B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147B78u;
    // 0x147b7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476F0u, 0x147B78u, 0x147B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147B80u;
label_147b80:
    // 0x147b80: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x147b80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x147b84: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x147b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x147b88: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x147b88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147b8c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x147B8Cu;
    {
        const bool branch_taken_0x147b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B8Cu;
        // 0x147b90: 0x8e82b744  lw          $v0, -0x48BC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b8c) {
            ctx->pc = 0x147BBCu;
            goto label_147bbc;
        }
    }
    ctx->pc = 0x147B94u;
    // 0x147b94: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x147b94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_147b98:
    // 0x147b98: 0x82230019  lb          $v1, 0x19($s1)
    ctx->pc = 0x147b98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x147b9c: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x147b9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x147ba0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x147ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x147ba4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x147BA4u;
    {
        const bool branch_taken_0x147ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147BA4u;
        // 0x147ba8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ba4) {
            ctx->pc = 0x147BB4u;
            goto label_147bb4;
        }
    }
    ctx->pc = 0x147BACu;
    // 0x147bac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x147BACu;
    {
        const bool branch_taken_0x147bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147BACu;
        // 0x147bb0: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147bac) {
            ctx->pc = 0x147BB8u;
            goto label_147bb8;
        }
    }
    ctx->pc = 0x147BB4u;
label_147bb4:
    // 0x147bb4: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x147bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_147bb8:
    // 0x147bb8: 0x8e82b744  lw          $v0, -0x48BC($s4)
    ctx->pc = 0x147bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948676)));
label_147bbc:
    // 0x147bbc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x147bbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x147bc0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x147bc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147bc4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x147BC4u;
    {
        const bool branch_taken_0x147bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147BC4u;
        // 0x147bc8: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147bc4) {
            ctx->pc = 0x147B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147b48;
        }
    }
    ctx->pc = 0x147BCCu;
label_147bcc:
    // 0x147bcc: 0x8ec2b74c  lw          $v0, -0x48B4($s6)
    ctx->pc = 0x147bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948684)));
    // 0x147bd0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x147BD0u;
    {
        const bool branch_taken_0x147bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147BD0u;
        // 0x147bd4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147bd0) {
            ctx->pc = 0x147C38u;
            goto label_147c38;
        }
    }
    ctx->pc = 0x147BD8u;
    // 0x147bd8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x147bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x147bdc: 0x2450def0  addiu       $s0, $v0, -0x2110
    ctx->pc = 0x147bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958832));
label_147be0:
    // 0x147be0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x147be0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147be4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x147BE4u;
    {
        const bool branch_taken_0x147be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147BE4u;
        // 0x147be8: 0x8ec2b74c  lw          $v0, -0x48B4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147be4) {
            ctx->pc = 0x147C28u;
            goto label_147c28;
        }
    }
    ctx->pc = 0x147BECu;
    // 0x147bec: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x147becu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x147bf0: 0xc05130e  jal         func_144C38
    ctx->pc = 0x147BF0u;
    SET_GPR_U32(ctx, 31, 0x147BF8u);
    ctx->pc = 0x147BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147BF0u;
    // 0x147bf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144C38u, 0x147BF0u, 0x147BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147BF8u;
label_147bf8:
    // 0x147bf8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x147BF8u;
    {
        const bool branch_taken_0x147bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147BF8u;
        // 0x147bfc: 0x8ec2b74c  lw          $v0, -0x48B4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147bf8) {
            ctx->pc = 0x147C28u;
            goto label_147c28;
        }
    }
    ctx->pc = 0x147C00u;
    // 0x147c00: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x147c00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147c04: 0x82230019  lb          $v1, 0x19($s1)
    ctx->pc = 0x147c04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x147c08: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x147c08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x147c0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x147c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x147c10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x147C10u;
    {
        const bool branch_taken_0x147c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C10u;
        // 0x147c14: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c10) {
            ctx->pc = 0x147C20u;
            goto label_147c20;
        }
    }
    ctx->pc = 0x147C18u;
    // 0x147c18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x147C18u;
    {
        const bool branch_taken_0x147c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C18u;
        // 0x147c1c: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c18) {
            ctx->pc = 0x147C24u;
            goto label_147c24;
        }
    }
    ctx->pc = 0x147C20u;
label_147c20:
    // 0x147c20: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x147c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_147c24:
    // 0x147c24: 0x8ec2b74c  lw          $v0, -0x48B4($s6)
    ctx->pc = 0x147c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948684)));
label_147c28:
    // 0x147c28: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x147c28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x147c2c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x147c2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147c30: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x147C30u;
    {
        const bool branch_taken_0x147c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C30u;
        // 0x147c34: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c30) {
            ctx->pc = 0x147BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147be0;
        }
    }
    ctx->pc = 0x147C38u;
label_147c38:
    // 0x147c38: 0x8ee2b75c  lw          $v0, -0x48A4($s7)
    ctx->pc = 0x147c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948700)));
    // 0x147c3c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x147C3Cu;
    {
        const bool branch_taken_0x147c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C3Cu;
        // 0x147c40: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c3c) {
            ctx->pc = 0x147CA8u;
            goto label_147ca8;
        }
    }
    ctx->pc = 0x147C44u;
    // 0x147c44: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x147c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x147c48: 0x2450e070  addiu       $s0, $v0, -0x1F90
    ctx->pc = 0x147c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959216));
    // 0x147c4c: 0x0  nop
    ctx->pc = 0x147c4cu;
    // NOP
label_147c50:
    // 0x147c50: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x147c50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147c54: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x147C54u;
    {
        const bool branch_taken_0x147c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C54u;
        // 0x147c58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c54) {
            ctx->pc = 0x147C94u;
            goto label_147c94;
        }
    }
    ctx->pc = 0x147C5Cu;
    // 0x147c5c: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x147c5cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x147c60: 0xc0513be  jal         func_144EF8
    ctx->pc = 0x147C60u;
    SET_GPR_U32(ctx, 31, 0x147C68u);
    ctx->pc = 0x147C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147C60u;
    // 0x147c64: 0x9606000a  lhu         $a2, 0xA($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144EF8u, 0x147C60u, 0x147C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C68u;
label_147c68:
    // 0x147c68: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x147C68u;
    {
        const bool branch_taken_0x147c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C68u;
        // 0x147c6c: 0x8ee2b75c  lw          $v0, -0x48A4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948700)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c68) {
            ctx->pc = 0x147C98u;
            goto label_147c98;
        }
    }
    ctx->pc = 0x147C70u;
    // 0x147c70: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x147c70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147c74: 0x82230019  lb          $v1, 0x19($s1)
    ctx->pc = 0x147c74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x147c78: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x147c78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x147c7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x147c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x147c80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x147C80u;
    {
        const bool branch_taken_0x147c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C80u;
        // 0x147c84: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c80) {
            ctx->pc = 0x147C90u;
            goto label_147c90;
        }
    }
    ctx->pc = 0x147C88u;
    // 0x147c88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x147C88u;
    {
        const bool branch_taken_0x147c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C88u;
        // 0x147c8c: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c88) {
            ctx->pc = 0x147C94u;
            goto label_147c94;
        }
    }
    ctx->pc = 0x147C90u;
label_147c90:
    // 0x147c90: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x147c90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_147c94:
    // 0x147c94: 0x8ee2b75c  lw          $v0, -0x48A4($s7)
    ctx->pc = 0x147c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948700)));
label_147c98:
    // 0x147c98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x147c98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x147c9c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x147c9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147ca0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x147CA0u;
    {
        const bool branch_taken_0x147ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CA0u;
        // 0x147ca4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ca0) {
            ctx->pc = 0x147C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147c50;
        }
    }
    ctx->pc = 0x147CA8u;
label_147ca8:
    // 0x147ca8: 0x8fc2b760  lw          $v0, -0x48A0($fp)
    ctx->pc = 0x147ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294948704)));
    // 0x147cac: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x147CACu;
    {
        const bool branch_taken_0x147cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CACu;
        // 0x147cb0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147cac) {
            ctx->pc = 0x147D18u;
            goto label_147d18;
        }
    }
    ctx->pc = 0x147CB4u;
    // 0x147cb4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x147cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x147cb8: 0x2450e130  addiu       $s0, $v0, -0x1ED0
    ctx->pc = 0x147cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959408));
    // 0x147cbc: 0x0  nop
    ctx->pc = 0x147cbcu;
    // NOP
label_147cc0:
    // 0x147cc0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x147cc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147cc4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x147CC4u;
    {
        const bool branch_taken_0x147cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CC4u;
        // 0x147cc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147cc4) {
            ctx->pc = 0x147D04u;
            goto label_147d04;
        }
    }
    ctx->pc = 0x147CCCu;
    // 0x147ccc: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x147cccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x147cd0: 0xc0513d2  jal         func_144F48
    ctx->pc = 0x147CD0u;
    SET_GPR_U32(ctx, 31, 0x147CD8u);
    ctx->pc = 0x147CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147CD0u;
    // 0x147cd4: 0x9606000a  lhu         $a2, 0xA($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144F48u, 0x147CD0u, 0x147CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147CD8u;
label_147cd8:
    // 0x147cd8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x147CD8u;
    {
        const bool branch_taken_0x147cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CD8u;
        // 0x147cdc: 0x8fc2b760  lw          $v0, -0x48A0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294948704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147cd8) {
            ctx->pc = 0x147D08u;
            goto label_147d08;
        }
    }
    ctx->pc = 0x147CE0u;
    // 0x147ce0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x147ce0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147ce4: 0x82230019  lb          $v1, 0x19($s1)
    ctx->pc = 0x147ce4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x147ce8: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x147ce8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x147cec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x147cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x147cf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x147CF0u;
    {
        const bool branch_taken_0x147cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CF0u;
        // 0x147cf4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147cf0) {
            ctx->pc = 0x147D00u;
            goto label_147d00;
        }
    }
    ctx->pc = 0x147CF8u;
    // 0x147cf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x147CF8u;
    {
        const bool branch_taken_0x147cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CF8u;
        // 0x147cfc: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147cf8) {
            ctx->pc = 0x147D04u;
            goto label_147d04;
        }
    }
    ctx->pc = 0x147D00u;
label_147d00:
    // 0x147d00: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x147d00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_147d04:
    // 0x147d04: 0x8fc2b760  lw          $v0, -0x48A0($fp)
    ctx->pc = 0x147d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294948704)));
label_147d08:
    // 0x147d08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x147d08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x147d0c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x147d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147d10: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x147D10u;
    {
        const bool branch_taken_0x147d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D10u;
        // 0x147d14: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d10) {
            ctx->pc = 0x147CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147cc0;
        }
    }
    ctx->pc = 0x147D18u;
label_147d18:
    // 0x147d18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x147d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147d1c: 0xc05128c  jal         func_144A30
    ctx->pc = 0x147D1Cu;
    SET_GPR_U32(ctx, 31, 0x147D24u);
    ctx->pc = 0x147D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147D1Cu;
    // 0x147d20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A30u, 0x147D1Cu, 0x147D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147D24u;
label_147d24:
    // 0x147d24: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x147D24u;
    {
        const bool branch_taken_0x147d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D24u;
        // 0x147d28: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d24) {
            ctx->pc = 0x147D90u;
            goto label_147d90;
        }
    }
    ctx->pc = 0x147D2Cu;
    // 0x147d2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x147d2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147d30: 0x2450df50  addiu       $s0, $v0, -0x20B0
    ctx->pc = 0x147d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
    // 0x147d34: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x147d34u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_147d38:
    // 0x147d38: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x147d38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147d3c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x147D3Cu;
    {
        const bool branch_taken_0x147d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D3Cu;
        // 0x147d40: 0x8e82b750  lw          $v0, -0x48B0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d3c) {
            ctx->pc = 0x147D80u;
            goto label_147d80;
        }
    }
    ctx->pc = 0x147D44u;
    // 0x147d44: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x147d44u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x147d48: 0xc051338  jal         func_144CE0
    ctx->pc = 0x147D48u;
    SET_GPR_U32(ctx, 31, 0x147D50u);
    ctx->pc = 0x147D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147D48u;
    // 0x147d4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144CE0u, 0x147D48u, 0x147D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147D50u;
label_147d50:
    // 0x147d50: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x147D50u;
    {
        const bool branch_taken_0x147d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D50u;
        // 0x147d54: 0x8e82b750  lw          $v0, -0x48B0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d50) {
            ctx->pc = 0x147D80u;
            goto label_147d80;
        }
    }
    ctx->pc = 0x147D58u;
    // 0x147d58: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x147d58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147d5c: 0x82230019  lb          $v1, 0x19($s1)
    ctx->pc = 0x147d5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x147d60: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x147d60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x147d64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x147d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x147d68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x147D68u;
    {
        const bool branch_taken_0x147d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D68u;
        // 0x147d6c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d68) {
            ctx->pc = 0x147D78u;
            goto label_147d78;
        }
    }
    ctx->pc = 0x147D70u;
    // 0x147d70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x147D70u;
    {
        const bool branch_taken_0x147d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D70u;
        // 0x147d74: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d70) {
            ctx->pc = 0x147D7Cu;
            goto label_147d7c;
        }
    }
    ctx->pc = 0x147D78u;
label_147d78:
    // 0x147d78: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x147d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_147d7c:
    // 0x147d7c: 0x8e82b750  lw          $v0, -0x48B0($s4)
    ctx->pc = 0x147d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948688)));
label_147d80:
    // 0x147d80: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x147d80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x147d84: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x147d84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x147d88: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x147D88u;
    {
        const bool branch_taken_0x147d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D88u;
        // 0x147d8c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d88) {
            ctx->pc = 0x147D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147d38;
        }
    }
    ctx->pc = 0x147D90u;
label_147d90:
    // 0x147d90: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x147d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x147d94: 0x8c62b754  lw          $v0, -0x48AC($v1)
    ctx->pc = 0x147d94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B754u));
    // 0x147d98: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x147D98u;
    {
        const bool branch_taken_0x147d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147D98u;
        // 0x147d9c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d98) {
            ctx->pc = 0x147E30u;
            goto label_147e30;
        }
    }
    ctx->pc = 0x147DA0u;
    // 0x147da0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x147da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x147da4: 0x2450dfb0  addiu       $s0, $v0, -0x2050
    ctx->pc = 0x147da4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959024));
label_147da8:
    // 0x147da8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x147da8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147dac: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x147DACu;
    {
        const bool branch_taken_0x147dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147DACu;
        // 0x147db0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147dac) {
            ctx->pc = 0x147E1Cu;
            goto label_147e1c;
        }
    }
    ctx->pc = 0x147DB4u;
    // 0x147db4: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x147db4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x147db8: 0xc051358  jal         func_144D60
    ctx->pc = 0x147DB8u;
    SET_GPR_U32(ctx, 31, 0x147DC0u);
    ctx->pc = 0x147DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147DB8u;
    // 0x147dbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144D60u, 0x147DB8u, 0x147DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DC0u;
label_147dc0:
    // 0x147dc0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x147DC0u;
    {
        const bool branch_taken_0x147dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147DC0u;
        // 0x147dc4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147dc0) {
            ctx->pc = 0x147E1Cu;
            goto label_147e1c;
        }
    }
    ctx->pc = 0x147DC8u;
    // 0x147dc8: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x147dc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x147dcc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x147DCCu;
    {
        const bool branch_taken_0x147dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147dcc) {
            ctx->pc = 0x147DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147DCCu;
            // 0x147dd0: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147DF8u;
            goto label_147df8;
        }
    }
    ctx->pc = 0x147DD4u;
    // 0x147dd4: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x147dd4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x147dd8: 0xc051dbc  jal         func_1476F0
    ctx->pc = 0x147DD8u;
    SET_GPR_U32(ctx, 31, 0x147DE0u);
    ctx->pc = 0x147DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147DD8u;
    // 0x147ddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476F0u, 0x147DD8u, 0x147DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DE0u;
label_147de0:
    // 0x147de0: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x147de0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x147de4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x147de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x147de8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x147de8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147dec: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x147DECu;
    {
        const bool branch_taken_0x147dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147DECu;
        // 0x147df0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147dec) {
            ctx->pc = 0x147E1Cu;
            goto label_147e1c;
        }
    }
    ctx->pc = 0x147DF4u;
    // 0x147df4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x147df4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_147df8:
    // 0x147df8: 0x82230019  lb          $v1, 0x19($s1)
    ctx->pc = 0x147df8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x147dfc: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x147dfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x147e00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x147e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x147e04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x147E04u;
    {
        const bool branch_taken_0x147e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E04u;
        // 0x147e08: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e04) {
            ctx->pc = 0x147E14u;
            goto label_147e14;
        }
    }
    ctx->pc = 0x147E0Cu;
    // 0x147e0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x147E0Cu;
    {
        const bool branch_taken_0x147e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E0Cu;
        // 0x147e10: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e0c) {
            ctx->pc = 0x147E18u;
            goto label_147e18;
        }
    }
    ctx->pc = 0x147E14u;
label_147e14:
    // 0x147e14: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x147e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_147e18:
    // 0x147e18: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x147e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_147e1c:
    // 0x147e1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x147e1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x147e20: 0x8c62b754  lw          $v0, -0x48AC($v1)
    ctx->pc = 0x147e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948692)));
    // 0x147e24: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x147e24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147e28: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x147E28u;
    {
        const bool branch_taken_0x147e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E28u;
        // 0x147e2c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e28) {
            ctx->pc = 0x147DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147da8;
        }
    }
    ctx->pc = 0x147E30u;
label_147e30:
    // 0x147e30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x147e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147e34: 0xc05128c  jal         func_144A30
    ctx->pc = 0x147E34u;
    SET_GPR_U32(ctx, 31, 0x147E3Cu);
    ctx->pc = 0x147E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147E34u;
    // 0x147e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A30u, 0x147E34u, 0x147E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147E3Cu;
label_147e3c:
    // 0x147e3c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x147E3Cu;
    {
        const bool branch_taken_0x147e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E3Cu;
        // 0x147e40: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e3c) {
            ctx->pc = 0x147EC0u;
            goto label_147ec0;
        }
    }
    ctx->pc = 0x147E44u;
    // 0x147e44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x147e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147e48: 0x8c62b748  lw          $v0, -0x48B8($v1)
    ctx->pc = 0x147e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948680)));
    // 0x147e4c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x147E4Cu;
    {
        const bool branch_taken_0x147e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E4Cu;
        // 0x147e50: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e4c) {
            ctx->pc = 0x147EC0u;
            goto label_147ec0;
        }
    }
    ctx->pc = 0x147E54u;
    // 0x147e54: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x147e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x147e58: 0x24140008  addiu       $s4, $zero, 0x8
    ctx->pc = 0x147e58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x147e5c: 0x2450de90  addiu       $s0, $v0, -0x2170
    ctx->pc = 0x147e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
label_147e60:
    // 0x147e60: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x147e60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147e64: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x147E64u;
    {
        const bool branch_taken_0x147e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147e64) {
            ctx->pc = 0x147E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147E64u;
            // 0x147e68: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147EA8u;
            goto label_147ea8;
        }
    }
    ctx->pc = 0x147E6Cu;
    // 0x147e6c: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x147e6cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x147e70: 0xc0512ea  jal         func_144BA8
    ctx->pc = 0x147E70u;
    SET_GPR_U32(ctx, 31, 0x147E78u);
    ctx->pc = 0x147E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147E70u;
    // 0x147e74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144BA8u, 0x147E70u, 0x147E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147E78u;
label_147e78:
    // 0x147e78: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x147E78u;
    {
        const bool branch_taken_0x147e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147e78) {
            ctx->pc = 0x147E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147E78u;
            // 0x147e7c: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147EA8u;
            goto label_147ea8;
        }
    }
    ctx->pc = 0x147E80u;
    // 0x147e80: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x147e80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147e84: 0x82230019  lb          $v1, 0x19($s1)
    ctx->pc = 0x147e84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x147e88: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x147e88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x147e8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x147e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x147e90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x147E90u;
    {
        const bool branch_taken_0x147e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E90u;
        // 0x147e94: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e90) {
            ctx->pc = 0x147EA0u;
            goto label_147ea0;
        }
    }
    ctx->pc = 0x147E98u;
    // 0x147e98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x147E98u;
    {
        const bool branch_taken_0x147e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E98u;
        // 0x147e9c: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e98) {
            ctx->pc = 0x147EA4u;
            goto label_147ea4;
        }
    }
    ctx->pc = 0x147EA0u;
label_147ea0:
    // 0x147ea0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x147ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_147ea4:
    // 0x147ea4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x147ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_147ea8:
    // 0x147ea8: 0x10540005  beq         $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x147EA8u;
    {
        const bool branch_taken_0x147ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x147EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147EA8u;
        // 0x147eac: 0x8ea2b748  lw          $v0, -0x48B8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ea8) {
            ctx->pc = 0x147EC0u;
            goto label_147ec0;
        }
    }
    ctx->pc = 0x147EB0u;
    // 0x147eb0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x147eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x147eb4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x147eb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147eb8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x147EB8u;
    {
        const bool branch_taken_0x147eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147EB8u;
        // 0x147ebc: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147eb8) {
            ctx->pc = 0x147E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147e60;
        }
    }
    ctx->pc = 0x147EC0u;
label_147ec0:
    // 0x147ec0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x147ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x147ec4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x147ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x147ec8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x147ec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x147ecc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x147eccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x147ed0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x147ed0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x147ed4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x147ed4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147ed8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x147ed8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147edc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x147edcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147ee0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x147ee0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147ee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x147ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x147EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147EE8u;
        // 0x147eec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147EF0u;
}
