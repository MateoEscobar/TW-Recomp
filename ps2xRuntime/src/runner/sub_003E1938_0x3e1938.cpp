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

// Function: sub_003E1938
// Address: 0x3e1938 - 0x3e1a08
void sub_003E1938_0x3e1938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1938_0x3e1938");
#endif

    switch (ctx->pc) {
        case 0x3e1938u: goto label_3e1938;
        case 0x3e193cu: goto label_3e193c;
        case 0x3e1940u: goto label_3e1940;
        case 0x3e1944u: goto label_3e1944;
        case 0x3e1948u: goto label_3e1948;
        case 0x3e194cu: goto label_3e194c;
        case 0x3e1950u: goto label_3e1950;
        case 0x3e1954u: goto label_3e1954;
        case 0x3e1958u: goto label_3e1958;
        case 0x3e195cu: goto label_3e195c;
        case 0x3e1960u: goto label_3e1960;
        case 0x3e1964u: goto label_3e1964;
        case 0x3e1968u: goto label_3e1968;
        case 0x3e196cu: goto label_3e196c;
        case 0x3e1970u: goto label_3e1970;
        case 0x3e1974u: goto label_3e1974;
        case 0x3e1978u: goto label_3e1978;
        case 0x3e197cu: goto label_3e197c;
        case 0x3e1980u: goto label_3e1980;
        case 0x3e1984u: goto label_3e1984;
        case 0x3e1988u: goto label_3e1988;
        case 0x3e198cu: goto label_3e198c;
        case 0x3e1990u: goto label_3e1990;
        case 0x3e1994u: goto label_3e1994;
        case 0x3e1998u: goto label_3e1998;
        case 0x3e199cu: goto label_3e199c;
        case 0x3e19a0u: goto label_3e19a0;
        case 0x3e19a4u: goto label_3e19a4;
        case 0x3e19a8u: goto label_3e19a8;
        case 0x3e19acu: goto label_3e19ac;
        case 0x3e19b0u: goto label_3e19b0;
        case 0x3e19b4u: goto label_3e19b4;
        case 0x3e19b8u: goto label_3e19b8;
        case 0x3e19bcu: goto label_3e19bc;
        case 0x3e19c0u: goto label_3e19c0;
        case 0x3e19c4u: goto label_3e19c4;
        case 0x3e19c8u: goto label_3e19c8;
        case 0x3e19ccu: goto label_3e19cc;
        case 0x3e19d0u: goto label_3e19d0;
        case 0x3e19d4u: goto label_3e19d4;
        case 0x3e19d8u: goto label_3e19d8;
        case 0x3e19dcu: goto label_3e19dc;
        case 0x3e19e0u: goto label_3e19e0;
        case 0x3e19e4u: goto label_3e19e4;
        case 0x3e19e8u: goto label_3e19e8;
        case 0x3e19ecu: goto label_3e19ec;
        case 0x3e19f0u: goto label_3e19f0;
        case 0x3e19f4u: goto label_3e19f4;
        case 0x3e19f8u: goto label_3e19f8;
        case 0x3e19fcu: goto label_3e19fc;
        case 0x3e1a00u: goto label_3e1a00;
        case 0x3e1a04u: goto label_3e1a04;
        default: break;
    }

    ctx->pc = 0x3e1938u;

label_3e1938:
    // 0x3e1938: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3e1938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3e193c:
    // 0x3e193c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3e193cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3e1940:
    // 0x3e1940: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3e1940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3e1944:
    // 0x3e1944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e1944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e1948:
    // 0x3e1948: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3e1948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3e194c:
    // 0x3e194c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e194cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e1950:
    // 0x3e1950: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e1950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3e1954:
    // 0x3e1954: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e1954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e1958:
    // 0x3e1958: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e1958u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e195c:
    // 0x3e195c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e195cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e1960:
    // 0x3e1960: 0x40f809  jalr        $v0
label_3e1964:
    if (ctx->pc == 0x3E1964u) {
        ctx->pc = 0x3E1964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1960u;
        // 0x3e1964: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1968u;
        goto label_3e1968;
    }
    ctx->pc = 0x3E1960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E1968u);
        ctx->pc = 0x3E1964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1960u;
        // 0x3e1964: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1960u, 0x3E1968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E1968u;
label_3e1968:
    // 0x3e1968: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e1968u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e196c:
    // 0x3e196c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3e196cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3e1970:
    // 0x3e1970: 0xc0e858c  jal         func_3A1630
label_3e1974:
    if (ctx->pc == 0x3E1974u) {
        ctx->pc = 0x3E1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1970u;
        // 0x3e1974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1978u;
        goto label_3e1978;
    }
    ctx->pc = 0x3E1970u;
    SET_GPR_U32(ctx, 31, 0x3E1978u);
    ctx->pc = 0x3E1974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1970u;
    // 0x3e1974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E1970u, 0x3E1978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1978u;
label_3e1978:
    // 0x3e1978: 0x24021001  addiu       $v0, $zero, 0x1001
    ctx->pc = 0x3e1978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
label_3e197c:
    // 0x3e197c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e197cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e1980:
    // 0x3e1980: 0xc0ea14c  jal         func_3A8530
label_3e1984:
    if (ctx->pc == 0x3E1984u) {
        ctx->pc = 0x3E1984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1980u;
        // 0x3e1984: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1988u;
        goto label_3e1988;
    }
    ctx->pc = 0x3E1980u;
    SET_GPR_U32(ctx, 31, 0x3E1988u);
    ctx->pc = 0x3E1984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1980u;
    // 0x3e1984: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E1980u, 0x3E1988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1988u;
label_3e1988:
    // 0x3e1988: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e1988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e198c:
    // 0x3e198c: 0xc0ea12a  jal         func_3A84A8
label_3e1990:
    if (ctx->pc == 0x3E1990u) {
        ctx->pc = 0x3E1990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E198Cu;
        // 0x3e1990: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1994u;
        goto label_3e1994;
    }
    ctx->pc = 0x3E198Cu;
    SET_GPR_U32(ctx, 31, 0x3E1994u);
    ctx->pc = 0x3E1990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E198Cu;
    // 0x3e1990: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E198Cu, 0x3E1994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1994u;
label_3e1994:
    // 0x3e1994: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e1994u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e1998:
    // 0x3e1998: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e1998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e199c:
    // 0x3e199c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e199cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e19a0:
    // 0x3e19a0: 0xc0ea12a  jal         func_3A84A8
label_3e19a4:
    if (ctx->pc == 0x3E19A4u) {
        ctx->pc = 0x3E19A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E19A0u;
        // 0x3e19a4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E19A8u;
        goto label_3e19a8;
    }
    ctx->pc = 0x3E19A0u;
    SET_GPR_U32(ctx, 31, 0x3E19A8u);
    ctx->pc = 0x3E19A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E19A0u;
    // 0x3e19a4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E19A0u, 0x3E19A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E19A8u;
label_3e19a8:
    // 0x3e19a8: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x3e19a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e19ac:
    // 0x3e19ac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3e19acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3e19b0:
    // 0x3e19b0: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x3e19b0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e19b4:
    // 0x3e19b4: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x3e19b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_3e19b8:
    // 0x3e19b8: 0x7e040010  sq          $a0, 0x10($s0)
    ctx->pc = 0x3e19b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 4));
label_3e19bc:
    // 0x3e19bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3e19bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e19c0:
    // 0x3e19c0: 0x7e050040  sq          $a1, 0x40($s0)
    ctx->pc = 0x3e19c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 5));
label_3e19c4:
    // 0x3e19c4: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x3e19c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3e19c8:
    // 0x3e19c8: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x3e19c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_3e19cc:
    // 0x3e19cc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3e19ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e19d0:
    // 0x3e19d0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3e19d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3e19d4:
    // 0x3e19d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e19d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3e19d8:
    // 0x3e19d8: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3e19d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3e19dc:
    // 0x3e19dc: 0x7e450010  sq          $a1, 0x10($s2)
    ctx->pc = 0x3e19dcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 5));
label_3e19e0:
    // 0x3e19e0: 0xae470024  sw          $a3, 0x24($s2)
    ctx->pc = 0x3e19e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 7));
label_3e19e4:
    // 0x3e19e4: 0xae460020  sw          $a2, 0x20($s2)
    ctx->pc = 0x3e19e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 6));
label_3e19e8:
    // 0x3e19e8: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x3e19e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
label_3e19ec:
    // 0x3e19ec: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x3e19ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_3e19f0:
    // 0x3e19f0: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x3e19f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_3e19f4:
    // 0x3e19f4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3e19f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e19f8:
    // 0x3e19f8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3e19f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e19fc:
    // 0x3e19fc: 0x3e00008  jr          $ra
label_3e1a00:
    if (ctx->pc == 0x3E1A00u) {
        ctx->pc = 0x3E1A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E19FCu;
        // 0x3e1a00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1A04u;
        goto label_3e1a04;
    }
    ctx->pc = 0x3E19FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E19FCu;
        // 0x3e1a00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E19FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1A04u;
label_3e1a04:
    // 0x3e1a04: 0x0  nop
    ctx->pc = 0x3e1a04u;
    // NOP
    ctx->pc = 0x3e1a08u;
}
