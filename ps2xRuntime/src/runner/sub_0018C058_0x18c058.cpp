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

// Function: sub_0018C058
// Address: 0x18c058 - 0x18c310
void sub_0018C058_0x18c058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C058_0x18c058");
#endif

    switch (ctx->pc) {
        case 0x18c058u: goto label_18c058;
        case 0x18c05cu: goto label_18c05c;
        case 0x18c060u: goto label_18c060;
        case 0x18c064u: goto label_18c064;
        case 0x18c068u: goto label_18c068;
        case 0x18c06cu: goto label_18c06c;
        case 0x18c070u: goto label_18c070;
        case 0x18c074u: goto label_18c074;
        case 0x18c078u: goto label_18c078;
        case 0x18c07cu: goto label_18c07c;
        case 0x18c080u: goto label_18c080;
        case 0x18c084u: goto label_18c084;
        case 0x18c088u: goto label_18c088;
        case 0x18c08cu: goto label_18c08c;
        case 0x18c090u: goto label_18c090;
        case 0x18c094u: goto label_18c094;
        case 0x18c098u: goto label_18c098;
        case 0x18c09cu: goto label_18c09c;
        case 0x18c0a0u: goto label_18c0a0;
        case 0x18c0a4u: goto label_18c0a4;
        case 0x18c0a8u: goto label_18c0a8;
        case 0x18c0acu: goto label_18c0ac;
        case 0x18c0b0u: goto label_18c0b0;
        case 0x18c0b4u: goto label_18c0b4;
        case 0x18c0b8u: goto label_18c0b8;
        case 0x18c0bcu: goto label_18c0bc;
        case 0x18c0c0u: goto label_18c0c0;
        case 0x18c0c4u: goto label_18c0c4;
        case 0x18c0c8u: goto label_18c0c8;
        case 0x18c0ccu: goto label_18c0cc;
        case 0x18c0d0u: goto label_18c0d0;
        case 0x18c0d4u: goto label_18c0d4;
        case 0x18c0d8u: goto label_18c0d8;
        case 0x18c0dcu: goto label_18c0dc;
        case 0x18c0e0u: goto label_18c0e0;
        case 0x18c0e4u: goto label_18c0e4;
        case 0x18c0e8u: goto label_18c0e8;
        case 0x18c0ecu: goto label_18c0ec;
        case 0x18c0f0u: goto label_18c0f0;
        case 0x18c0f4u: goto label_18c0f4;
        case 0x18c0f8u: goto label_18c0f8;
        case 0x18c0fcu: goto label_18c0fc;
        case 0x18c100u: goto label_18c100;
        case 0x18c104u: goto label_18c104;
        case 0x18c108u: goto label_18c108;
        case 0x18c10cu: goto label_18c10c;
        case 0x18c110u: goto label_18c110;
        case 0x18c114u: goto label_18c114;
        case 0x18c118u: goto label_18c118;
        case 0x18c11cu: goto label_18c11c;
        case 0x18c120u: goto label_18c120;
        case 0x18c124u: goto label_18c124;
        case 0x18c128u: goto label_18c128;
        case 0x18c12cu: goto label_18c12c;
        case 0x18c130u: goto label_18c130;
        case 0x18c134u: goto label_18c134;
        case 0x18c138u: goto label_18c138;
        case 0x18c13cu: goto label_18c13c;
        case 0x18c140u: goto label_18c140;
        case 0x18c144u: goto label_18c144;
        case 0x18c148u: goto label_18c148;
        case 0x18c14cu: goto label_18c14c;
        case 0x18c150u: goto label_18c150;
        case 0x18c154u: goto label_18c154;
        case 0x18c158u: goto label_18c158;
        case 0x18c15cu: goto label_18c15c;
        case 0x18c160u: goto label_18c160;
        case 0x18c164u: goto label_18c164;
        case 0x18c168u: goto label_18c168;
        case 0x18c16cu: goto label_18c16c;
        case 0x18c170u: goto label_18c170;
        case 0x18c174u: goto label_18c174;
        case 0x18c178u: goto label_18c178;
        case 0x18c17cu: goto label_18c17c;
        case 0x18c180u: goto label_18c180;
        case 0x18c184u: goto label_18c184;
        case 0x18c188u: goto label_18c188;
        case 0x18c18cu: goto label_18c18c;
        case 0x18c190u: goto label_18c190;
        case 0x18c194u: goto label_18c194;
        case 0x18c198u: goto label_18c198;
        case 0x18c19cu: goto label_18c19c;
        case 0x18c1a0u: goto label_18c1a0;
        case 0x18c1a4u: goto label_18c1a4;
        case 0x18c1a8u: goto label_18c1a8;
        case 0x18c1acu: goto label_18c1ac;
        case 0x18c1b0u: goto label_18c1b0;
        case 0x18c1b4u: goto label_18c1b4;
        case 0x18c1b8u: goto label_18c1b8;
        case 0x18c1bcu: goto label_18c1bc;
        case 0x18c1c0u: goto label_18c1c0;
        case 0x18c1c4u: goto label_18c1c4;
        case 0x18c1c8u: goto label_18c1c8;
        case 0x18c1ccu: goto label_18c1cc;
        case 0x18c1d0u: goto label_18c1d0;
        case 0x18c1d4u: goto label_18c1d4;
        case 0x18c1d8u: goto label_18c1d8;
        case 0x18c1dcu: goto label_18c1dc;
        case 0x18c1e0u: goto label_18c1e0;
        case 0x18c1e4u: goto label_18c1e4;
        case 0x18c1e8u: goto label_18c1e8;
        case 0x18c1ecu: goto label_18c1ec;
        case 0x18c1f0u: goto label_18c1f0;
        case 0x18c1f4u: goto label_18c1f4;
        case 0x18c1f8u: goto label_18c1f8;
        case 0x18c1fcu: goto label_18c1fc;
        case 0x18c200u: goto label_18c200;
        case 0x18c204u: goto label_18c204;
        case 0x18c208u: goto label_18c208;
        case 0x18c20cu: goto label_18c20c;
        case 0x18c210u: goto label_18c210;
        case 0x18c214u: goto label_18c214;
        case 0x18c218u: goto label_18c218;
        case 0x18c21cu: goto label_18c21c;
        case 0x18c220u: goto label_18c220;
        case 0x18c224u: goto label_18c224;
        case 0x18c228u: goto label_18c228;
        case 0x18c22cu: goto label_18c22c;
        case 0x18c230u: goto label_18c230;
        case 0x18c234u: goto label_18c234;
        case 0x18c238u: goto label_18c238;
        case 0x18c23cu: goto label_18c23c;
        case 0x18c240u: goto label_18c240;
        case 0x18c244u: goto label_18c244;
        case 0x18c248u: goto label_18c248;
        case 0x18c24cu: goto label_18c24c;
        case 0x18c250u: goto label_18c250;
        case 0x18c254u: goto label_18c254;
        case 0x18c258u: goto label_18c258;
        case 0x18c25cu: goto label_18c25c;
        case 0x18c260u: goto label_18c260;
        case 0x18c264u: goto label_18c264;
        case 0x18c268u: goto label_18c268;
        case 0x18c26cu: goto label_18c26c;
        case 0x18c270u: goto label_18c270;
        case 0x18c274u: goto label_18c274;
        case 0x18c278u: goto label_18c278;
        case 0x18c27cu: goto label_18c27c;
        case 0x18c280u: goto label_18c280;
        case 0x18c284u: goto label_18c284;
        case 0x18c288u: goto label_18c288;
        case 0x18c28cu: goto label_18c28c;
        case 0x18c290u: goto label_18c290;
        case 0x18c294u: goto label_18c294;
        case 0x18c298u: goto label_18c298;
        case 0x18c29cu: goto label_18c29c;
        case 0x18c2a0u: goto label_18c2a0;
        case 0x18c2a4u: goto label_18c2a4;
        case 0x18c2a8u: goto label_18c2a8;
        case 0x18c2acu: goto label_18c2ac;
        case 0x18c2b0u: goto label_18c2b0;
        case 0x18c2b4u: goto label_18c2b4;
        case 0x18c2b8u: goto label_18c2b8;
        case 0x18c2bcu: goto label_18c2bc;
        case 0x18c2c0u: goto label_18c2c0;
        case 0x18c2c4u: goto label_18c2c4;
        case 0x18c2c8u: goto label_18c2c8;
        case 0x18c2ccu: goto label_18c2cc;
        case 0x18c2d0u: goto label_18c2d0;
        case 0x18c2d4u: goto label_18c2d4;
        case 0x18c2d8u: goto label_18c2d8;
        case 0x18c2dcu: goto label_18c2dc;
        case 0x18c2e0u: goto label_18c2e0;
        case 0x18c2e4u: goto label_18c2e4;
        case 0x18c2e8u: goto label_18c2e8;
        case 0x18c2ecu: goto label_18c2ec;
        case 0x18c2f0u: goto label_18c2f0;
        case 0x18c2f4u: goto label_18c2f4;
        case 0x18c2f8u: goto label_18c2f8;
        case 0x18c2fcu: goto label_18c2fc;
        case 0x18c300u: goto label_18c300;
        case 0x18c304u: goto label_18c304;
        case 0x18c308u: goto label_18c308;
        case 0x18c30cu: goto label_18c30c;
        default: break;
    }

    ctx->pc = 0x18c058u;

label_18c058:
    // 0x18c058: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x18c058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_18c05c:
    // 0x18c05c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x18c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_18c060:
    // 0x18c060: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x18c060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_18c064:
    // 0x18c064: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x18c064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_18c068:
    // 0x18c068: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18c068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_18c06c:
    // 0x18c06c: 0x241400ff  addiu       $s4, $zero, 0xFF
    ctx->pc = 0x18c06cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_18c070:
    // 0x18c070: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x18c070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_18c074:
    // 0x18c074: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x18c074u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c078:
    // 0x18c078: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x18c078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_18c07c:
    // 0x18c07c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x18c07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_18c080:
    // 0x18c080: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x18c080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_18c084:
    // 0x18c084: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x18c084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_18c088:
    // 0x18c088: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x18c088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_18c08c:
    // 0x18c08c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x18c08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_18c090:
    // 0x18c090: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18c090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18c094:
    // 0x18c094: 0x8c4627e4  lw          $a2, 0x27E4($v0)
    ctx->pc = 0x18c094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_18c098:
    // 0x18c098: 0x8c65b9b8  lw          $a1, -0x4648($v1)
    ctx->pc = 0x18c098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949304)));
label_18c09c:
    // 0x18c09c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x18c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_18c0a0:
    // 0x18c0a0: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x18c0a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_18c0a4:
    // 0x18c0a4: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x18c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_18c0a8:
    // 0x18c0a8: 0x60f809  jalr        $v1
label_18c0ac:
    if (ctx->pc == 0x18C0ACu) {
        ctx->pc = 0x18C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0A8u;
        // 0x18c0ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C0B0u;
        goto label_18c0b0;
    }
    ctx->pc = 0x18C0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18C0B0u);
        ctx->pc = 0x18C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0A8u;
        // 0x18c0ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C0A8u, 0x18C0B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C0B0u;
label_18c0b0:
    // 0x18c0b0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_18c0b4:
    // 0x18c0b4: 0x3a0b82d  daddu       $s7, $sp, $zero
    ctx->pc = 0x18c0b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18c0b8:
    // 0x18c0b8: 0x37b60004  ori         $s6, $sp, 0x4
    ctx->pc = 0x18c0b8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_18c0bc:
    // 0x18c0bc: 0x245edeb8  addiu       $fp, $v0, -0x2148
    ctx->pc = 0x18c0bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_18c0c0:
    // 0x18c0c0: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x18c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_18c0c4:
    // 0x18c0c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18c0c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c0c8:
    // 0x18c0c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18c0c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c0cc:
    // 0x18c0cc: 0x26b30001  addiu       $s3, $s5, 0x1
    ctx->pc = 0x18c0ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_18c0d0:
    // 0x18c0d0: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x18c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_18c0d4:
    // 0x18c0d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18c0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18c0d8:
    // 0x18c0d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18c0d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c0dc:
    // 0x18c0dc: 0xc062e54  jal         func_18B950
label_18c0e0:
    if (ctx->pc == 0x18C0E0u) {
        ctx->pc = 0x18C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0DCu;
        // 0x18c0e0: 0x8c850198  lw          $a1, 0x198($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C0E4u;
        goto label_18c0e4;
    }
    ctx->pc = 0x18C0DCu;
    SET_GPR_U32(ctx, 31, 0x18C0E4u);
    ctx->pc = 0x18C0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C0DCu;
    // 0x18c0e0: 0x8c850198  lw          $a1, 0x198($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B950u, 0x18C0DCu, 0x18C0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C0E4u;
label_18c0e4:
    // 0x18c0e4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18c0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18c0e8:
    // 0x18c0e8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x18c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_18c0ec:
    // 0x18c0ec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x18c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_18c0f0:
    // 0x18c0f0: 0x8c43015c  lw          $v1, 0x15C($v0)
    ctx->pc = 0x18c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
label_18c0f4:
    // 0x18c0f4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_18c0f8:
    if (ctx->pc == 0x18C0F8u) {
        ctx->pc = 0x18C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0F4u;
        // 0x18c0f8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C0FCu;
        goto label_18c0fc;
    }
    ctx->pc = 0x18C0F4u;
    {
        const bool branch_taken_0x18c0f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c0f4) {
            ctx->pc = 0x18C0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C0F4u;
            // 0x18c0f8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C108u;
            goto label_18c108;
        }
    }
    ctx->pc = 0x18C0FCu;
label_18c0fc:
    // 0x18c0fc: 0xc062f52  jal         func_18BD48
label_18c100:
    if (ctx->pc == 0x18C100u) {
        ctx->pc = 0x18C100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0FCu;
        // 0x18c100: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C104u;
        goto label_18c104;
    }
    ctx->pc = 0x18C0FCu;
    SET_GPR_U32(ctx, 31, 0x18C104u);
    ctx->pc = 0x18C100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C0FCu;
    // 0x18c100: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD48u, 0x18C0FCu, 0x18C104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C104u;
label_18c104:
    // 0x18c104: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18c104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18c108:
    // 0x18c108: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x18c108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_18c10c:
    // 0x18c10c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_18c110:
    if (ctx->pc == 0x18C110u) {
        ctx->pc = 0x18C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C10Cu;
        // 0x18c110: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C114u;
        goto label_18c114;
    }
    ctx->pc = 0x18C10Cu;
    {
        const bool branch_taken_0x18c10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c10c) {
            ctx->pc = 0x18C110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C10Cu;
            // 0x18c110: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18c0e8;
        }
    }
    ctx->pc = 0x18C114u;
label_18c114:
    // 0x18c114: 0x25e2021  addu        $a0, $s2, $fp
    ctx->pc = 0x18c114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
label_18c118:
    // 0x18c118: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x18c118u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_18c11c:
    // 0x18c11c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c120:
    // 0x18c120: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x18c120u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_18c124:
    // 0x18c124: 0xac6001ac  sw          $zero, 0x1AC($v1)
    ctx->pc = 0x18c124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 428), GPR_U32(ctx, 0));
label_18c128:
    // 0x18c128: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18c128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c12c:
    // 0x18c12c: 0xac4001b0  sw          $zero, 0x1B0($v0)
    ctx->pc = 0x18c12cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 432), GPR_U32(ctx, 0));
label_18c130:
    // 0x18c130: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18c130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c134:
    // 0x18c134: 0xac6001c8  sw          $zero, 0x1C8($v1)
    ctx->pc = 0x18c134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 456), GPR_U32(ctx, 0));
label_18c138:
    // 0x18c138: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18c138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c13c:
    // 0x18c13c: 0xac4001cc  sw          $zero, 0x1CC($v0)
    ctx->pc = 0x18c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 460), GPR_U32(ctx, 0));
label_18c140:
    // 0x18c140: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18c140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_18c144:
    // 0x18c144: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18c144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c148:
    // 0x18c148: 0xa4750212  sh          $s5, 0x212($v1)
    ctx->pc = 0x18c148u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 530), (uint16_t)GPR_U32(ctx, 21));
label_18c14c:
    // 0x18c14c: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x18c14cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18c150:
    // 0x18c150: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18c150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c154:
    // 0x18c154: 0x2ea70002  sltiu       $a3, $s5, 0x2
    ctx->pc = 0x18c154u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18c158:
    // 0x18c158: 0xac620198  sw          $v0, 0x198($v1)
    ctx->pc = 0x18c158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 408), GPR_U32(ctx, 2));
label_18c15c:
    // 0x18c15c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_18c160:
    // 0x18c160: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18c160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c164:
    // 0x18c164: 0xac430194  sw          $v1, 0x194($v0)
    ctx->pc = 0x18c164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 404), GPR_U32(ctx, 3));
label_18c168:
    // 0x18c168: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18c168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c16c:
    // 0x18c16c: 0xac60019c  sw          $zero, 0x19C($v1)
    ctx->pc = 0x18c16cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 412), GPR_U32(ctx, 0));
label_18c170:
    // 0x18c170: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x18c170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_18c174:
    // 0x18c174: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x18c174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c178:
    // 0x18c178: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x18c178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_18c17c:
    // 0x18c17c: 0xaca20218  sw          $v0, 0x218($a1)
    ctx->pc = 0x18c17cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 536), GPR_U32(ctx, 2));
label_18c180:
    // 0x18c180: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18c180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c184:
    // 0x18c184: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18c184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c188:
    // 0x18c188: 0xac6501a0  sw          $a1, 0x1A0($v1)
    ctx->pc = 0x18c188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 416), GPR_U32(ctx, 5));
label_18c18c:
    // 0x18c18c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x18c18cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_18c190:
    // 0x18c190: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18c190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c194:
    // 0x18c194: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x18c194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
label_18c198:
    // 0x18c198: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18c198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c19c:
    // 0x18c19c: 0x8ca2d300  lw          $v0, -0x2D00($a1)
    ctx->pc = 0x18c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294955776)));
label_18c1a0:
    // 0x18c1a0: 0xac6201bc  sw          $v0, 0x1BC($v1)
    ctx->pc = 0x18c1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 444), GPR_U32(ctx, 2));
label_18c1a4:
    // 0x18c1a4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x18c1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_18c1a8:
    // 0x18c1a8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x18c1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c1ac:
    // 0x18c1ac: 0x8c62d300  lw          $v0, -0x2D00($v1)
    ctx->pc = 0x18c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955776)));
label_18c1b0:
    // 0x18c1b0: 0xaca201c4  sw          $v0, 0x1C4($a1)
    ctx->pc = 0x18c1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 452), GPR_U32(ctx, 2));
label_18c1b4:
    // 0x18c1b4: 0x2405ff80  addiu       $a1, $zero, -0x80
    ctx->pc = 0x18c1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
label_18c1b8:
    // 0x18c1b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18c1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c1bc:
    // 0x18c1bc: 0xa06001b4  sb          $zero, 0x1B4($v1)
    ctx->pc = 0x18c1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 436), (uint8_t)GPR_U32(ctx, 0));
label_18c1c0:
    // 0x18c1c0: 0xa3b40000  sb          $s4, 0x0($sp)
    ctx->pc = 0x18c1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 20));
label_18c1c4:
    // 0x18c1c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c1c8:
    // 0x18c1c8: 0xa2f40001  sb          $s4, 0x1($s7)
    ctx->pc = 0x18c1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 1), (uint8_t)GPR_U32(ctx, 20));
label_18c1cc:
    // 0x18c1cc: 0xa2f40002  sb          $s4, 0x2($s7)
    ctx->pc = 0x18c1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 2), (uint8_t)GPR_U32(ctx, 20));
label_18c1d0:
    // 0x18c1d0: 0xa2e50003  sb          $a1, 0x3($s7)
    ctx->pc = 0x18c1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 5));
label_18c1d4:
    // 0x18c1d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18c1d8:
    // 0x18c1d8: 0xac6201a4  sw          $v0, 0x1A4($v1)
    ctx->pc = 0x18c1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 420), GPR_U32(ctx, 2));
label_18c1dc:
    // 0x18c1dc: 0xa3b40004  sb          $s4, 0x4($sp)
    ctx->pc = 0x18c1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 20));
label_18c1e0:
    // 0x18c1e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c1e4:
    // 0x18c1e4: 0xa2d40001  sb          $s4, 0x1($s6)
    ctx->pc = 0x18c1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 20));
label_18c1e8:
    // 0x18c1e8: 0xa2d40002  sb          $s4, 0x2($s6)
    ctx->pc = 0x18c1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 20));
label_18c1ec:
    // 0x18c1ec: 0xa2c00003  sb          $zero, 0x3($s6)
    ctx->pc = 0x18c1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 0));
label_18c1f0:
    // 0x18c1f0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x18c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_18c1f4:
    // 0x18c1f4: 0xac6201a8  sw          $v0, 0x1A8($v1)
    ctx->pc = 0x18c1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 424), GPR_U32(ctx, 2));
label_18c1f8:
    // 0x18c1f8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x18c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_18c1fc:
    // 0x18c1fc: 0x8c62d260  lw          $v0, -0x2DA0($v1)
    ctx->pc = 0x18c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955616)));
label_18c200:
    // 0x18c200: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x18c200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c204:
    // 0x18c204: 0xaca201d0  sw          $v0, 0x1D0($a1)
    ctx->pc = 0x18c204u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 464), GPR_U32(ctx, 2));
label_18c208:
    // 0x18c208: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18c208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c20c:
    // 0x18c20c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18c20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c210:
    // 0x18c210: 0xac6001d4  sw          $zero, 0x1D4($v1)
    ctx->pc = 0x18c210u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 468), GPR_U32(ctx, 0));
label_18c214:
    // 0x18c214: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18c214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c218:
    // 0x18c218: 0xac4001d8  sw          $zero, 0x1D8($v0)
    ctx->pc = 0x18c218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 0));
label_18c21c:
    // 0x18c21c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18c21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c220:
    // 0x18c220: 0xac6001dc  sw          $zero, 0x1DC($v1)
    ctx->pc = 0x18c220u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 476), GPR_U32(ctx, 0));
label_18c224:
    // 0x18c224: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18c224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c228:
    // 0x18c228: 0xac4601f4  sw          $a2, 0x1F4($v0)
    ctx->pc = 0x18c228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 500), GPR_U32(ctx, 6));
label_18c22c:
    // 0x18c22c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c230:
    // 0x18c230: 0xac6001e8  sw          $zero, 0x1E8($v1)
    ctx->pc = 0x18c230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 0));
label_18c234:
    // 0x18c234: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18c234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c238:
    // 0x18c238: 0xac4001ec  sw          $zero, 0x1EC($v0)
    ctx->pc = 0x18c238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 492), GPR_U32(ctx, 0));
label_18c23c:
    // 0x18c23c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18c23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c240:
    // 0x18c240: 0xac6001f0  sw          $zero, 0x1F0($v1)
    ctx->pc = 0x18c240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 496), GPR_U32(ctx, 0));
label_18c244:
    // 0x18c244: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18c244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c248:
    // 0x18c248: 0xac4001f8  sw          $zero, 0x1F8($v0)
    ctx->pc = 0x18c248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 504), GPR_U32(ctx, 0));
label_18c24c:
    // 0x18c24c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c250:
    // 0x18c250: 0xac6001fc  sw          $zero, 0x1FC($v1)
    ctx->pc = 0x18c250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 508), GPR_U32(ctx, 0));
label_18c254:
    // 0x18c254: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18c254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c258:
    // 0x18c258: 0xac400200  sw          $zero, 0x200($v0)
    ctx->pc = 0x18c258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 512), GPR_U32(ctx, 0));
label_18c25c:
    // 0x18c25c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18c25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c260:
    // 0x18c260: 0xac6501b8  sw          $a1, 0x1B8($v1)
    ctx->pc = 0x18c260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 440), GPR_U32(ctx, 5));
label_18c264:
    // 0x18c264: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18c264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18c268:
    // 0x18c268: 0x14e0ff95  bnez        $a3, . + 4 + (-0x6B << 2)
label_18c26c:
    if (ctx->pc == 0x18C26Cu) {
        ctx->pc = 0x18C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C268u;
        // 0x18c26c: 0xa4400210  sh          $zero, 0x210($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 528), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C270u;
        goto label_18c270;
    }
    ctx->pc = 0x18C268u;
    {
        const bool branch_taken_0x18c268 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C268u;
        // 0x18c26c: 0xa4400210  sh          $zero, 0x210($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 528), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c268) {
            ctx->pc = 0x18C0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18c0c0;
        }
    }
    ctx->pc = 0x18C270u;
label_18c270:
    // 0x18c270: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18c270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_18c274:
    // 0x18c274: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18c274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18c278:
    // 0x18c278: 0x2450dec0  addiu       $s0, $v0, -0x2140
    ctx->pc = 0x18c278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958784));
label_18c27c:
    // 0x18c27c: 0x3c120055  lui         $s2, 0x55
    ctx->pc = 0x18c27cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)85 << 16));
label_18c280:
    // 0x18c280: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18c280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18c284:
    // 0x18c284: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_18c288:
    if (ctx->pc == 0x18C288u) {
        ctx->pc = 0x18C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C284u;
        // 0x18c288: 0x26452ef0  addiu       $a1, $s2, 0x2EF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C28Cu;
        goto label_18c28c;
    }
    ctx->pc = 0x18C284u;
    {
        const bool branch_taken_0x18c284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C284u;
        // 0x18c288: 0x26452ef0  addiu       $a1, $s2, 0x2EF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c284) {
            ctx->pc = 0x18C298u;
            goto label_18c298;
        }
    }
    ctx->pc = 0x18C28Cu;
label_18c28c:
    // 0x18c28c: 0xc138dca  jal         func_4E3728
label_18c290:
    if (ctx->pc == 0x18C290u) {
        ctx->pc = 0x18C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C28Cu;
        // 0x18c290: 0x240601dd  addiu       $a2, $zero, 0x1DD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 477));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C294u;
        goto label_18c294;
    }
    ctx->pc = 0x18C28Cu;
    SET_GPR_U32(ctx, 31, 0x18C294u);
    ctx->pc = 0x18C290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C28Cu;
    // 0x18c290: 0x240601dd  addiu       $a2, $zero, 0x1DD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 477));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3728u, 0x18C28Cu, 0x18C294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C294u;
label_18c294:
    // 0x18c294: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x18c294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_18c298:
    // 0x18c298: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_18c29c:
    // 0x18c29c: 0x2e220019  sltiu       $v0, $s1, 0x19
    ctx->pc = 0x18c29cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_18c2a0:
    // 0x18c2a0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_18c2a4:
    if (ctx->pc == 0x18C2A4u) {
        ctx->pc = 0x18C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2A0u;
        // 0x18c2a4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C2A8u;
        goto label_18c2a8;
    }
    ctx->pc = 0x18C2A0u;
    {
        const bool branch_taken_0x18c2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2A0u;
        // 0x18c2a4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c2a0) {
            ctx->pc = 0x18C280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18c280;
        }
    }
    ctx->pc = 0x18C2A8u;
label_18c2a8:
    // 0x18c2a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x18c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_18c2ac:
    // 0x18c2ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x18c2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_18c2b0:
    // 0x18c2b0: 0x8c4627e4  lw          $a2, 0x27E4($v0)
    ctx->pc = 0x18c2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_18c2b4:
    // 0x18c2b4: 0x8c65b9b8  lw          $a1, -0x4648($v1)
    ctx->pc = 0x18c2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949304)));
label_18c2b8:
    // 0x18c2b8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x18c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_18c2bc:
    // 0x18c2bc: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x18c2bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_18c2c0:
    // 0x18c2c0: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x18c2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_18c2c4:
    // 0x18c2c4: 0x60f809  jalr        $v1
label_18c2c8:
    if (ctx->pc == 0x18C2C8u) {
        ctx->pc = 0x18C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2C4u;
        // 0x18c2c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C2CCu;
        goto label_18c2cc;
    }
    ctx->pc = 0x18C2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18C2CCu);
        ctx->pc = 0x18C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2C4u;
        // 0x18c2c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C2C4u, 0x18C2CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C2CCu;
label_18c2cc:
    // 0x18c2cc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_18c2d0:
    // 0x18c2d0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x18c2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_18c2d4:
    // 0x18c2d4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x18c2d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_18c2d8:
    // 0x18c2d8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x18c2d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18c2dc:
    // 0x18c2dc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x18c2dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_18c2e0:
    // 0x18c2e0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x18c2e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18c2e4:
    // 0x18c2e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18c2e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18c2e8:
    // 0x18c2e8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x18c2e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18c2ec:
    // 0x18c2ec: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x18c2ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18c2f0:
    // 0x18c2f0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x18c2f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18c2f4:
    // 0x18c2f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18c2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18c2f8:
    // 0x18c2f8: 0xa040df24  sb          $zero, -0x20DC($v0)
    ctx->pc = 0x18c2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294958884), (uint8_t)GPR_U32(ctx, 0));
label_18c2fc:
    // 0x18c2fc: 0x3e00008  jr          $ra
label_18c300:
    if (ctx->pc == 0x18C300u) {
        ctx->pc = 0x18C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2FCu;
        // 0x18c300: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C304u;
        goto label_18c304;
    }
    ctx->pc = 0x18C2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C2FCu;
        // 0x18c300: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C304u;
label_18c304:
    // 0x18c304: 0x0  nop
    ctx->pc = 0x18c304u;
    // NOP
label_18c308:
    // 0x18c308: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x18c308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_18c30c:
    // 0x18c30c: 0x0  nop
    ctx->pc = 0x18c30cu;
    // NOP
    ctx->pc = 0x18c310u;
}
